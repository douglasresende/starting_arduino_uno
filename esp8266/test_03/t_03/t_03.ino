#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>

const char *ssid = "ESP8266";
const char *password = "testando";

ESP8266WebServer server(80);

void handleRoot() {
  char temp[500];
  snprintf ( temp, 500,
    "<html>\
      <script>\
        function get(url) {\
          var xhReq = new XMLHttpRequest();\
          xhReq.open('GET', url, false);\
          xhReq.send(null);\
          console.log(xhReq.responseText);\
        }\
        function turnOn() {\
          get('/on');\
        }\
        function turnOff() {\
          get('/off');\
        }\
      </script>\
      <body>\
        <h1>Ligar LED</h1>\
        <br></br>\
        <button onclick='turnOn()'>LIGAR</button> | \
        <button onclick='turnOff()'>DESLIGAR</button>\
      </body>\
    </html>"
  );
  server.send ( 200, "text/html", temp );
}

void onLed() {
  digitalWrite ( BUILTIN_LED, LOW );
  server.send(200, "text/html", "<h1>LED ligado.</h1>");
}

void offLed() {
  digitalWrite(BUILTIN_LED, HIGH);
  server.send(200, "text/html", "<h1>LED desligado.</h1>");
}

void setup() {
  delay(1000);
  Serial.begin(115200);

  // prepare GPIO2
  pinMode(BUILTIN_LED, OUTPUT);
  digitalWrite(BUILTIN_LED, LOW);

  Serial.println();
  Serial.print("Iniciando access point...");
  WiFi.softAP(ssid, password);

  IPAddress myIP = WiFi.softAPIP();
  Serial.print("AP IP: ");
  Serial.println(myIP);
  server.on("/", handleRoot);
  server.on("/on", onLed);
  server.on("/off", offLed);
  server.begin();
  Serial.println("HTTP server iniciado");
}

void loop() {
  server.handleClient();
}
