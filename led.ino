const int dataPin = 0;
const int latchPin = 1;
const int clockPin = 2;
const int dataPin1 = 3;
const int latchPin1 = 4;
const int clockPin1 = 5;
const int dataPin2 = 6;
const int latchPin2 = 7;
const int clockPin2 = 8;
const int dataPin3 = 9;
const int latchPin3 = 10;
const int clockPin3 = 11;
const int dataPin4 = 12;
const int latchPin4 = 13;
const int clockPin4 = A0;


void setup() {
  pinMode(dataPin, OUTPUT);
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin1, OUTPUT);
  pinMode(latchPin1, OUTPUT);
  pinMode(clockPin1, OUTPUT);
  pinMode(dataPin2, OUTPUT);
  pinMode(latchPin2, OUTPUT);
  pinMode(clockPin2, OUTPUT);
  pinMode(dataPin3, OUTPUT);
  pinMode(latchPin3, OUTPUT);
  pinMode(clockPin3, OUTPUT);
  pinMode(dataPin4, OUTPUT);
  pinMode(latchPin4, OUTPUT);
  pinMode(clockPin4, OUTPUT);
}

void loop() {
  digitalWrite(latchPin, LOW);
  digitalWrite(latchPin1, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, B00010001);
  shiftOut(dataPin1, clockPin1, MSBFIRST, B00101001);
  digitalWrite(latchPin1, HIGH);
  digitalWrite(latchPin, HIGH);
  delay(1000);

  digitalWrite(latchPin1, LOW);
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin1, clockPin1, MSBFIRST, B01000010);
  shiftOut(dataPin, clockPin, MSBFIRST, B01100010);
  digitalWrite(latchPin1, HIGH);
  digitalWrite(latchPin, HIGH);
  delay(1000);

  digitalWrite(latchPin1, LOW);
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin1, clockPin1, MSBFIRST, B00010100);
  shiftOut(dataPin, clockPin, MSBFIRST, B10001100);
  digitalWrite(latchPin1, HIGH);
  digitalWrite(latchPin, HIGH);
  delay(1000);
}
