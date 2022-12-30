#include <Adafruit_Sensor.h>
#include <DHT.h>


#define DHTPIN 2   
#define DHTTYPE DHT11  

DHT dht(DHTPIN, DHTTYPE);

#define DHT11_PIN D4

void setup(){
  Serial.begin(9600);
  dht.begin();
}

void loop(){
  float t = dht.readTemperature();
  float h = dht.readHumidity(); 

  Serial.print("Temperature = ");
  Serial.print(t);
  Serial.print(" *C ");
  
  Serial.print("Humidity = ");
  Serial.print(h);
  Serial.println(" % ");
  delay(1000);

  //MQ135
  int sensorValue = analogRead(A0);
  Serial.println("The amount of CO2 (in PPM): ");
  Serial.println(sensorValue);
  delay(2000);
}
