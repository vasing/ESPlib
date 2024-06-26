#include "DHT.h"
#define DHT_TYPE DHT22

const int DHT_PIN = 5;

DHT dht(DHT_PIN, DHT_TYPE);

void setup() {
Serial.begin(9600);
dht.begin();
}

void loop() {
	float h = dht.readHumidity();
	float t = dht.readTemperature();
	
	Serial.print("Temperatur: ");
	Serial.print(t);
	Serial.print("&deg;C, Luftfeuchtigkeit: ");
	Serial.print(h);
	Serial.println("%");
	
	delay(1000);
}