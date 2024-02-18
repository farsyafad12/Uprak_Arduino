// Shift Register 1
const int dataPin = 0;
const int latchPin = 1;
const int clockPin = 2;
// Shift Register 2
const int dataPin1 = 3;
const int latchPin1 = 4;
const int clockPin1 = 5;
// Shift Register 3
const int dataPin2 = 6;
const int latchPin2 = 7;
const int clockPin2 = 8;
// Shift Register 4
const int dataPin3 = 9;
const int latchPin3 = 10;
const int clockPin3 = 11;
// Shift Register 5
const int dataPin4 = 12;
const int latchPin4 = 13;
const int clockPin4 = A0;

// Variabel Delay
int delayAnimasiAwal = 80;


// Variabel Led
// shift 0
int merahLed1 = B00000001;
int hijauLed1 = B00000010;
int biruLed1  = B00000100;
int merahLed2 = B00001000;
int hijauLed2 = B00010000;
int biruLed2  = B00100000;
int merahLed3 = B01000000;
int hijauLed3 = B10000000;
// shift 1
int biruLed3  = B00000001;
int merahLed4 = B00000010;
int hijauLed4 = B00000100;
int biruLed4  = B00001000;
int merahLed5 = B00010000;
int hijauLed5 = B00100000;
int biruLed5  = B01000000;
int merahLed6 = B10000000;
// shift 2
int hijauLed6 = B00000001;
int biruLed6  = B00000010;
int merahLed7 = B00000100;
int hijauLed7 = B00001000;
int biruLed7  = B00010000;
int merahLed8 = B00100000;
int hijauLed8 = B01000000;
int biruLed8  = B10000000;
// shift 3
int merahLed9 = B00000001;
int hijauLed9 = B00000010;
int biruLed9  = B00000100;
int merahLed10= B00001000;
int hijauLed10= B00010000;
int biruLed10 = B00100000;
int merahLed11= B01000000;
int hijauLed11= B10000000;
// shift 4
int biruLed11 = B00000001;
int merahLed12= B00000010;
int hijauLed12= B00000100;
int biruLed12 = B00001000;


void setup() {
  // Shift Register 1
  pinMode(dataPin, OUTPUT);
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  // Shift Register 2
  pinMode(dataPin1, OUTPUT);
  pinMode(latchPin1, OUTPUT);
  pinMode(clockPin1, OUTPUT);
  // Shift Register 3
  pinMode(dataPin2, OUTPUT);
  pinMode(latchPin2, OUTPUT);
  pinMode(clockPin2, OUTPUT);
  // Shift Register 4
  pinMode(dataPin3, OUTPUT);
  pinMode(latchPin3, OUTPUT);
  pinMode(clockPin3, OUTPUT);
  // Shift Register 5
  pinMode(dataPin4, OUTPUT);
  pinMode(latchPin4, OUTPUT);
  pinMode(clockPin4, OUTPUT);

  // Serial Connection
  Serial.begin(9600);
}

void loop() {
  // Animasi Geser Start Here

  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, merahLed1);
  digitalWrite(latchPin, HIGH);
  Serial.println("Warna Merah Led 1 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);


  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, hijauLed2);
  digitalWrite(latchPin, HIGH);
  Serial.println("Warna Hijau Led 2 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);
  digitalWrite(latchPin, LOW);


  digitalWrite(latchPin1, LOW);
  shiftOut(dataPin1, clockPin1, MSBFIRST, biruLed3);
  digitalWrite(latchPin1, HIGH);
  Serial.println("Warna Biru Led 3 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);


  digitalWrite(latchPin1, LOW);
  shiftOut(dataPin1, clockPin1, MSBFIRST, merahLed4);
  digitalWrite(latchPin1, HIGH);
  Serial.println("Warna Merah Led 4 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);


  digitalWrite(latchPin1, LOW);
  shiftOut(dataPin1, clockPin1, MSBFIRST, hijauLed5);
  digitalWrite(latchPin1, HIGH);
  Serial.println("Warna Hijau Led 5 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);
  digitalWrite(latchPin1, LOW);


  digitalWrite(latchPin2, LOW);
  shiftOut(dataPin2, clockPin2, MSBFIRST, biruLed6);
  digitalWrite(latchPin2, HIGH);
  Serial.println("Warna Biru Led 6 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);


  digitalWrite(latchPin2, LOW);
  shiftOut(dataPin2, clockPin2, MSBFIRST, merahLed7);
  digitalWrite(latchPin2, HIGH);
  Serial.println("Warna Merah Led 7 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);


  digitalWrite(latchPin2, LOW);
  shiftOut(dataPin2, clockPin2, MSBFIRST, hijauLed8);
  digitalWrite(latchPin2, HIGH);
  Serial.println("Warna Hijau Led 8 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);
  digitalWrite(latchPin2, LOW);


  digitalWrite(latchPin3, LOW);
  shiftOut(dataPin3, clockPin3, MSBFIRST, biruLed9);
  digitalWrite(latchPin3, HIGH);
  Serial.println("Warna Biru Led 9 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);


  digitalWrite(latchPin3, LOW);
  shiftOut(dataPin3, clockPin3, MSBFIRST, merahLed10);
  digitalWrite(latchPin3, HIGH);
  Serial.println("Warna Merah Led 10 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);

  
  digitalWrite(latchPin3, LOW);
  shiftOut(dataPin3, clockPin3, MSBFIRST, hijauLed11);
  digitalWrite(latchPin3, HIGH);
  Serial.println("Warna Hijau Led 11 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);
  digitalWrite(latchPin3, LOW);


  digitalWrite(latchPin4, LOW);
  shiftOut(dataPin4, clockPin4, MSBFIRST, biruLed12);
  digitalWrite(latchPin4, HIGH);
  Serial.println("Warna Biru Led 12 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);
  digitalWrite(latchPin4, LOW);

// Animasi Kembali

  digitalWrite(latchPin3, LOW);
  shiftOut(dataPin3, clockPin3, MSBFIRST, merahLed11);
  digitalWrite(latchPin3, HIGH);
  Serial.println("Warna Merah Led 11 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);


  digitalWrite(latchPin3, LOW);
  shiftOut(dataPin3, clockPin3, MSBFIRST, hijauLed10);
  digitalWrite(latchPin3, HIGH);
  Serial.println("Warna Hijau Led 10 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);


  digitalWrite(latchPin3, LOW);
  shiftOut(dataPin3, clockPin3, MSBFIRST, biruLed9);
  digitalWrite(latchPin3, HIGH);
  Serial.println("Warna Biru Led 9 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);
  digitalWrite(latchPin3, LOW);


  digitalWrite(latchPin2, LOW);
  shiftOut(dataPin2, clockPin2, MSBFIRST, merahLed8);
  digitalWrite(latchPin2, HIGH);
  Serial.println("Warna Merah Led 8 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);


  digitalWrite(latchPin2, LOW);
  shiftOut(dataPin2, clockPin2, MSBFIRST, hijauLed7);
  digitalWrite(latchPin2, HIGH);
  Serial.println("Warna Hijau Led 7 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);


  digitalWrite(latchPin2, LOW);
  shiftOut(dataPin2, clockPin2, MSBFIRST, biruLed6);
  digitalWrite(latchPin2, HIGH);
  Serial.println("Warna Biru Led 6 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);
  digitalWrite(latchPin2, LOW);


  digitalWrite(latchPin1, LOW);
  shiftOut(dataPin1, clockPin1, MSBFIRST, merahLed5);
  digitalWrite(latchPin1, HIGH);
  Serial.println("Warna Merah Led 5 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);


  digitalWrite(latchPin1, LOW);
  shiftOut(dataPin1, clockPin1, MSBFIRST, hijauLed4);
  digitalWrite(latchPin1, HIGH);
  Serial.println("Warna Hijau Led 4 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);


  digitalWrite(latchPin1, LOW);
  shiftOut(dataPin1, clockPin1, MSBFIRST, biruLed3);
  digitalWrite(latchPin1, HIGH);
  Serial.println("Warna Biru Led 3 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);
  digitalWrite(latchPin1, LOW);


  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, merahLed2);
  digitalWrite(latchPin, HIGH);
  Serial.println("Warna Merah Led 2 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);


  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, hijauLed1);
  digitalWrite(latchPin, HIGH);
  Serial.println("Warna Hijau Led 1 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);

  // Animasi 1 Selesai, Lanjut Animasi Ke dua


  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, biruLed2);
  digitalWrite(latchPin, HIGH);
  Serial.println("Warna Biru Led 2 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);


  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, merahLed3);
  digitalWrite(latchPin, HIGH);
  Serial.println("Warna Merah Led 3 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);
  digitalWrite(latchPin, LOW);


  digitalWrite(latchPin1, LOW);
  shiftOut(dataPin1, clockPin1, MSBFIRST, hijauLed4);
  digitalWrite(latchPin1, HIGH);
  Serial.println("Warna Hijau Led 4 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);


  digitalWrite(latchPin1, LOW);
  shiftOut(dataPin1, clockPin1, MSBFIRST, biruLed5);
  digitalWrite(latchPin1, HIGH);
  Serial.println("Warna Biru Led 5 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);


  digitalWrite(latchPin1, LOW);
  shiftOut(dataPin1, clockPin1, MSBFIRST, merahLed6);
  digitalWrite(latchPin1, HIGH);
  Serial.println("Warna Merah Led 6 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);
  digitalWrite(latchPin1, LOW);


  digitalWrite(latchPin2, LOW);
  shiftOut(dataPin2, clockPin2, MSBFIRST, hijauLed7);
  digitalWrite(latchPin2, HIGH);
  Serial.println("Warna Hijau Led 7 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);


  digitalWrite(latchPin2, LOW);
  shiftOut(dataPin2, clockPin2, MSBFIRST, biruLed8);
  digitalWrite(latchPin2, HIGH);
  Serial.println("Warna Biru Led 8 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);
  digitalWrite(latchPin2, LOW);


  digitalWrite(latchPin3, LOW);
  shiftOut(dataPin3, clockPin3, MSBFIRST, merahLed9);
  digitalWrite(latchPin3, HIGH);
  Serial.println("Warna Merah Led 9 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);


  digitalWrite(latchPin3, LOW);
  shiftOut(dataPin3, clockPin3, MSBFIRST, hijauLed10);
  digitalWrite(latchPin3, HIGH);
  Serial.println("Warna Hijau Led 10 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);
  digitalWrite(latchPin3, LOW);

  
  digitalWrite(latchPin4, LOW);
  shiftOut(dataPin4, clockPin4, MSBFIRST, biruLed11);
  digitalWrite(latchPin4, HIGH);
  Serial.println("Warna Biru Led 11 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);


  digitalWrite(latchPin4, LOW);
  shiftOut(dataPin4, clockPin4, MSBFIRST, merahLed12);
  digitalWrite(latchPin4, HIGH);
  Serial.println("Warna Merah Led 12 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);
  digitalWrite(latchPin4, LOW);

// Animasi Kembali 2

  digitalWrite(latchPin3, LOW);
  shiftOut(dataPin3, clockPin3, MSBFIRST, merahLed11);
  digitalWrite(latchPin3, HIGH);
  Serial.println("Warna Merah Led 11 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);


  digitalWrite(latchPin3, LOW);
  shiftOut(dataPin3, clockPin3, MSBFIRST, hijauLed10);
  digitalWrite(latchPin3, HIGH);
  Serial.println("Warna Hijau Led 10 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);


  digitalWrite(latchPin3, LOW);
  shiftOut(dataPin3, clockPin3, MSBFIRST, biruLed9);
  digitalWrite(latchPin3, HIGH);
  Serial.println("Warna Biru Led 9 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);
  digitalWrite(latchPin3, LOW);


  digitalWrite(latchPin2, LOW);
  shiftOut(dataPin2, clockPin2, MSBFIRST, merahLed8);
  digitalWrite(latchPin2, HIGH);
  Serial.println("Warna Merah Led 8 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);


  digitalWrite(latchPin2, LOW);
  shiftOut(dataPin2, clockPin2, MSBFIRST, hijauLed7);
  digitalWrite(latchPin2, HIGH);
  Serial.println("Warna Hijau Led 7 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);


  digitalWrite(latchPin2, LOW);
  shiftOut(dataPin2, clockPin2, MSBFIRST, biruLed6);
  digitalWrite(latchPin2, HIGH);
  Serial.println("Warna Biru Led 6 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);
  digitalWrite(latchPin2, LOW);


  digitalWrite(latchPin1, LOW);
  shiftOut(dataPin1, clockPin1, MSBFIRST, merahLed5);
  digitalWrite(latchPin1, HIGH);
  Serial.println("Warna Merah Led 5 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);


  digitalWrite(latchPin1, LOW);
  shiftOut(dataPin1, clockPin1, MSBFIRST, hijauLed4);
  digitalWrite(latchPin1, HIGH);
  Serial.println("Warna Hijau Led 4 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);


  digitalWrite(latchPin1, LOW);
  shiftOut(dataPin1, clockPin1, MSBFIRST, biruLed3);
  digitalWrite(latchPin1, HIGH);
  Serial.println("Warna Biru Led 3 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);
  digitalWrite(latchPin1, LOW);


  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, merahLed2);
  digitalWrite(latchPin, HIGH);
  Serial.println("Warna Merah Led 2 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);


  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, hijauLed1);
  digitalWrite(latchPin, HIGH);
  Serial.println("Warna Hijau Led 1 Animasi Awal Menyala !");
  delay(delayAnimasiAwal);
  digitalWrite(latchPin, LOW);
}

// Template Shift Register

// digitalWrite(latchPin, LOW);
  // digitalWrite(latchPin1, LOW);
  // digitalWrite(latchPin2, LOW);
  // digitalWrite(latchPin3, LOW);
  // digitalWrite(latchPin4, LOW);
  // shiftOut(dataPin, clockPin, MSBFIRST, B00000000);
  // shiftOut(dataPin1, clockPin1, MSBFIRST, B00000000);
  // shiftOut(dataPin2, clockPin2, MSBFIRST, B00000000);
  // shiftOut(dataPin3, clockPin3, MSBFIRST, B00000000);
  // shiftOut(dataPin4, clockPin4, MSBFIRST, B00000000);
  // digitalWrite(latchPin, HIGH);
  // digitalWrite(latchPin1, HIGH);
  // digitalWrite(latchPin2, HIGH);
  // digitalWrite(latchPin3, HIGH);
  // digitalWrite(latchPin4, HIGH);