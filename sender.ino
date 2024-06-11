#include <WiFi.h>

const char* ssid = "SSID";
const char* password = "PASSWORD";

WiFiServer server(80);

void setup() {
  Serial.begin(115200);
  
  WiFi.begin(ssid, password);
  Serial.println("Connecting to WiFi...");

  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }

  Serial.println("Connected to WiFi");
  Serial.println(WiFi.localIP());
  
  server.begin();
}

void loop() {
  WiFiClient client = server.available();   // Listen for incoming clients

  if (client) {
    Serial.println("New Client Connected");
    while (client.connected()) {
      if (client.available()) {
        String msg = client.readStringUntil('\n');
        Serial.print("Received: ");
        Serial.println(msg);
        
        client.println("Message received"); // Send response to client
      }
    }
    client.stop();
    Serial.println("Client Disconnected");
  }
}
