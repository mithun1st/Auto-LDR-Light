#include<LiquidCrystal.h>
const int led = 24;
LiquidCrystal lcd(30,32,34,36,38,40);

void setup() {
  lcd.begin(16,2);
  pinMode(led,OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

    while(analogRead(A0)<200){ 
      lcd.clear();
      lcd.setCursor(2,0);
      lcd.print("-Night Mode-");
      digitalWrite(led,1);
      
      lcd.setCursor(0,1);
      lcd.print("Brightness:");
      lcd.setCursor(12,1);
      lcd.print(analogRead(A0));
      Serial.println(analogRead(A0));
      delay(200);
    }

    lcd.clear();
    lcd.setCursor(3,0);
    lcd.print("-Day Mode-");
    digitalWrite(led,0);
    
    lcd.setCursor(0,1);
    lcd.print("Brightness:");
    lcd.setCursor(12,1);
    lcd.print(analogRead(A0));
    Serial.println(analogRead(A0));
    delay(200);

}
