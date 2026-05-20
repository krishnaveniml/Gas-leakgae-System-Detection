#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// LCD address usually 0x27 or 0x3F
LiquidCrystal_I2C lcd(0x27, 16, 2);

const int gasSensor = A0;
const int redLED = 8;
const int greenLED = 7;
const int buzzer = 9;

int gasThreshold = 400;

void setup()
{
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(buzzer, OUTPUT);

  lcd.init();
  lcd.backlight();

  Serial.begin(9600);
}

void loop()
{
  int gasValue = analogRead(gasSensor);
  Serial.println(gasValue);

  if (gasValue > gasThreshold)
  {
    // GAS DETECTED
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("ALERT!!!Gas Detected");

    digitalWrite(greenLED, LOW);

    digitalWrite(redLED, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(500);

    digitalWrite(redLED, LOW);
    digitalWrite(buzzer, LOW);
    delay(500);
  }

  else
  {
    // SAFE CONDITION
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("NO GAS DETECTED");

    digitalWrite(redLED, LOW);
    digitalWrite(buzzer, LOW);

    digitalWrite(greenLED, HIGH);
    delay(500);

    digitalWrite(greenLED, LOW);
    delay(500);
  }
}