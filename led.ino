const int latchPin = 1;
const int clockPin = 2;
const int dataPin = 0;
const int latchPin1 = 4;
const int clockPin1 = 5;
const int dataPin1 = 3;

void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(latchPin1, OUTPUT);
  pinMode(clockPin1, OUTPUT);
  pinMode(dataPin1, OUTPUT);
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

// Code By FarSyaFad Tech, Mohon Izin Terlebih Dahulu Untuk Menggunakan / Menyalin