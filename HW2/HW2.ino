#include<Servo.h>
Servo myservo1; //서보 만들기

void setup() {
  // put your setup code here, to run once:
  myservo1.attach(9); //9번에 서보모터 연결
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(A0);
  val = map(val,0,1023,0,180); //값을 0~180으로 다시 maping

  myservo1.write(val); //val 값대로 서보모트 움직이기
}
