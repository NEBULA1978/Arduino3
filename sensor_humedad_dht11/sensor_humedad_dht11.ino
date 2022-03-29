#include <DHT.h>

#define DHTPin 2
#define DHTType DHT11

DHT dht11(DHTPin, DHTType);

unsigned long previuosMillis = 0;
long interval = 2000;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  dht11.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  DHT.read11(DHTPin 2);
  unsigned long currentMillis = millis();
  if ((currentMillis - previuosMillis) >= interval)
  {
    previuosMillis = currentMillis;

    int tempC dht11.readTemperature();
    int hum = dht11.readHumidity();

    Serial.print("Temperatura: ");
    Serial.print(tempC);
    Serial.print("C /");
    Serial.print(" Humedad: ");

    Serial.print("Milisegundos: ");
    Serial.println(previousMillis);
  }
}
