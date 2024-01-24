int ld1 = 5; //The first LED connected to port 5
int ld2 = 6; //The second LED connected to port 6
int ld3 = 7; //The third LED connected to port 7
int btn1 = A0; //The first push button connected to port A0
int btn2 = A2; //The second push button connected to port A2
int btn3 = A4; //The third push button connected to port A4

void setup() {
  pinMode(ld1, OUTPUT);
  pinMode(ld2, OUTPUT);
  pinMode(ld3, OUTPUT);
  pinMode(btn1, INPUT);
  pinMode(btn2, INPUT);
  pinMode(btn3, INPUT);
}

void loop(){
  allumerdiode(); //The LEDs are all lit, waiting for a request
  if(analogRead(btn1) > 200){ //The first push button is pressed
    eteindrediode(); //First LED activation mode
    mode1();
    mode1();
    mode1();
  }
  if(analogRead(btn2) > 200){ //The second push button is pressed
    eteindrediode(); //Second LED activation mode
    mode2();
    mode2();
    mode2();
    mode2();
  }
  if(analogRead(btn3) > 200){ //The push button 3 is pressed
    eteindrediode(); //Third LED activation mode
    mode3();
    mode3();
    mode3();
  }
}

void allumerdiode(){ //The LEDs are all lit
  digitalWrite(ld1, HIGH);
  digitalWrite(ld2, HIGH);
  digitalWrite(ld3, HIGH);
}

void eteindrediode(){ //The LEDs are all off
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
