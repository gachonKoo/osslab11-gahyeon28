#include <LiquidCrystal.h> //라이브러리 불러오기
LiquidCrystal lcd(12,11,5,4,3,2);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.setCursor(0,0); //커서 위치 설정
  lcd.print("hello world!"); //출력할 문구
}

void loop() {
  // put your main code here, to run repeatedly:

}
