#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#define BLYNK_PRINT Serial
#define TRIGGERPIN D1
#define ECHOPIN D2

char auth[] = "47c9d3d8bc924cc1b592cd64d63d3mka";
char ssid[] = "WiF405";
char pass[] = "evgeniy123654789";

WidgetLCD lcd(V1);

void setup() {

Serial.begin(9600);
pinMode(TRIGGERPIN, OUTPUT);
pinMode(ECHOPIN, INPUT);
Blynk.begin(auth, ssid, pass);
lcd.clear(); 
lcd.print(0, 0, "Distance in cm"); 

void loop() {
lcd.clear();
lcd.print(0, 0, "Distance in cm"); 
digitalWrite(TRIGGERPIN, LOW);
delayMicroseconds(3);
digitalWrite(TRIGGERPIN, HIGH);
delayMicroseconds(12);
digitalWrite(TRIGGERPIN, LOW);
duration = pulseIn(ECHOPIN, HIGH);
distance = (duration/2) / 29.1;
Serial.print(distance);
Serial.println("Cm");
lcd.print(7, 1, distance);
Blynk.run();
delay(3500);
}
