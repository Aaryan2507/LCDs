#include <Wire.h>
#include <LiquidCrystal_I2C.h>
//A4 for SDA, A5 for SCL

LiquidCrystal_I2C lcd(0x27,16,2);
byte heart[8] = {
0b00000,
0b01010,
0b11111,
0b11111,
0b01110,
0b00100,
0b00000,
0b00000
};

void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.backlight();

}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0,0);
  for(int i=0;i<16;i++){
    lcd.createChar(0,heart);
    lcd.setCursor(i,0);
    lcd.write(0);
    //lcd.write(0);
    //lcd.write(0);
    delay(500);
    //lcd.scrollDisplayLeft();
    //delay(200);
  }
  lcd.setCursor(0,1);
  lcd.print("Me when her :)");
}
