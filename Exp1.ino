#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#define LED D4
char auth[] = "YourAuthToken";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "YourNetworkName";
char pass[] = "YourPassword";

void setup() {
      Serial.begin(9600);
      pinMode(LED, OUTPUT);
      Blynk.begin(auth, ssid, pass);
}

void loop() {
  Blynk.run();
}
