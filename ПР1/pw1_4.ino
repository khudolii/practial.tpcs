#tinclude "ESP8266WiFi.h"
#include <aREST.h>
#include "DHT.h"

#define DHTPIN 5
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);


const char* ssid = "WiF405i";
const char* password = "?evgeniy123654789";

float temperature;
float humidity;

setup(){
  dht.begin();
  rest.variable("temperature", &temperature) ;
  rest.variable ("humidity?, �humidity) ;
}

loop(){
  humidity = dht.readHumidity ();
  temperature = dht.readTemperature ();
}