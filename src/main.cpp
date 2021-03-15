#include <Arduino.h>
int tiempo;
void casa();
void setup()
{
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  casa();
}
void casa() {
Serial.println("Hola");
}