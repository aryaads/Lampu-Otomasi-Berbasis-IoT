#define BLYNK_PRINT Serial
#define BLYNK_TEMPLATE_ID "TMPLM9SvMJVN"
#define BLYNK_TEMPLATE_NAME "SAKLAR"
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Dapetin tokennya di email kamu
char auth[] = "3oNV1YK0IeG23lQ7i1DyPm6bVa3DERRS";

// id dan password internet kamu
char ssid[] = "DarkWeB";
char pass[] = "aryadws1928";

void setup(){
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop(){
  Blynk.run();
}
