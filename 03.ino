//最早的版本项目被领导赶工做烂尾了，之后会重新制作，哈哈哈
const int dirPin   = A7;   // Direction
const int stepPin  = 6;   // Step
const int ms3Pin   = A6;   // Ms3
const int ms2Pin   = A2;   // Ms2/Ms1
const int ms1Pin   = A3;   // Ms2/Ms1
const int STEPS_PER_REV = 1600;
const int fast_sleeptime = 1000;
const int slow_sleeptime = 2000;
//int x = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  pinMode(ms3Pin, OUTPUT);
  pinMode(ms2Pin, OUTPUT);
  pinMode(ms1Pin, OUTPUT);

  Serial.begin(9600);

  //attachInterrupt(digitalPinToInterrupt(interruptPin), blink, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  //digitalWrite(ms1Pin, HIGH);
  digitalWrite(ms1Pin, HIGH);
  digitalWrite(ms2Pin, HIGH);
  digitalWrite(ms3Pin, LOW);

  // 电机慢速旋转
  for ( int x = 0; x  < STEPS_PER_REV; x++) {
    digitalWrite(dirPin, LOW);
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(slow_sleeptime);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(slow_sleeptime);
//    if (  int i = digitalRead(interruptPin); i == LOW) {
//      for ( int z = 0; x  > z; x--) {
//        digitalWrite(dirPin, HIGH);
//        digitalWrite(stepPin, HIGH);
//        delayMicroseconds(1000);
//        digitalWrite(stepPin, LOW);
//        delayMicroseconds(1000);
//      }
//    }
  }
}
