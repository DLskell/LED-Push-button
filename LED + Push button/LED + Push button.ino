int ld1 = 5;
int ld2 = 6;
int ld3 = 7;
int btn1 = A0;
int btn2 = A2;
int btn3 = A4;

void setup() {
  pinMode(ld1, OUTPUT);
  pinMode(ld2, OUTPUT);
  pinMode(ld3, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  allumerdiode();
  if(analogRead(btn1) > 200){
    eteindrediode();
    mode1();
    mode1();
    mode1();
  }
  if(analogRead(btn2) > 200){
    eteindrediode();
    mode2();
    mode2();
    mode2();
    mode2();
  }
  if(analogRead(btn3) > 200){
    eteindrediode();
    mode3();
    mode3();
    mode3();
  }
}

void allumerdiode(){
  digitalWrite(ld1, HIGH);
  digitalWrite(ld2, HIGH);
  digitalWrite(ld3, HIGH);
}

void eteindrediode(){
  digitalWrite(ld1, LOW);
  digitalWrite(ld2, LOW);
  digitalWrite(ld3, LOW);
  delay(500);
}

void mode1(){
  digitalWrite(ld1, HIGH);
  delay(250);
  digitalWrite(ld2, HIGH);
  delay(250);
  digitalWrite(ld3, HIGH);
  delay(250);
  digitalWrite(ld1, LOW);
  delay(250);
  digitalWrite(ld2, LOW);
  delay(250);
  digitalWrite(ld3, LOW);
  delay(250);
}

void mode2(){
  digitalWrite(ld1, HIGH);
  digitalWrite(ld2, LOW);
  digitalWrite(ld3, HIGH);
  delay(500);
  digitalWrite(ld1, LOW);
  digitalWrite(ld2, HIGH);
  digitalWrite(ld3, LOW);
  delay(500);
}

void mode3(){
  digitalWrite(ld1, HIGH);
  delay(250);
  digitalWrite(ld1, LOW);
  delay(250);
  digitalWrite(ld2, HIGH);
  delay(250);
  digitalWrite(ld2, LOW);
  delay(250);
  digitalWrite(ld3, HIGH);
  delay(250);
  digitalWrite(ld3, LOW);
  delay(250);
}
