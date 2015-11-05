#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>

const char *ssid = "ESP8266";
const char *password = "testando";

ESP8266WebServer server(80);

void handleRoot() {
  server.send(200, "text/html", "<h1>Conectado no ESP8266.</h1>");
}

void setup() {
  delay(1000);
  Serial.begin(115200);
  Serial.println();
  Serial.print("Iniciando access point...");
  WiFi.softAP(ssid, password);

  IPAddress myIP = WiFi.softAPIP();
  Serial.print("AP IP: ");
  Serial.println(myIP);
  server.on("/", handleRoot);
  server.begin();
  Serial.println("HTTP server iniciado");
}

void loop() {
  server.handleClient();
}
