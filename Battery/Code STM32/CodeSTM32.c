#include <WiFi.h>
#include <HTTPClient.h>
#include <ArduinoJson.h>

// Define the WiFi credentials
const char* ssid = "your_SSID";
const char* password = "your_PASSWORD";

// Define the Orion Context Broker endpoint
const char* orionHost = "your_orion_host";
const int orionPort = 1026;

void setup() {
  // Connect to WiFi
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi");
}


void loop() {
  // Send battery data every 30 seconds
  delay(30000);
  

// Set up the battery data
  DynamicJsonDocument battery1(1024);
  battery1["id"] = " urn:ngsi-ld:battery:001";
  battery1["type"] = "Battery";
  battery1["batteryLevel"] = 85.2;
  battery1["chargingStatus"] = true;
  battery1["voltage"] = 12.5;
  battery1["current"] = 5.0;
//  battery1["cel"] = {};
  battery1["temperature"] = 25.0;

//   DynamicJsonDocument battery2(1024);
//   battery2["id"] = " urn:ngsi-ld:battery:002";
//   battery2["type"] = "Battery";
//   battery2["batteryLevel"] = 91.8;
//   battery2["chargingStatus"] = false;
//   battery2["voltage"] = 12.3;
//   battery2["current"] = 4.5;
//   battery2["temperature"] = 27.0;

  // Set up the headers and payload for the request
  HTTPClient http;
  http.begin(String("http://") + orionHost + ":" + orionPort + "/v2/entities");
  http.addHeader("Content-Type", "application/json");
  http.addHeader("Fiware-Service", "your_service");
  http.addHeader("Fiware-ServicePath", "/");
  String payload;
  serializeJson(battery1, payload);
  payload += "\n";
  serializeJson(battery2, payload);
  Serial.println(payload);


  // Send the request to the Orion Context Broker
  int httpResponseCode = http.POST(payload);
  String response = http.getString();
  Serial.println(response);

  http.end();
  Serial.println("Data sent to Orion Context Broker");
}



