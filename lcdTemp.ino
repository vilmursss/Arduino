#include <LiquidCrystal.h>

LiquidCrystal lcd(6, 7, 8, 9, 10, 11);  
int sensorPin = 0;
    
void setup()
{
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.print("Temperature");
}

void loop()
{
  lcd.setCursor(0, 1);
  int reading = analogRead(sensorPin);
  float voltage = reading * 5.0;
  voltage /= 1024.0;
  float temperatureC = (voltage - 0.5) * 100;
  lcd.print(temperatureC);
  lcd.print(" Degrees");
  delay(1000);
}
