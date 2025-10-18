#include <DHT.h>
DHT dht(14, DHT11);

void setup() {
  dht.begin();
  delay(2000);
Serial.begin(2400);
}

void loop() {
  float temp = dht.readTemperature();
  float humidity = dht.readHumidity();
  Serial.print("Temp: ");
  Serial.print(temp);
  Serial.print(" C ");
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" % ");
  delay(2000);

}
