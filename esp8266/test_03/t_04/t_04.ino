#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>

const char *ssid = "ESP8266";
const char *password = "testando";

ESP8266WebServer server(80);

void getResetCss() {
  String temp = "body,html{height:100%}a,abbr,acronym,address,applet,b,big,blockquote,body,caption,center,cite,code,dd,del,dfn,div,dl,dt,em,fieldset,font,form,html,i,iframe,img,ins,kbd,label,legend,li,object,ol,p,pre,q,s,samp,small,span,strike,strong,sub,sup,table,tbody,td,tfoot,th,thead,tr,tt,u,ul,var{margin:0;padding:0;border:0;outline:0;font-size:100%;vertical-align:baseline;background:0 0}body{line-height:1}ol,ul{list-style:none}blockquote,q{quotes:none}blockquote:after,blockquote:before,q:after,q:before{content:'';content:none}:focus{outline:0}del{text-decoration:line-through}table{border-spacing:0}";
  server.send ( 200, "text/css", temp );
}

void getBaseCss() {
  String temp = "a:link,a:visited{font-weight:700;text-decoration:none}body,table{font-family:Arial,Helvetica,sans-serif}table th:first-child,table tr td:first-child{text-align:left;padding-left:20px}table th,table tr td{padding:12px;border-bottom:1px solid #e0e0e0}body{background-color:#f9f9f9;margin:0 auto;width:520px}a:link{color:#666}a:visited{color:#999}a:active,a:hover{color:#bd5a35;text-decoration:underline}table{color:#666;font-size:12px;width:500px;text-shadow:1px 1px 0 #fff;background:#eaebec;margin:20px;border:1px solid #ccc;-moz-border-radius:3px;-webkit-border-radius:3px;border-radius:3px;-moz-box-shadow:0 1px 2px #d1d1d1;-webkit-box-shadow:0 1px 2px #d1d1d1;box-shadow:0 1px 2px #d1d1d1}table th{border-top:1px solid #fafafa;background:#ededed;background:-webkit-gradient(linear,left top,left bottom,from(#ededed),to(#ebebeb));background:-moz-linear-gradient(top,#ededed,#ebebeb)}table tr:first-child th:first-child{-moz-border-radius-topleft:3px;-webkit-border-top-left-radius:3px;border-top-left-radius:3px}table tr:first-child th:last-child{-moz-border-radius-topright:3px;-webkit-border-top-right-radius:3px;border-top-right-radius:3px}table tr{text-align:center;padding-left:20px}table tr td:first-child{border-left:0}table tr td{border-top:1px solid #fff;border-left:1px solid #e0e0e0;background:#fafafa;background:-webkit-gradient(linear,left top,left bottom,from(#fbfbfb),to(#fafafa));background:-moz-linear-gradient(top,#fbfbfb,#fafafa)}table tr.even td{background:#f6f6f6;background:-webkit-gradient(linear,left top,left bottom,from(#f8f8f8),to(#f6f6f6));background:-moz-linear-gradient(top,#f8f8f8,#f6f6f6)}table tr:last-child td{border-bottom:0}table tr:last-child td:first-child{-moz-border-radius-bottomleft:3px;-webkit-border-bottom-left-radius:3px;border-bottom-left-radius:3px}table tr:last-child td:last-child{-moz-border-radius-bottomright:3px;-webkit-border-bottom-right-radius:3px;border-bottom-right-radius:3px}table tr:hover td{background:#f2f2f2;background:-webkit-gradient(linear,left top,left bottom,from(#f2f2f2),to(#f0f0f0));background:-moz-linear-gradient(top,#f2f2f2,#f0f0f0)}";
  server.send ( 200, "text/css", temp );
}

void pageRoot() {
  String temp = "<html><head><link href='/reset.css' rel='stylesheet'><link href='/base.css' rel='stylesheet'></head><script type='text/javascript'>function loadWifi(e){var t=document.getElementById('wifi_list');t.innerHTML='';var n=!1,i=e[0].wifi;i.shift(),i.sort(function(e,t){return parseInt(t.rssi)-parseInt(e.rssi)}).map(function(e){var i=document.createElement('tr');n&&(i.className='even'),n=!n,i.innerHTML='<td>'+e.ssid+'</td><td>'+(parseInt(e.rssi)+100)+'%</td><td>'+e.need_password+'</td><td><a href=\"#\" class=\"wifi\">Conectar</a></td>',t.appendChild(i)})}function get(e){var t,n=new XMLHttpRequest;n.open('GET',e,!1),n.send(null),t=JSON.parse(n.responseText),loadWifi(t)}function refreshWiFi(){get('/refresh_wifi')}</script><body><table cellspacing='0'><thead><tr><th colspan='3' style='padding: 6px; text-align: center;'>Lista de redes WiFi</th><th style='padding: 6px; text-align: center'><button onclick='refreshWiFi()'>Atualizar</button></th></tr><tr><th>WiFi</th><th>For&ccedil;a</th><th>Senha?</th><th>Conectar?</th></tr></thead><tbody id='wifi_list'><tr><td colspan='4'><center> Nenhuma rede WiFi encontrada</center></td></tr></tbody></table></body></html>";
  server.send ( 200, "text/html", temp );
}

void refreshWiFi() {
  int n = WiFi.scanNetworks();
  String msg = "[{";
  msg += "\"wifi\": [";
  msg += "{\"totals\": \""; msg += n; msg += "\"}";
  for (int i = 0; i < n; ++i)
  {
    msg += ",{";
    msg += "   \"id\": \""; msg += (i+1); msg += "\"";
    msg += "  ,\"ssid\": \""; msg += WiFi.SSID(i); msg += "\"";
    msg += "  ,\"rssi\": \""; msg += WiFi.RSSI(i); msg += "\"";
    msg += "  ,\"need_password\": "; msg += ((WiFi.encryptionType(i) == ENC_TYPE_NONE)?"false":"true");
    msg += "}";
    delay(10);
  }
  msg += "]}]";
  server.send(200, "text/json", msg);
}

void setup() {
  delay(1000);
  Serial.begin(115200);
  WiFi.mode(WIFI_AP_STA);
  WiFi.disconnect();
  delay(100);

  WiFi.softAP(ssid, password);

  IPAddress myIP = WiFi.softAPIP();

  server.on("/", pageRoot);
  server.on("/reset.css", getResetCss);
  server.on("/base.css", getBaseCss);
  server.on("/refresh_wifi", refreshWiFi);
  server.begin();
}

void loop() {
  server.handleClient();
}
