#include <Adafruit_Sensor.h>

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);
  Serial.println("The amount of CO2 (in PPM): ");
  Serial.println(sensorValue);
  delay(2000);
}
