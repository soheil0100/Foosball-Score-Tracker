const byte interruptPin2 = 3;
const byte interruptPin1 = 2;
int count1=0;
int count2=0;
int sec=59;
int mint=4;
int startt=0;
#define i1 22
#define i2 23
#define i3 24
#define i4 25
#define j1 26
#define j2 27
#define j3 28
#define j4 29
#define k1 30
#define k2 31
#define k3 32
#define k4 33
#define L1 34
#define L2 35
#define L3 36
#define L4 37
#define m1 38
#define m2 39
#define m3 40
#define m4 41
#define n1 42
#define n2 43
#define n3 44
#define n4 45
#define o1 46
#define o2 47
#define o3 48
#define o4 49
#define p1 50
#define p2 51
#define p3 52
#define p4 53
#define start 4
#define buzzer 5


    void setup() {
      Serial.begin(9600);
      pinMode(i1, OUTPUT);
      pinMode(i2, OUTPUT);
      pinMode(i3, OUTPUT);
      pinMode(i4, OUTPUT);
      pinMode(j1, OUTPUT);
      pinMode(j2, OUTPUT);
      pinMode(j3, OUTPUT);
      pinMode(j4, OUTPUT);
      pinMode(k1, OUTPUT);
      pinMode(k2, OUTPUT);
      pinMode(k3, OUTPUT);
      pinMode(k4, OUTPUT);
      pinMode(L1, OUTPUT);
      pinMode(L2, OUTPUT);
      pinMode(L3, OUTPUT);
      pinMode(L4, OUTPUT);
      pinMode(m1, OUTPUT);
      pinMode(m2, OUTPUT);
      pinMode(m3, OUTPUT);
      pinMode(m4, OUTPUT);
      pinMode(n1, OUTPUT);
      pinMode(n2, OUTPUT);
      pinMode(n3, OUTPUT);
      pinMode(n4, OUTPUT);
      pinMode(o1, OUTPUT);
      pinMode(o2, OUTPUT);
      pinMode(o3, OUTPUT);
      pinMode(o4, OUTPUT);
      pinMode(p1, OUTPUT);
      pinMode(p2, OUTPUT);
      pinMode(p3, OUTPUT);
      pinMode(p4, OUTPUT);
      pinMode(interruptPin1, INPUT_PULLUP);
      pinMode(interruptPin2, INPUT_PULLUP);
      pinMode(start, INPUT_PULLUP);
      pinMode(buzzer, OUTPUT);
      
      attachInterrupt(digitalPinToInterrupt(interruptPin1), counting1, FALLING);
      attachInterrupt(digitalPinToInterrupt(interruptPin2), counting2, FALLING);
      digitalWrite(i1, LOW);
      digitalWrite(i2, LOW);
      digitalWrite(i3, LOW);
      digitalWrite(i4, LOW);
      digitalWrite(j1, LOW);
      digitalWrite(j2, LOW);
      digitalWrite(j3, LOW);
      digitalWrite(j4, LOW);
      digitalWrite(k1, LOW);
      digitalWrite(k2, LOW);
      digitalWrite(k3, LOW);
      digitalWrite(k4, LOW);
      digitalWrite(L1, LOW);
      digitalWrite(L2, LOW);
      digitalWrite(L3, LOW);
      digitalWrite(L4, LOW);
      digitalWrite(m1, HIGH);
      digitalWrite(m2, LOW);
      digitalWrite(m3, LOW);
      digitalWrite(m4, HIGH);
      digitalWrite(n1, HIGH);
      digitalWrite(n2, LOW);
      digitalWrite(n3, HIGH);
      digitalWrite(n4, LOW);
      digitalWrite(o1, LOW);
      digitalWrite(o2, LOW);
      digitalWrite(o3, HIGH);
      digitalWrite(o4, LOW);
      digitalWrite(p1, LOW);
      digitalWrite(p2, LOW);
      digitalWrite(p3, LOW);
      digitalWrite(p4, LOW);
      tone(buzzer, 400, 1000);
      delay(500);
      tone(buzzer, 500, 1000);
      delay(500);
      tone(buzzer, 600, 1000);
      delay(500);
      tone(buzzer, 700, 1000);
    }


    void loop() {
      while(startt==0){
      if(digitalRead(start)==LOW){
        delay(200);
        startt=1;
        count1=0;
        count2=0;
        tone(buzzer, 600, 2000);
      }
      }
      if(startt==1){
        switch(sec){
          case 0:
            digitalWrite(m1, LOW);
            digitalWrite(m2, LOW);
            digitalWrite(m3, LOW);
            digitalWrite(m4, LOW);
            digitalWrite(n1, LOW);
            digitalWrite(n2, LOW);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 1:
            digitalWrite(m1, HIGH);
            digitalWrite(m2, LOW);
            digitalWrite(m3, LOW);
            digitalWrite(m4, LOW);
            digitalWrite(n1, LOW);
            digitalWrite(n2, LOW);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 2:
            digitalWrite(m1, LOW);
            digitalWrite(m2, HIGH);
            digitalWrite(m3, LOW);
            digitalWrite(m4, LOW);
            digitalWrite(n1, LOW);
            digitalWrite(n2, LOW);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 3:
            digitalWrite(m1, HIGH);
            digitalWrite(m2, HIGH);
            digitalWrite(m3, LOW);
            digitalWrite(m4, LOW);
            digitalWrite(n1, LOW);
            digitalWrite(n2, LOW);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 4:
            digitalWrite(m1, LOW);
            digitalWrite(m2, LOW);
            digitalWrite(m3, HIGH);
            digitalWrite(m4, LOW);
            digitalWrite(n1, LOW);
            digitalWrite(n2, LOW);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 5:
            digitalWrite(m1, HIGH);
            digitalWrite(m2, LOW);
            digitalWrite(m3, HIGH);
            digitalWrite(m4, LOW);
            digitalWrite(n1, LOW);
            digitalWrite(n2, LOW);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 6:
            digitalWrite(m1, LOW);
            digitalWrite(m2, HIGH);
            digitalWrite(m3, HIGH);
            digitalWrite(m4, LOW);
            digitalWrite(n1, LOW);
            digitalWrite(n2, LOW);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 7:
            digitalWrite(m1, HIGH);
            digitalWrite(m2, HIGH);
            digitalWrite(m3, HIGH);
            digitalWrite(m4, LOW);
            digitalWrite(n1, LOW);
            digitalWrite(n2, LOW);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 8:
            digitalWrite(m1, LOW);
            digitalWrite(m2, LOW);
            digitalWrite(m3, LOW);
            digitalWrite(m4, HIGH);
            digitalWrite(n1, LOW);
            digitalWrite(n2, LOW);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 9:
            digitalWrite(m1, HIGH);
            digitalWrite(m2, LOW);
            digitalWrite(m3, LOW);
            digitalWrite(m4, HIGH);
            digitalWrite(n1, LOW);
            digitalWrite(n2, LOW);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 10:
            digitalWrite(m1, LOW);
            digitalWrite(m2, LOW);
            digitalWrite(m3, LOW);
            digitalWrite(m4, LOW);
            digitalWrite(n1, HIGH);
            digitalWrite(n2, LOW);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 11:
            digitalWrite(m1, HIGH);
            digitalWrite(m2, LOW);
            digitalWrite(m3, LOW);
            digitalWrite(m4, LOW);
            digitalWrite(n1, HIGH);
            digitalWrite(n2, LOW);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 12:
            digitalWrite(m1, LOW);
            digitalWrite(m2, HIGH);
            digitalWrite(m3, LOW);
            digitalWrite(m4, LOW);
            digitalWrite(n1, HIGH);
            digitalWrite(n2, LOW);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 13:
            digitalWrite(m1, HIGH);
            digitalWrite(m2, HIGH);
            digitalWrite(m3, LOW);
            digitalWrite(m4, LOW);
            digitalWrite(n1, HIGH);
            digitalWrite(n2, LOW);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 14:
            digitalWrite(m1, LOW);
            digitalWrite(m2, LOW);
            digitalWrite(m3, HIGH);
            digitalWrite(m4, LOW);
            digitalWrite(n1, HIGH);
            digitalWrite(n2, LOW);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 15:
            digitalWrite(m1, HIGH);
            digitalWrite(m2, LOW);
            digitalWrite(m3, HIGH);
            digitalWrite(m4, LOW);
            digitalWrite(n1, HIGH);
            digitalWrite(n2, LOW);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 16:
            digitalWrite(m1, LOW);
            digitalWrite(m2, HIGH);
            digitalWrite(m3, HIGH);
            digitalWrite(m4, LOW);
            digitalWrite(n1, HIGH);
            digitalWrite(n2, LOW);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 17:
            digitalWrite(m1, HIGH);
            digitalWrite(m2, HIGH);
            digitalWrite(m3, HIGH);
            digitalWrite(m4, LOW);
            digitalWrite(n1, HIGH);
            digitalWrite(n2, LOW);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 18:
            digitalWrite(m1, LOW);
            digitalWrite(m2, LOW);
            digitalWrite(m3, LOW);
            digitalWrite(m4, HIGH);
            digitalWrite(n1, HIGH);
            digitalWrite(n2, LOW);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 19:
            digitalWrite(m1, HIGH);
            digitalWrite(m2, LOW);
            digitalWrite(m3, LOW);
            digitalWrite(m4, HIGH);
            digitalWrite(n1, HIGH);
            digitalWrite(n2, LOW);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 20:
            digitalWrite(m1, LOW);
            digitalWrite(m2, LOW);
            digitalWrite(m3, LOW);
            digitalWrite(m4, LOW);
            digitalWrite(n1, LOW);
            digitalWrite(n2, HIGH);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 21:
            digitalWrite(m1, HIGH);
            digitalWrite(m2, LOW);
            digitalWrite(m3, LOW);
            digitalWrite(m4, LOW);
            digitalWrite(n1, LOW);
            digitalWrite(n2, HIGH);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 22:
            digitalWrite(m1, LOW);
            digitalWrite(m2, HIGH);
            digitalWrite(m3, LOW);
            digitalWrite(m4, LOW);
            digitalWrite(n1, LOW);
            digitalWrite(n2, HIGH);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 23:
            digitalWrite(m1, HIGH);
            digitalWrite(m2, HIGH);
            digitalWrite(m3, LOW);
            digitalWrite(m4, LOW);
            digitalWrite(n1, LOW);
            digitalWrite(n2, HIGH);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 24:
            digitalWrite(m1, LOW);
            digitalWrite(m2, LOW);
            digitalWrite(m3, HIGH);
            digitalWrite(m4, LOW);
            digitalWrite(n1, LOW);
            digitalWrite(n2, HIGH);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 25:
            digitalWrite(m1, HIGH);
            digitalWrite(m2, LOW);
            digitalWrite(m3, HIGH);
            digitalWrite(m4, LOW);
            digitalWrite(n1, LOW);
            digitalWrite(n2, HIGH);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 26:
            digitalWrite(m1, LOW);
            digitalWrite(m2, HIGH);
            digitalWrite(m3, HIGH);
            digitalWrite(m4, LOW);
            digitalWrite(n1, LOW);
            digitalWrite(n2, HIGH);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 27:
            digitalWrite(m1, HIGH);
            digitalWrite(m2, HIGH);
            digitalWrite(m3, HIGH);
            digitalWrite(m4, LOW);
            digitalWrite(n1, LOW);
            digitalWrite(n2, HIGH);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 28:
            digitalWrite(m1, LOW);
            digitalWrite(m2, LOW);
            digitalWrite(m3, LOW);
            digitalWrite(m4, HIGH);
            digitalWrite(n1, LOW);
            digitalWrite(n2, HIGH);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 29:
            digitalWrite(m1, HIGH);
            digitalWrite(m2, LOW);
            digitalWrite(m3, LOW);
            digitalWrite(m4, HIGH);
            digitalWrite(n1, LOW);
            digitalWrite(n2, HIGH);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 30:
            digitalWrite(m1, LOW);
            digitalWrite(m2, LOW);
            digitalWrite(m3, LOW);
            digitalWrite(m4, LOW);
            digitalWrite(n1, HIGH);
            digitalWrite(n2, HIGH);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 31:
            digitalWrite(m1, HIGH);
            digitalWrite(m2, LOW);
            digitalWrite(m3, LOW);
            digitalWrite(m4, LOW);
            digitalWrite(n1, HIGH);
            digitalWrite(n2, HIGH);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 32:
            digitalWrite(m1, LOW);
            digitalWrite(m2, HIGH);
            digitalWrite(m3, LOW);
            digitalWrite(m4, LOW);
            digitalWrite(n1, HIGH);
            digitalWrite(n2, HIGH);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 33:
            digitalWrite(m1, HIGH);
            digitalWrite(m2, HIGH);
            digitalWrite(m3, LOW);
            digitalWrite(m4, LOW);
            digitalWrite(n1, HIGH);
            digitalWrite(n2, HIGH);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 34:
            digitalWrite(m1, LOW);
            digitalWrite(m2, LOW);
            digitalWrite(m3, HIGH);
            digitalWrite(m4, LOW);
            digitalWrite(n1, HIGH);
            digitalWrite(n2, HIGH);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 35:
            digitalWrite(m1, HIGH);
            digitalWrite(m2, LOW);
            digitalWrite(m3, HIGH);
            digitalWrite(m4, LOW);
            digitalWrite(n1, HIGH);
            digitalWrite(n2, HIGH);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 36:
            digitalWrite(m1, LOW);
            digitalWrite(m2, HIGH);
            digitalWrite(m3, HIGH);
            digitalWrite(m4, LOW);
            digitalWrite(n1, HIGH);
            digitalWrite(n2, HIGH);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 37:
            digitalWrite(m1, HIGH);
            digitalWrite(m2, HIGH);
            digitalWrite(m3, HIGH);
            digitalWrite(m4, LOW);
            digitalWrite(n1, HIGH);
            digitalWrite(n2, HIGH);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 38:
            digitalWrite(m1, LOW);
            digitalWrite(m2, LOW);
            digitalWrite(m3, LOW);
            digitalWrite(m4, HIGH);
            digitalWrite(n1, HIGH);
            digitalWrite(n2, HIGH);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 39:
            digitalWrite(m1, HIGH);
            digitalWrite(m2, LOW);
            digitalWrite(m3, LOW);
            digitalWrite(m4, HIGH);
            digitalWrite(n1, HIGH);
            digitalWrite(n2, HIGH);
            digitalWrite(n3, LOW);
            digitalWrite(n4, LOW);
          break;
          
          case 40:
            digitalWrite(m1, LOW);
            digitalWrite(m2, LOW);
            digitalWrite(m3, LOW);
            digitalWrite(m4, LOW);
            digitalWrite(n1, LOW);
            digitalWrite(n2, LOW);
            digitalWrite(n3, HIGH);
            digitalWrite(n4, LOW);
          break;
          
          case 41:
            digitalWrite(m1, HIGH);
            digitalWrite(m2, LOW);
            digitalWrite(m3, LOW);
            digitalWrite(m4, LOW);
            digitalWrite(n1, LOW);
            digitalWrite(n2, LOW);
            digitalWrite(n3, HIGH);
            digitalWrite(n4, LOW);
          break;
          
          case 42:
            digitalWrite(m1, LOW);
            digitalWrite(m2, HIGH);
            digitalWrite(m3, LOW);
            digitalWrite(m4, LOW);
            digitalWrite(n1, LOW);
            digitalWrite(n2, LOW);
            digitalWrite(n3, HIGH);
            digitalWrite(n4, LOW);
          break;
          
          case 43:
            digitalWrite(m1, HIGH);
            digitalWrite(m2, HIGH);
            digitalWrite(m3, LOW);
            digitalWrite(m4, LOW);
            digitalWrite(n1, LOW);
            digitalWrite(n2, LOW);
            digitalWrite(n3, HIGH);
            digitalWrite(n4, LOW);
          break;
          
          case 44:
            digitalWrite(m1, LOW);
            digitalWrite(m2, LOW);
            digitalWrite(m3, HIGH);
            digitalWrite(m4, LOW);
            digitalWrite(n1, LOW);
            digitalWrite(n2, LOW);
            digitalWrite(n3, HIGH);
            digitalWrite(n4, LOW);
          break;
          
          case 45:
            digitalWrite(m1, HIGH);
            digitalWrite(m2, LOW);
            digitalWrite(m3, HIGH);
            digitalWrite(m4, LOW);
            digitalWrite(n1, LOW);
            digitalWrite(n2, LOW);
            digitalWrite(n3, HIGH);
            digitalWrite(n4, LOW);
          break;
          
          case 46:
            digitalWrite(m1, LOW);
            digitalWrite(m2, HIGH);
            digitalWrite(m3, HIGH);
            digitalWrite(m4, LOW);
            digitalWrite(n1, LOW);
            digitalWrite(n2, LOW);
            digitalWrite(n3, HIGH);
            digitalWrite(n4, LOW);
          break;
          
          case 47:
            digitalWrite(m1, HIGH);
            digitalWrite(m2, HIGH);
            digitalWrite(m3, HIGH);
            digitalWrite(m4, LOW);
            digitalWrite(n1, LOW);
            digitalWrite(n2, LOW);
            digitalWrite(n3, HIGH);
            digitalWrite(n4, LOW);
          break;
          
          case 48:
            digitalWrite(m1, LOW);
            digitalWrite(m2, LOW);
            digitalWrite(m3, LOW);
            digitalWrite(m4, HIGH);
            digitalWrite(n1, LOW);
            digitalWrite(n2, LOW);
            digitalWrite(n3, HIGH);
            digitalWrite(n4, LOW);
          break;
          
          case 49:
            digitalWrite(m1, HIGH);
            digitalWrite(m2, LOW);
            digitalWrite(m3, LOW);
            digitalWrite(m4, HIGH);
            digitalWrite(n1, LOW);
            digitalWrite(n2, LOW);
            digitalWrite(n3, HIGH);
            digitalWrite(n4, LOW);
          break;
          
          case 50:
            digitalWrite(m1, LOW);
            digitalWrite(m2, LOW);
            digitalWrite(m3, LOW);
            digitalWrite(m4, LOW);
            digitalWrite(n1, HIGH);
            digitalWrite(n2, LOW);
            digitalWrite(n3, HIGH);
            digitalWrite(n4, LOW);
          break;
          
          case 51:
            digitalWrite(m1, HIGH);
            digitalWrite(m2, LOW);
            digitalWrite(m3, LOW);
            digitalWrite(m4, LOW);
            digitalWrite(n1, HIGH);
            digitalWrite(n2, LOW);
            digitalWrite(n3, HIGH);
            digitalWrite(n4, LOW);
          break;
          
          case 52:
            digitalWrite(m1, LOW);
            digitalWrite(m2, HIGH);
            digitalWrite(m3, LOW);
            digitalWrite(m4, LOW);
            digitalWrite(n1, HIGH);
            digitalWrite(n2, LOW);
            digitalWrite(n3, HIGH);
            digitalWrite(n4, LOW);
          break;
          
          case 53:
            digitalWrite(m1, HIGH);
            digitalWrite(m2, HIGH);
            digitalWrite(m3, LOW);
            digitalWrite(m4, LOW);
            digitalWrite(n1, HIGH);
            digitalWrite(n2, LOW);
            digitalWrite(n3, HIGH);
            digitalWrite(n4, LOW);
          break;
          
          case 54:
            digitalWrite(m1, LOW);
            digitalWrite(m2, LOW);
            digitalWrite(m3, HIGH);
            digitalWrite(m4, LOW);
            digitalWrite(n1, HIGH);
            digitalWrite(n2, LOW);
            digitalWrite(n3, HIGH);
            digitalWrite(n4, LOW);
          break;
          
          case 55:
            digitalWrite(m1, HIGH);
            digitalWrite(m2, LOW);
            digitalWrite(m3, HIGH);
            digitalWrite(m4, LOW);
            digitalWrite(n1, HIGH);
            digitalWrite(n2, LOW);
            digitalWrite(n3, HIGH);
            digitalWrite(n4, LOW);
          break;
          
          case 56:
            digitalWrite(m1, LOW);
            digitalWrite(m2, HIGH);
            digitalWrite(m3, HIGH);
            digitalWrite(m4, LOW);
            digitalWrite(n1, HIGH);
            digitalWrite(n2, LOW);
            digitalWrite(n3, HIGH);
            digitalWrite(n4, LOW);
          break;
          
          case 57:
            digitalWrite(m1, HIGH);
            digitalWrite(m2, HIGH);
            digitalWrite(m3, HIGH);
            digitalWrite(m4, LOW);
            digitalWrite(n1, HIGH);
            digitalWrite(n2, LOW);
            digitalWrite(n3, HIGH);
            digitalWrite(n4, LOW);
          break;
          
          case 58:
            digitalWrite(m1, LOW);
            digitalWrite(m2, LOW);
            digitalWrite(m3, LOW);
            digitalWrite(m4, HIGH);
            digitalWrite(n1, HIGH);
            digitalWrite(n2, LOW);
            digitalWrite(n3, HIGH);
            digitalWrite(n4, LOW);
          break;
          
          case 59:
            digitalWrite(m1, HIGH);
            digitalWrite(m2, LOW);
            digitalWrite(m3, LOW);
            digitalWrite(m4, HIGH);
            digitalWrite(n1, HIGH);
            digitalWrite(n2, LOW);
            digitalWrite(n3, HIGH);
            digitalWrite(n4, LOW);
          break;
        }
      switch(mint){
          case 0:
            digitalWrite(o1, LOW);
            digitalWrite(o2, LOW);
            digitalWrite(o3, LOW);
            digitalWrite(o4, LOW);
            digitalWrite(p1, LOW);
            digitalWrite(p2, LOW);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 1:
            digitalWrite(o1, HIGH);
            digitalWrite(o2, LOW);
            digitalWrite(o3, LOW);
            digitalWrite(o4, LOW);
            digitalWrite(p1, LOW);
            digitalWrite(p2, LOW);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 2:
            digitalWrite(o1, LOW);
            digitalWrite(o2, HIGH);
            digitalWrite(o3, LOW);
            digitalWrite(o4, LOW);
            digitalWrite(p1, LOW);
            digitalWrite(p2, LOW);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 3:
            digitalWrite(o1, HIGH);
            digitalWrite(o2, HIGH);
            digitalWrite(o3, LOW);
            digitalWrite(o4, LOW);
            digitalWrite(p1, LOW);
            digitalWrite(p2, LOW);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 4:
            digitalWrite(o1, LOW);
            digitalWrite(o2, LOW);
            digitalWrite(o3, HIGH);
            digitalWrite(o4, LOW);
            digitalWrite(p1, LOW);
            digitalWrite(p2, LOW);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 5:
            digitalWrite(o1, HIGH);
            digitalWrite(o2, LOW);
            digitalWrite(o3, HIGH);
            digitalWrite(o4, LOW);
            digitalWrite(p1, LOW);
            digitalWrite(p2, LOW);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 6:
            digitalWrite(o1, LOW);
            digitalWrite(o2, HIGH);
            digitalWrite(o3, HIGH);
            digitalWrite(o4, LOW);
            digitalWrite(p1, LOW);
            digitalWrite(p2, LOW);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 7:
            digitalWrite(o1, HIGH);
            digitalWrite(o2, HIGH);
            digitalWrite(o3, HIGH);
            digitalWrite(o4, LOW);
            digitalWrite(p1, LOW);
            digitalWrite(p2, LOW);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 8:
            digitalWrite(o1, LOW);
            digitalWrite(o2, LOW);
            digitalWrite(o3, LOW);
            digitalWrite(o4, HIGH);
            digitalWrite(p1, LOW);
            digitalWrite(p2, LOW);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 9:
            digitalWrite(o1, HIGH);
            digitalWrite(o2, LOW);
            digitalWrite(o3, LOW);
            digitalWrite(o4, HIGH);
            digitalWrite(p1, LOW);
            digitalWrite(p2, LOW);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 10:
            digitalWrite(o1, LOW);
            digitalWrite(o2, LOW);
            digitalWrite(o3, LOW);
            digitalWrite(o4, LOW);
            digitalWrite(p1, HIGH);
            digitalWrite(p2, LOW);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 11:
            digitalWrite(o1, HIGH);
            digitalWrite(o2, LOW);
            digitalWrite(o3, LOW);
            digitalWrite(o4, LOW);
            digitalWrite(p1, HIGH);
            digitalWrite(p2, LOW);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 12:
            digitalWrite(o1, LOW);
            digitalWrite(o2, HIGH);
            digitalWrite(o3, LOW);
            digitalWrite(o4, LOW);
            digitalWrite(p1, HIGH);
            digitalWrite(p2, LOW);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 13:
            digitalWrite(o1, HIGH);
            digitalWrite(o2, HIGH);
            digitalWrite(o3, LOW);
            digitalWrite(o4, LOW);
            digitalWrite(p1, HIGH);
            digitalWrite(p2, LOW);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 14:
            digitalWrite(o1, LOW);
            digitalWrite(o2, LOW);
            digitalWrite(o3, HIGH);
            digitalWrite(o4, LOW);
            digitalWrite(p1, HIGH);
            digitalWrite(p2, LOW);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 15:
            digitalWrite(o1, HIGH);
            digitalWrite(o2, LOW);
            digitalWrite(o3, HIGH);
            digitalWrite(o4, LOW);
            digitalWrite(p1, HIGH);
            digitalWrite(p2, LOW);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 16:
            digitalWrite(o1, LOW);
            digitalWrite(o2, HIGH);
            digitalWrite(o3, HIGH);
            digitalWrite(o4, LOW);
            digitalWrite(p1, HIGH);
            digitalWrite(p2, LOW);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 17:
            digitalWrite(o1, HIGH);
            digitalWrite(o2, HIGH);
            digitalWrite(o3, HIGH);
            digitalWrite(o4, LOW);
            digitalWrite(p1, HIGH);
            digitalWrite(p2, LOW);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 18:
            digitalWrite(o1, LOW);
            digitalWrite(o2, LOW);
            digitalWrite(o3, LOW);
            digitalWrite(o4, HIGH);
            digitalWrite(p1, HIGH);
            digitalWrite(p2, LOW);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 19:
            digitalWrite(o1, HIGH);
            digitalWrite(o2, LOW);
            digitalWrite(o3, LOW);
            digitalWrite(o4, HIGH);
            digitalWrite(p1, HIGH);
            digitalWrite(p2, LOW);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 20:
            digitalWrite(o1, LOW);
            digitalWrite(o2, LOW);
            digitalWrite(o3, LOW);
            digitalWrite(o4, LOW);
            digitalWrite(p1, LOW);
            digitalWrite(p2, HIGH);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 21:
            digitalWrite(o1, HIGH);
            digitalWrite(o2, LOW);
            digitalWrite(o3, LOW);
            digitalWrite(o4, LOW);
            digitalWrite(p1, LOW);
            digitalWrite(p2, HIGH);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 22:
            digitalWrite(o1, LOW);
            digitalWrite(o2, HIGH);
            digitalWrite(o3, LOW);
            digitalWrite(o4, LOW);
            digitalWrite(p1, LOW);
            digitalWrite(p2, HIGH);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 23:
            digitalWrite(o1, HIGH);
            digitalWrite(o2, HIGH);
            digitalWrite(o3, LOW);
            digitalWrite(o4, LOW);
            digitalWrite(p1, LOW);
            digitalWrite(p2, HIGH);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 24:
            digitalWrite(o1, LOW);
            digitalWrite(o2, LOW);
            digitalWrite(o3, HIGH);
            digitalWrite(o4, LOW);
            digitalWrite(p1, LOW);
            digitalWrite(p2, HIGH);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 25:
            digitalWrite(o1, HIGH);
            digitalWrite(o2, LOW);
            digitalWrite(o3, HIGH);
            digitalWrite(o4, LOW);
            digitalWrite(p1, LOW);
            digitalWrite(p2, HIGH);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 26:
            digitalWrite(o1, LOW);
            digitalWrite(o2, HIGH);
            digitalWrite(o3, HIGH);
            digitalWrite(o4, LOW);
            digitalWrite(p1, LOW);
            digitalWrite(p2, HIGH);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 27:
            digitalWrite(o1, HIGH);
            digitalWrite(o2, HIGH);
            digitalWrite(o3, HIGH);
            digitalWrite(o4, LOW);
            digitalWrite(p1, LOW);
            digitalWrite(p2, HIGH);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 28:
            digitalWrite(o1, LOW);
            digitalWrite(o2, LOW);
            digitalWrite(o3, LOW);
            digitalWrite(o4, HIGH);
            digitalWrite(p1, LOW);
            digitalWrite(p2, HIGH);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 29:
            digitalWrite(o1, HIGH);
            digitalWrite(o2, LOW);
            digitalWrite(o3, LOW);
            digitalWrite(o4, HIGH);
            digitalWrite(p1, LOW);
            digitalWrite(p2, HIGH);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 30:
            digitalWrite(o1, LOW);
            digitalWrite(o2, LOW);
            digitalWrite(o3, LOW);
            digitalWrite(o4, LOW);
            digitalWrite(p1, HIGH);
            digitalWrite(p2, HIGH);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 31:
            digitalWrite(o1, HIGH);
            digitalWrite(o2, LOW);
            digitalWrite(o3, LOW);
            digitalWrite(o4, LOW);
            digitalWrite(p1, HIGH);
            digitalWrite(p2, HIGH);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 32:
            digitalWrite(o1, LOW);
            digitalWrite(o2, HIGH);
            digitalWrite(o3, LOW);
            digitalWrite(o4, LOW);
            digitalWrite(p1, HIGH);
            digitalWrite(p2, HIGH);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 33:
            digitalWrite(o1, HIGH);
            digitalWrite(o2, HIGH);
            digitalWrite(o3, LOW);
            digitalWrite(o4, LOW);
            digitalWrite(p1, HIGH);
            digitalWrite(p2, HIGH);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 34:
            digitalWrite(o1, LOW);
            digitalWrite(o2, LOW);
            digitalWrite(o3, HIGH);
            digitalWrite(o4, LOW);
            digitalWrite(p1, HIGH);
            digitalWrite(p2, HIGH);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 35:
            digitalWrite(o1, HIGH);
            digitalWrite(o2, LOW);
            digitalWrite(o3, HIGH);
            digitalWrite(o4, LOW);
            digitalWrite(p1, HIGH);
            digitalWrite(p2, HIGH);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 36:
            digitalWrite(o1, LOW);
            digitalWrite(o2, HIGH);
            digitalWrite(o3, HIGH);
            digitalWrite(o4, LOW);
            digitalWrite(p1, HIGH);
            digitalWrite(p2, HIGH);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 37:
            digitalWrite(o1, HIGH);
            digitalWrite(o2, HIGH);
            digitalWrite(o3, HIGH);
            digitalWrite(o4, LOW);
            digitalWrite(p1, HIGH);
            digitalWrite(p2, HIGH);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 38:
            digitalWrite(o1, LOW);
            digitalWrite(o2, LOW);
            digitalWrite(o3, LOW);
            digitalWrite(o4, HIGH);
            digitalWrite(p1, HIGH);
            digitalWrite(p2, HIGH);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 39:
            digitalWrite(o1, HIGH);
            digitalWrite(o2, LOW);
            digitalWrite(o3, LOW);
            digitalWrite(o4, HIGH);
            digitalWrite(p1, HIGH);
            digitalWrite(p2, HIGH);
            digitalWrite(p3, LOW);
            digitalWrite(p4, LOW);
          break;
          
          case 40:
            digitalWrite(o1, LOW);
            digitalWrite(o2, LOW);
            digitalWrite(o3, LOW);
            digitalWrite(o4, LOW);
            digitalWrite(p1, LOW);
            digitalWrite(p2, LOW);
            digitalWrite(p3, HIGH);
            digitalWrite(p4, LOW);
          break;
          
          case 41:
            digitalWrite(o1, HIGH);
            digitalWrite(o2, LOW);
            digitalWrite(o3, LOW);
            digitalWrite(o4, LOW);
            digitalWrite(p1, LOW);
            digitalWrite(p2, LOW);
            digitalWrite(p3, HIGH);
            digitalWrite(p4, LOW);
          break;
          
          case 42:
            digitalWrite(o1, LOW);
            digitalWrite(o2, HIGH);
            digitalWrite(o3, LOW);
            digitalWrite(o4, LOW);
            digitalWrite(p1, LOW);
            digitalWrite(p2, LOW);
            digitalWrite(p3, HIGH);
            digitalWrite(p4, LOW);
          break;
          
          case 43:
            digitalWrite(o1, HIGH);
            digitalWrite(o2, HIGH);
            digitalWrite(o3, LOW);
            digitalWrite(o4, LOW);
            digitalWrite(p1, LOW);
            digitalWrite(p2, LOW);
            digitalWrite(p3, HIGH);
            digitalWrite(p4, LOW);
          break;
          
          case 44:
            digitalWrite(o1, LOW);
            digitalWrite(o2, LOW);
            digitalWrite(o3, HIGH);
            digitalWrite(o4, LOW);
            digitalWrite(p1, LOW);
            digitalWrite(p2, LOW);
            digitalWrite(p3, HIGH);
            digitalWrite(p4, LOW);
          break;
          
          case 45:
            digitalWrite(o1, HIGH);
            digitalWrite(o2, LOW);
            digitalWrite(o3, HIGH);
            digitalWrite(o4, LOW);
            digitalWrite(p1, LOW);
            digitalWrite(p2, LOW);
            digitalWrite(p3, HIGH);
            digitalWrite(p4, LOW);
          break;
          
          case 46:
            digitalWrite(o1, LOW);
            digitalWrite(o2, HIGH);
            digitalWrite(o3, HIGH);
            digitalWrite(o4, LOW);
            digitalWrite(p1, LOW);
            digitalWrite(p2, LOW);
            digitalWrite(p3, HIGH);
            digitalWrite(p4, LOW);
          break;
          
          case 47:
            digitalWrite(o1, HIGH);
            digitalWrite(o2, HIGH);
            digitalWrite(o3, HIGH);
            digitalWrite(o4, LOW);
            digitalWrite(p1, LOW);
            digitalWrite(p2, LOW);
            digitalWrite(p3, HIGH);
            digitalWrite(p4, LOW);
          break;
          
          case 48:
            digitalWrite(o1, LOW);
            digitalWrite(o2, LOW);
            digitalWrite(o3, LOW);
            digitalWrite(o4, HIGH);
            digitalWrite(p1, LOW);
            digitalWrite(p2, LOW);
            digitalWrite(p3, HIGH);
            digitalWrite(p4, LOW);
          break;
          
          case 49:
            digitalWrite(o1, HIGH);
            digitalWrite(o2, LOW);
            digitalWrite(o3, LOW);
            digitalWrite(o4, HIGH);
            digitalWrite(p1, LOW);
            digitalWrite(p2, LOW);
            digitalWrite(p3, HIGH);
            digitalWrite(p4, LOW);
          break;
          
          case 50:
            digitalWrite(o1, LOW);
            digitalWrite(o2, LOW);
            digitalWrite(o3, LOW);
            digitalWrite(o4, LOW);
            digitalWrite(p1, HIGH);
            digitalWrite(p2, LOW);
            digitalWrite(p3, HIGH);
            digitalWrite(p4, LOW);
          break;
          
          case 51:
            digitalWrite(o1, HIGH);
            digitalWrite(o2, LOW);
            digitalWrite(o3, LOW);
            digitalWrite(o4, LOW);
            digitalWrite(p1, HIGH);
            digitalWrite(p2, LOW);
            digitalWrite(p3, HIGH);
            digitalWrite(p4, LOW);
          break;
          
          case 52:
            digitalWrite(o1, LOW);
            digitalWrite(o2, HIGH);
            digitalWrite(o3, LOW);
            digitalWrite(o4, LOW);
            digitalWrite(p1, HIGH);
            digitalWrite(p2, LOW);
            digitalWrite(p3, HIGH);
            digitalWrite(p4, LOW);
          break;
          
          case 53:
            digitalWrite(o1, HIGH);
            digitalWrite(o2, HIGH);
            digitalWrite(o3, LOW);
            digitalWrite(o4, LOW);
            digitalWrite(p1, HIGH);
            digitalWrite(p2, LOW);
            digitalWrite(p3, HIGH);
            digitalWrite(p4, LOW);
          break;
          
          case 54:
            digitalWrite(o1, LOW);
            digitalWrite(o2, LOW);
            digitalWrite(o3, HIGH);
            digitalWrite(o4, LOW);
            digitalWrite(p1, HIGH);
            digitalWrite(p2, LOW);
            digitalWrite(p3, HIGH);
            digitalWrite(p4, LOW);
          break;
          
          case 55:
            digitalWrite(o1, HIGH);
            digitalWrite(o2, LOW);
            digitalWrite(o3, HIGH);
            digitalWrite(o4, LOW);
            digitalWrite(p1, HIGH);
            digitalWrite(p2, LOW);
            digitalWrite(p3, HIGH);
            digitalWrite(p4, LOW);
          break;
          
          case 56:
            digitalWrite(o1, LOW);
            digitalWrite(o2, HIGH);
            digitalWrite(o3, HIGH);
            digitalWrite(o4, LOW);
            digitalWrite(p1, HIGH);
            digitalWrite(p2, LOW);
            digitalWrite(p3, HIGH);
            digitalWrite(p4, LOW);
          break;
          
          case 57:
            digitalWrite(o1, HIGH);
            digitalWrite(o2, HIGH);
            digitalWrite(o3, HIGH);
            digitalWrite(o4, LOW);
            digitalWrite(p1, HIGH);
            digitalWrite(p2, LOW);
            digitalWrite(p3, HIGH);
            digitalWrite(p4, LOW);
          break;
          
          case 58:
            digitalWrite(o1, LOW);
            digitalWrite(o2, LOW);
            digitalWrite(o3, LOW);
            digitalWrite(o4, HIGH);
            digitalWrite(p1, HIGH);
            digitalWrite(p2, LOW);
            digitalWrite(p3, HIGH);
            digitalWrite(p4, LOW);
          break;
          
          case 59:
            digitalWrite(o1, HIGH);
            digitalWrite(o2, LOW);
            digitalWrite(o3, LOW);
            digitalWrite(o4, HIGH);
            digitalWrite(p1, HIGH);
            digitalWrite(p2, LOW);
            digitalWrite(p3, HIGH);
            digitalWrite(p4, LOW);
          break;
        }

      switch(count1){
          case 0:
            digitalWrite(i1, LOW);
            digitalWrite(i2, LOW);
            digitalWrite(i3, LOW);
            digitalWrite(i4, LOW);
            digitalWrite(j1, LOW);
            digitalWrite(j2, LOW);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 1:
            digitalWrite(i1, HIGH);
            digitalWrite(i2, LOW);
            digitalWrite(i3, LOW);
            digitalWrite(i4, LOW);
            digitalWrite(j1, LOW);
            digitalWrite(j2, LOW);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 2:
            digitalWrite(i1, LOW);
            digitalWrite(i2, HIGH);
            digitalWrite(i3, LOW);
            digitalWrite(i4, LOW);
            digitalWrite(j1, LOW);
            digitalWrite(j2, LOW);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 3:
            digitalWrite(i1, HIGH);
            digitalWrite(i2, HIGH);
            digitalWrite(i3, LOW);
            digitalWrite(i4, LOW);
            digitalWrite(j1, LOW);
            digitalWrite(j2, LOW);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 4:
            digitalWrite(i1, LOW);
            digitalWrite(i2, LOW);
            digitalWrite(i3, HIGH);
            digitalWrite(i4, LOW);
            digitalWrite(j1, LOW);
            digitalWrite(j2, LOW);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 5:
            digitalWrite(i1, HIGH);
            digitalWrite(i2, LOW);
            digitalWrite(i3, HIGH);
            digitalWrite(i4, LOW);
            digitalWrite(j1, LOW);
            digitalWrite(j2, LOW);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 6:
            digitalWrite(i1, LOW);
            digitalWrite(i2, HIGH);
            digitalWrite(i3, HIGH);
            digitalWrite(i4, LOW);
            digitalWrite(j1, LOW);
            digitalWrite(j2, LOW);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 7:
            digitalWrite(i1, HIGH);
            digitalWrite(i2, HIGH);
            digitalWrite(i3, HIGH);
            digitalWrite(i4, LOW);
            digitalWrite(j1, LOW);
            digitalWrite(j2, LOW);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 8:
            digitalWrite(i1, LOW);
            digitalWrite(i2, LOW);
            digitalWrite(i3, LOW);
            digitalWrite(i4, HIGH);
            digitalWrite(j1, LOW);
            digitalWrite(j2, LOW);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 9:
            digitalWrite(i1, HIGH);
            digitalWrite(i2, LOW);
            digitalWrite(i3, LOW);
            digitalWrite(i4, HIGH);
            digitalWrite(j1, LOW);
            digitalWrite(j2, LOW);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 10:
            digitalWrite(i1, LOW);
            digitalWrite(i2, LOW);
            digitalWrite(i3, LOW);
            digitalWrite(i4, LOW);
            digitalWrite(j1, HIGH);
            digitalWrite(j2, LOW);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 11:
            digitalWrite(i1, HIGH);
            digitalWrite(i2, LOW);
            digitalWrite(i3, LOW);
            digitalWrite(i4, LOW);
            digitalWrite(j1, HIGH);
            digitalWrite(j2, LOW);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 12:
            digitalWrite(i1, LOW);
            digitalWrite(i2, HIGH);
            digitalWrite(i3, LOW);
            digitalWrite(i4, LOW);
            digitalWrite(j1, HIGH);
            digitalWrite(j2, LOW);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 13:
            digitalWrite(i1, HIGH);
            digitalWrite(i2, HIGH);
            digitalWrite(i3, LOW);
            digitalWrite(i4, LOW);
            digitalWrite(j1, HIGH);
            digitalWrite(j2, LOW);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 14:
            digitalWrite(i1, LOW);
            digitalWrite(i2, LOW);
            digitalWrite(i3, HIGH);
            digitalWrite(i4, LOW);
            digitalWrite(j1, HIGH);
            digitalWrite(j2, LOW);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 15:
            digitalWrite(i1, HIGH);
            digitalWrite(i2, LOW);
            digitalWrite(i3, HIGH);
            digitalWrite(i4, LOW);
            digitalWrite(j1, HIGH);
            digitalWrite(j2, LOW);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 16:
            digitalWrite(i1, LOW);
            digitalWrite(i2, HIGH);
            digitalWrite(i3, HIGH);
            digitalWrite(i4, LOW);
            digitalWrite(j1, HIGH);
            digitalWrite(j2, LOW);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 17:
            digitalWrite(i1, HIGH);
            digitalWrite(i2, HIGH);
            digitalWrite(i3, HIGH);
            digitalWrite(i4, LOW);
            digitalWrite(j1, HIGH);
            digitalWrite(j2, LOW);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 18:
            digitalWrite(i1, LOW);
            digitalWrite(i2, LOW);
            digitalWrite(i3, LOW);
            digitalWrite(i4, HIGH);
            digitalWrite(j1, HIGH);
            digitalWrite(j2, LOW);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 19:
            digitalWrite(i1, HIGH);
            digitalWrite(i2, LOW);
            digitalWrite(i3, LOW);
            digitalWrite(i4, HIGH);
            digitalWrite(j1, HIGH);
            digitalWrite(j2, LOW);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 20:
            digitalWrite(i1, LOW);
            digitalWrite(i2, LOW);
            digitalWrite(i3, LOW);
            digitalWrite(i4, LOW);
            digitalWrite(j1, LOW);
            digitalWrite(j2, HIGH);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 21:
            digitalWrite(i1, HIGH);
            digitalWrite(i2, LOW);
            digitalWrite(i3, LOW);
            digitalWrite(i4, LOW);
            digitalWrite(j1, LOW);
            digitalWrite(j2, HIGH);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 22:
            digitalWrite(i1, LOW);
            digitalWrite(i2, HIGH);
            digitalWrite(i3, LOW);
            digitalWrite(i4, LOW);
            digitalWrite(j1, LOW);
            digitalWrite(j2, HIGH);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 23:
            digitalWrite(i1, HIGH);
            digitalWrite(i2, HIGH);
            digitalWrite(i3, LOW);
            digitalWrite(i4, LOW);
            digitalWrite(j1, LOW);
            digitalWrite(j2, HIGH);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 24:
            digitalWrite(i1, LOW);
            digitalWrite(i2, LOW);
            digitalWrite(i3, HIGH);
            digitalWrite(i4, LOW);
            digitalWrite(j1, LOW);
            digitalWrite(j2, HIGH);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 25:
            digitalWrite(i1, HIGH);
            digitalWrite(i2, LOW);
            digitalWrite(i3, HIGH);
            digitalWrite(i4, LOW);
            digitalWrite(j1, LOW);
            digitalWrite(j2, HIGH);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 26:
            digitalWrite(i1, LOW);
            digitalWrite(i2, HIGH);
            digitalWrite(i3, HIGH);
            digitalWrite(i4, LOW);
            digitalWrite(j1, LOW);
            digitalWrite(j2, HIGH);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 27:
            digitalWrite(i1, HIGH);
            digitalWrite(i2, HIGH);
            digitalWrite(i3, HIGH);
            digitalWrite(i4, LOW);
            digitalWrite(j1, LOW);
            digitalWrite(j2, HIGH);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 28:
            digitalWrite(i1, LOW);
            digitalWrite(i2, LOW);
            digitalWrite(i3, LOW);
            digitalWrite(i4, HIGH);
            digitalWrite(j1, LOW);
            digitalWrite(j2, HIGH);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 29:
            digitalWrite(i1, HIGH);
            digitalWrite(i2, LOW);
            digitalWrite(i3, LOW);
            digitalWrite(i4, HIGH);
            digitalWrite(j1, LOW);
            digitalWrite(j2, HIGH);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 30:
            digitalWrite(i1, LOW);
            digitalWrite(i2, LOW);
            digitalWrite(i3, LOW);
            digitalWrite(i4, LOW);
            digitalWrite(j1, HIGH);
            digitalWrite(j2, HIGH);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 31:
            digitalWrite(i1, HIGH);
            digitalWrite(i2, LOW);
            digitalWrite(i3, LOW);
            digitalWrite(i4, LOW);
            digitalWrite(j1, HIGH);
            digitalWrite(j2, HIGH);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 32:
            digitalWrite(i1, LOW);
            digitalWrite(i2, HIGH);
            digitalWrite(i3, LOW);
            digitalWrite(i4, LOW);
            digitalWrite(j1, HIGH);
            digitalWrite(j2, HIGH);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 33:
            digitalWrite(i1, HIGH);
            digitalWrite(i2, HIGH);
            digitalWrite(i3, LOW);
            digitalWrite(i4, LOW);
            digitalWrite(j1, HIGH);
            digitalWrite(j2, HIGH);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 34:
            digitalWrite(i1, LOW);
            digitalWrite(i2, LOW);
            digitalWrite(i3, HIGH);
            digitalWrite(i4, LOW);
            digitalWrite(j1, HIGH);
            digitalWrite(j2, HIGH);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 35:
            digitalWrite(i1, HIGH);
            digitalWrite(i2, LOW);
            digitalWrite(i3, HIGH);
            digitalWrite(i4, LOW);
            digitalWrite(j1, HIGH);
            digitalWrite(j2, HIGH);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 36:
            digitalWrite(i1, LOW);
            digitalWrite(i2, HIGH);
            digitalWrite(i3, HIGH);
            digitalWrite(i4, LOW);
            digitalWrite(j1, HIGH);
            digitalWrite(j2, HIGH);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 37:
            digitalWrite(i1, HIGH);
            digitalWrite(i2, HIGH);
            digitalWrite(i3, HIGH);
            digitalWrite(i4, LOW);
            digitalWrite(j1, HIGH);
            digitalWrite(j2, HIGH);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 38:
            digitalWrite(i1, LOW);
            digitalWrite(i2, LOW);
            digitalWrite(i3, LOW);
            digitalWrite(i4, HIGH);
            digitalWrite(j1, HIGH);
            digitalWrite(j2, HIGH);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 39:
            digitalWrite(i1, HIGH);
            digitalWrite(i2, LOW);
            digitalWrite(i3, LOW);
            digitalWrite(i4, HIGH);
            digitalWrite(j1, HIGH);
            digitalWrite(j2, HIGH);
            digitalWrite(j3, LOW);
            digitalWrite(j4, LOW);
          break;
          
          case 40:
            digitalWrite(i1, LOW);
            digitalWrite(i2, LOW);
            digitalWrite(i3, LOW);
            digitalWrite(i4, LOW);
            digitalWrite(j1, LOW);
            digitalWrite(j2, LOW);
            digitalWrite(j3, HIGH);
            digitalWrite(j4, LOW);
          break;
          
          case 41:
            digitalWrite(i1, HIGH);
            digitalWrite(i2, LOW);
            digitalWrite(i3, LOW);
            digitalWrite(i4, LOW);
            digitalWrite(j1, LOW);
            digitalWrite(j2, LOW);
            digitalWrite(j3, HIGH);
            digitalWrite(j4, LOW);
          break;
          
          case 42:
            digitalWrite(i1, LOW);
            digitalWrite(i2, HIGH);
            digitalWrite(i3, LOW);
            digitalWrite(i4, LOW);
            digitalWrite(j1, LOW);
            digitalWrite(j2, LOW);
            digitalWrite(j3, HIGH);
            digitalWrite(j4, LOW);
          break;
          
          case 43:
            digitalWrite(i1, HIGH);
            digitalWrite(i2, HIGH);
            digitalWrite(i3, LOW);
            digitalWrite(i4, LOW);
            digitalWrite(j1, LOW);
            digitalWrite(j2, LOW);
            digitalWrite(j3, HIGH);
            digitalWrite(j4, LOW);
          break;
          
          case 44:
            digitalWrite(i1, LOW);
            digitalWrite(i2, LOW);
            digitalWrite(i3, HIGH);
            digitalWrite(i4, LOW);
            digitalWrite(j1, LOW);
            digitalWrite(j2, LOW);
            digitalWrite(j3, HIGH);
            digitalWrite(j4, LOW);
          break;
          
          case 45:
            digitalWrite(i1, HIGH);
            digitalWrite(i2, LOW);
            digitalWrite(i3, HIGH);
            digitalWrite(i4, LOW);
            digitalWrite(j1, LOW);
            digitalWrite(j2, LOW);
            digitalWrite(j3, HIGH);
            digitalWrite(j4, LOW);
          break;
          
          case 46:
            digitalWrite(i1, LOW);
            digitalWrite(i2, HIGH);
            digitalWrite(i3, HIGH);
            digitalWrite(i4, LOW);
            digitalWrite(j1, LOW);
            digitalWrite(j2, LOW);
            digitalWrite(j3, HIGH);
            digitalWrite(j4, LOW);
          break;
          
          case 47:
            digitalWrite(i1, HIGH);
            digitalWrite(i2, HIGH);
            digitalWrite(i3, HIGH);
            digitalWrite(i4, LOW);
            digitalWrite(j1, LOW);
            digitalWrite(j2, LOW);
            digitalWrite(j3, HIGH);
            digitalWrite(j4, LOW);
          break;
          
          case 48:
            digitalWrite(i1, LOW);
            digitalWrite(i2, LOW);
            digitalWrite(i3, LOW);
            digitalWrite(i4, HIGH);
            digitalWrite(j1, LOW);
            digitalWrite(j2, LOW);
            digitalWrite(j3, HIGH);
            digitalWrite(j4, LOW);
          break;
          
          case 49:
            digitalWrite(i1, HIGH);
            digitalWrite(i2, LOW);
            digitalWrite(i3, LOW);
            digitalWrite(i4, HIGH);
            digitalWrite(j1, LOW);
            digitalWrite(j2, LOW);
            digitalWrite(j3, HIGH);
            digitalWrite(j4, LOW);
          break;
          
          case 50:
            digitalWrite(i1, LOW);
            digitalWrite(i2, LOW);
            digitalWrite(i3, LOW);
            digitalWrite(i4, LOW);
            digitalWrite(j1, HIGH);
            digitalWrite(j2, LOW);
            digitalWrite(j3, HIGH);
            digitalWrite(j4, LOW);
          break;
        }

        switch(count2){
          case 0:
            digitalWrite(k1, LOW);
            digitalWrite(k2, LOW);
            digitalWrite(k3, LOW);
            digitalWrite(k4, LOW);
            digitalWrite(L1, LOW);
            digitalWrite(L2, LOW);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 1:
            digitalWrite(k1, HIGH);
            digitalWrite(k2, LOW);
            digitalWrite(k3, LOW);
            digitalWrite(k4, LOW);
            digitalWrite(L1, LOW);
            digitalWrite(L2, LOW);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 2:
            digitalWrite(k1, LOW);
            digitalWrite(k2, HIGH);
            digitalWrite(k3, LOW);
            digitalWrite(k4, LOW);
            digitalWrite(L1, LOW);
            digitalWrite(L2, LOW);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 3:
            digitalWrite(k1, HIGH);
            digitalWrite(k2, HIGH);
            digitalWrite(k3, LOW);
            digitalWrite(k4, LOW);
            digitalWrite(L1, LOW);
            digitalWrite(L2, LOW);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 4:
            digitalWrite(k1, LOW);
            digitalWrite(k2, LOW);
            digitalWrite(k3, HIGH);
            digitalWrite(k4, LOW);
            digitalWrite(L1, LOW);
            digitalWrite(L2, LOW);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 5:
            digitalWrite(k1, HIGH);
            digitalWrite(k2, LOW);
            digitalWrite(k3, HIGH);
            digitalWrite(k4, LOW);
            digitalWrite(L1, LOW);
            digitalWrite(L2, LOW);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 6:
            digitalWrite(k1, LOW);
            digitalWrite(k2, HIGH);
            digitalWrite(k3, HIGH);
            digitalWrite(k4, LOW);
            digitalWrite(L1, LOW);
            digitalWrite(L2, LOW);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 7:
            digitalWrite(k1, HIGH);
            digitalWrite(k2, HIGH);
            digitalWrite(k3, HIGH);
            digitalWrite(k4, LOW);
            digitalWrite(L1, LOW);
            digitalWrite(L2, LOW);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 8:
            digitalWrite(k1, LOW);
            digitalWrite(k2, LOW);
            digitalWrite(k3, LOW);
            digitalWrite(k4, HIGH);
            digitalWrite(L1, LOW);
            digitalWrite(L2, LOW);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 9:
            digitalWrite(k1, HIGH);
            digitalWrite(k2, LOW);
            digitalWrite(k3, LOW);
            digitalWrite(k4, HIGH);
            digitalWrite(L1, LOW);
            digitalWrite(L2, LOW);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 10:
            digitalWrite(k1, LOW);
            digitalWrite(k2, LOW);
            digitalWrite(k3, LOW);
            digitalWrite(k4, LOW);
            digitalWrite(L1, HIGH);
            digitalWrite(L2, LOW);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 11:
            digitalWrite(k1, HIGH);
            digitalWrite(k2, LOW);
            digitalWrite(k3, LOW);
            digitalWrite(k4, LOW);
            digitalWrite(L1, HIGH);
            digitalWrite(L2, LOW);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 12:
            digitalWrite(k1, LOW);
            digitalWrite(k2, HIGH);
            digitalWrite(k3, LOW);
            digitalWrite(k4, LOW);
            digitalWrite(L1, HIGH);
            digitalWrite(L2, LOW);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 13:
            digitalWrite(k1, HIGH);
            digitalWrite(k2, HIGH);
            digitalWrite(k3, LOW);
            digitalWrite(k4, LOW);
            digitalWrite(L1, HIGH);
            digitalWrite(L2, LOW);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 14:
            digitalWrite(k1, LOW);
            digitalWrite(k2, LOW);
            digitalWrite(k3, HIGH);
            digitalWrite(k4, LOW);
            digitalWrite(L1, HIGH);
            digitalWrite(L2, LOW);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 15:
            digitalWrite(k1, HIGH);
            digitalWrite(k2, LOW);
            digitalWrite(k3, HIGH);
            digitalWrite(k4, LOW);
            digitalWrite(L1, HIGH);
            digitalWrite(L2, LOW);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 16:
            digitalWrite(k1, LOW);
            digitalWrite(k2, HIGH);
            digitalWrite(k3, HIGH);
            digitalWrite(k4, LOW);
            digitalWrite(L1, HIGH);
            digitalWrite(L2, LOW);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 17:
            digitalWrite(k1, HIGH);
            digitalWrite(k2, HIGH);
            digitalWrite(k3, HIGH);
            digitalWrite(k4, LOW);
            digitalWrite(L1, HIGH);
            digitalWrite(L2, LOW);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 18:
            digitalWrite(k1, LOW);
            digitalWrite(k2, LOW);
            digitalWrite(k3, LOW);
            digitalWrite(k4, HIGH);
            digitalWrite(L1, HIGH);
            digitalWrite(L2, LOW);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 19:
            digitalWrite(k1, HIGH);
            digitalWrite(k2, LOW);
            digitalWrite(k3, LOW);
            digitalWrite(k4, HIGH);
            digitalWrite(L1, HIGH);
            digitalWrite(L2, LOW);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 20:
            digitalWrite(k1, LOW);
            digitalWrite(k2, LOW);
            digitalWrite(k3, LOW);
            digitalWrite(k4, LOW);
            digitalWrite(L1, LOW);
            digitalWrite(L2, HIGH);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 21:
            digitalWrite(k1, HIGH);
            digitalWrite(k2, LOW);
            digitalWrite(k3, LOW);
            digitalWrite(k4, LOW);
            digitalWrite(L1, LOW);
            digitalWrite(L2, HIGH);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 22:
            digitalWrite(k1, LOW);
            digitalWrite(k2, HIGH);
            digitalWrite(k3, LOW);
            digitalWrite(k4, LOW);
            digitalWrite(L1, LOW);
            digitalWrite(L2, HIGH);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 23:
            digitalWrite(k1, HIGH);
            digitalWrite(k2, HIGH);
            digitalWrite(k3, LOW);
            digitalWrite(k4, LOW);
            digitalWrite(L1, LOW);
            digitalWrite(L2, HIGH);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 24:
            digitalWrite(k1, LOW);
            digitalWrite(k2, LOW);
            digitalWrite(k3, HIGH);
            digitalWrite(k4, LOW);
            digitalWrite(L1, LOW);
            digitalWrite(L2, HIGH);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 25:
            digitalWrite(k1, HIGH);
            digitalWrite(k2, LOW);
            digitalWrite(k3, HIGH);
            digitalWrite(k4, LOW);
            digitalWrite(L1, LOW);
            digitalWrite(L2, HIGH);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 26:
            digitalWrite(k1, LOW);
            digitalWrite(k2, HIGH);
            digitalWrite(k3, HIGH);
            digitalWrite(k4, LOW);
            digitalWrite(L1, LOW);
            digitalWrite(L2, HIGH);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 27:
            digitalWrite(k1, HIGH);
            digitalWrite(k2, HIGH);
            digitalWrite(k3, HIGH);
            digitalWrite(k4, LOW);
            digitalWrite(L1, LOW);
            digitalWrite(L2, HIGH);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 28:
            digitalWrite(k1, LOW);
            digitalWrite(k2, LOW);
            digitalWrite(k3, LOW);
            digitalWrite(k4, HIGH);
            digitalWrite(L1, LOW);
            digitalWrite(L2, HIGH);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 29:
            digitalWrite(k1, HIGH);
            digitalWrite(k2, LOW);
            digitalWrite(k3, LOW);
            digitalWrite(k4, HIGH);
            digitalWrite(L1, LOW);
            digitalWrite(L2, HIGH);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 30:
            digitalWrite(k1, LOW);
            digitalWrite(k2, LOW);
            digitalWrite(k3, LOW);
            digitalWrite(k4, LOW);
            digitalWrite(L1, HIGH);
            digitalWrite(L2, HIGH);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 31:
            digitalWrite(k1, HIGH);
            digitalWrite(k2, LOW);
            digitalWrite(k3, LOW);
            digitalWrite(k4, LOW);
            digitalWrite(L1, HIGH);
            digitalWrite(L2, HIGH);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 32:
            digitalWrite(k1, LOW);
            digitalWrite(k2, HIGH);
            digitalWrite(k3, LOW);
            digitalWrite(k4, LOW);
            digitalWrite(L1, HIGH);
            digitalWrite(L2, HIGH);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 33:
            digitalWrite(k1, HIGH);
            digitalWrite(k2, HIGH);
            digitalWrite(k3, LOW);
            digitalWrite(k4, LOW);
            digitalWrite(L1, HIGH);
            digitalWrite(L2, HIGH);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 34:
            digitalWrite(k1, LOW);
            digitalWrite(k2, LOW);
            digitalWrite(k3, HIGH);
            digitalWrite(k4, LOW);
            digitalWrite(L1, HIGH);
            digitalWrite(L2, HIGH);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 35:
            digitalWrite(k1, HIGH);
            digitalWrite(k2, LOW);
            digitalWrite(k3, HIGH);
            digitalWrite(k4, LOW);
            digitalWrite(L1, HIGH);
            digitalWrite(L2, HIGH);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 36:
            digitalWrite(k1, LOW);
            digitalWrite(k2, HIGH);
            digitalWrite(k3, HIGH);
            digitalWrite(k4, LOW);
            digitalWrite(L1, HIGH);
            digitalWrite(L2, HIGH);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 37:
            digitalWrite(k1, HIGH);
            digitalWrite(k2, HIGH);
            digitalWrite(k3, HIGH);
            digitalWrite(k4, LOW);
            digitalWrite(L1, HIGH);
            digitalWrite(L2, HIGH);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 38:
            digitalWrite(k1, LOW);
            digitalWrite(k2, LOW);
            digitalWrite(k3, LOW);
            digitalWrite(k4, HIGH);
            digitalWrite(L1, HIGH);
            digitalWrite(L2, HIGH);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 39:
            digitalWrite(k1, HIGH);
            digitalWrite(k2, LOW);
            digitalWrite(k3, LOW);
            digitalWrite(k4, HIGH);
            digitalWrite(L1, HIGH);
            digitalWrite(L2, HIGH);
            digitalWrite(L3, LOW);
            digitalWrite(L4, LOW);
          break;
          
          case 40:
            digitalWrite(k1, LOW);
            digitalWrite(k2, LOW);
            digitalWrite(k3, LOW);
            digitalWrite(k4, LOW);
            digitalWrite(L1, LOW);
            digitalWrite(L2, LOW);
            digitalWrite(L3, HIGH);
            digitalWrite(L4, LOW);
          break;
          
          case 41:
            digitalWrite(k1, HIGH);
            digitalWrite(k2, LOW);
            digitalWrite(k3, LOW);
            digitalWrite(k4, LOW);
            digitalWrite(L1, LOW);
            digitalWrite(L2, LOW);
            digitalWrite(L3, HIGH);
            digitalWrite(L4, LOW);
          break;
          
          case 42:
            digitalWrite(k1, LOW);
            digitalWrite(k2, HIGH);
            digitalWrite(k3, LOW);
            digitalWrite(k4, LOW);
            digitalWrite(L1, LOW);
            digitalWrite(L2, LOW);
            digitalWrite(L3, HIGH);
            digitalWrite(L4, LOW);
          break;
          
          case 43:
            digitalWrite(k1, HIGH);
            digitalWrite(k2, HIGH);
            digitalWrite(k3, LOW);
            digitalWrite(k4, LOW);
            digitalWrite(L1, LOW);
            digitalWrite(L2, LOW);
            digitalWrite(L3, HIGH);
            digitalWrite(L4, LOW);
          break;
          
          case 44:
            digitalWrite(k1, LOW);
            digitalWrite(k2, LOW);
            digitalWrite(k3, HIGH);
            digitalWrite(k4, LOW);
            digitalWrite(L1, LOW);
            digitalWrite(L2, LOW);
            digitalWrite(L3, HIGH);
            digitalWrite(L4, LOW);
          break;
          
          case 45:
            digitalWrite(k1, HIGH);
            digitalWrite(k2, LOW);
            digitalWrite(k3, HIGH);
            digitalWrite(k4, LOW);
            digitalWrite(L1, LOW);
            digitalWrite(L2, LOW);
            digitalWrite(L3, HIGH);
            digitalWrite(L4, LOW);
          break;
          
          case 46:
            digitalWrite(k1, LOW);
            digitalWrite(k2, HIGH);
            digitalWrite(k3, HIGH);
            digitalWrite(k4, LOW);
            digitalWrite(L1, LOW);
            digitalWrite(L2, LOW);
            digitalWrite(L3, HIGH);
            digitalWrite(L4, LOW);
          break;
          
          case 47:
            digitalWrite(k1, HIGH);
            digitalWrite(k2, HIGH);
            digitalWrite(k3, HIGH);
            digitalWrite(k4, LOW);
            digitalWrite(L1, LOW);
            digitalWrite(L2, LOW);
            digitalWrite(L3, HIGH);
            digitalWrite(L4, LOW);
          break;
          
          case 48:
            digitalWrite(k1, LOW);
            digitalWrite(k2, LOW);
            digitalWrite(k3, LOW);
            digitalWrite(k4, HIGH);
            digitalWrite(L1, LOW);
            digitalWrite(L2, LOW);
            digitalWrite(L3, HIGH);
            digitalWrite(L4, LOW);
          break;
          
          case 49:
            digitalWrite(k1, HIGH);
            digitalWrite(k2, LOW);
            digitalWrite(k3, LOW);
            digitalWrite(k4, HIGH);
            digitalWrite(L1, LOW);
            digitalWrite(L2, LOW);
            digitalWrite(L3, HIGH);
            digitalWrite(L4, LOW);
          break;
          
          case 50:
            digitalWrite(k1, LOW);
            digitalWrite(k2, LOW);
            digitalWrite(k3, LOW);
            digitalWrite(k4, LOW);
            digitalWrite(L1, HIGH);
            digitalWrite(L2, LOW);
            digitalWrite(L3, HIGH);
            digitalWrite(L4, LOW);
          break;
        }
        delay(990);
        if(sec==0){
          sec=59;
          mint-=1;
        }
        
        sec-=1; 
        if(mint==0 and sec==0){
          startt=0;
          mint=4;
          sec=59;
          digitalWrite(m1, HIGH);
          digitalWrite(m2, LOW);
          digitalWrite(m3, LOW);
          digitalWrite(m4, HIGH);
          digitalWrite(n1, HIGH);
          digitalWrite(n2, LOW);
          digitalWrite(n3, HIGH);
          digitalWrite(n4, LOW);
          digitalWrite(o1, LOW);
          digitalWrite(o2, LOW);
          digitalWrite(o3, HIGH);
          digitalWrite(o4, LOW);
          digitalWrite(p1, LOW);
          digitalWrite(p2, LOW);
          digitalWrite(p3, LOW);
          digitalWrite(p4, LOW);
        }
      }
    }


    void counting1() {
      count1+=1;
    }

    void counting2() {
      count2+=1;
    }
