#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>
char auth[] = "47c9d3d8bc924cc1b592cd64d63d3mka";
char ssid[] = "WiF405";
char pass[] = "evgeniy123654789";
Servo servo;
BLYNK_WRITE(V3) {
servo.write(param.asInt());
}
void setup() {
Blynk.begin(auth, ssid, pass);
servo.attach(15); 
}

void loop(){
Blynk.run(); 
}
