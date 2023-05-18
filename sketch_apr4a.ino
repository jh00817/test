#include <SoftwareSerial.h> //시리얼통신 라이브러리 호출
#include<Servo.h> //Servo 라이브러리를 추가
Servo servo;      //Servo 클래스로 servo객체 생성
int value = 0;    // 각도를 조절할 변수 value

int blueTx=13;   //Tx (보내는핀 설정)at
int blueRx=12;   //Rx (받는핀 설정)
SoftwareSerial BTSerial(blueTx, blueRx);  //시리얼 통신을 위한 객체선언
 
void setup() 
{
  Serial.begin(9600);   //시리얼모니터
  BTSerial.begin(9600); //블루투스 시리얼
  servo.attach(9);     //servo 서보모터 7번 핀에 연결
                       // 이때 ~ 표시가 있는 PWM을 지원하는 디지털 핀에 연결
  
}
void loop()
{
  /*
          value = 0;
    if (Serial.available()) {
      char c='a';
      c = Serial.read();
      char cmd = (char)BTSerial.read();  //BTSerial.read()를 사용할 때마다 사용한 것을 지워지므로 char타입 변수에 저장합니다.


      Serial.println(cmd);  //cmd변수에 저장된 내용을 사용자가 `시리얼모니터`를 사용하여 쉽게 확인하는 명령어 입니다.
int pos = 0;


      if (c== 'U') {
        Serial.write("It's U");
        for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
       Serial.println(c);
       Serial.println(pos);
       servo.write(pos);              // tell servo to go to position in variable 'pos'
       delay(15); 
       c='A';                      // waits 15 ms for the servo to reach the position
  } //value값의 각도로 회전. ex) value가 90이라면 90도 회전
        
      }

      else if (c == 'D') {
        Serial.write("It's D");
        value = 90;
        servo.write(value);
        delay(15);
        c='A';
      }
    }
    
    else{
      analogWrite(9,0);
      delay(1000);
    }
    */
    Serial.write(0);
    delay(1000);
}

