void setup() {
  // put your setup code here, to run once:
  pinMode(9,OUTPUT); //led핀 연결
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);

  Serial.begin(9600); //시리얼 통신
}

void loop() {
  // put your main code here, to run repeatedly:
  int val1 = analogRead(A0); //값 읽고 val에 저장
  int val2 = analogRead(A1);
  int val3 = analogRead(A2);

  val1 = map(val1,0,1023,0,255); //범위 다시 maping
  val2 = map(val2,0,1023,0,255);
  val3 = map(val3,0,1023,0,255);

  Serial.println(val1); //모니터에 값 출력
  Serial.println(val2);
  Serial.println(val3);

  analogWrite(9,val1); //밝기 조절
  analogWrite(10,val2);
  analogWrite(11,val3);

  delay(500);
}
