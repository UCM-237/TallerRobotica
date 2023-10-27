#include <Arduino.h>
#include <ICM42670P.h>

#define I2C_SDA 10
#define I2C_SCL 8
const float k = 28;


void setup() {
  Serial.begin(115200);
  while(!Serial) {}

  Serial.println("Voltaje Sensor IR");
}

void loop() {
  float voltage = (float)analogRead(A0) * 3.3/4095;
  float distance = k/voltage;
  Serial.print(voltage);
  Serial.print(" -> ");
  Serial.println(k/voltage);
  delay(50);
}

