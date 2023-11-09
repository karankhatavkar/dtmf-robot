/*
DTMF Robot
*/
#define Q0 4
#define Q1 5
#define Q2 6
#define Q3 7
#define M1F 9
#define M1B 10
#define M2B 11
#define M2F 12

int a,b,c,d;


void setup() {
  Serial.begin(9600);
  pinMode(Q0,INPUT);
  pinMode(Q1,INPUT);
  pinMode(Q2,INPUT);
  pinMode(Q3,INPUT);

  pinMode(M1F,OUTPUT);
  pinMode(M1B,OUTPUT);
  pinMode(M2F,OUTPUT);
  pinMode(M2B,OUTPUT);

  Serial.println("setup Done");
  // put your setup code here, to run once:
}


void loop() {
  a=digitalRead(Q0);
  b=digitalRead(Q1);
  c=digitalRead(Q2);
  d=digitalRead(Q3);
  digitalWrite(M1F,HIGH);
  digitalWrite(M2F,HIGH);
  digitalWrite(M1B,LOW);
  digitalWrite(M2B,LOW);

 if(a==LOW&&b==HIGH&&c==LOW&&d==LOW)
  {
    Serial.println("Forward");
    digitalWrite(M1F,HIGH);
    digitalWrite(M2F,HIGH);
    digitalWrite(M1B,LOW);
    digitalWrite(M2B,LOW);
 }
 else if(a==LOW&&b==LOW&&c==LOW&&d==HIGH)
{
    Serial.println("backward");
    digitalWrite(M1F,LOW);
    digitalWrite(M2F,LOW);
    digitalWrite(M1B, HIGH);
    digitalWrite(M2B,HIGH);
  }
  else if(a==LOW&&b==LOW&&c==HIGH&&d==LOW)
  {
    Serial.println("left");
    digitalWrite(M1F,LOW);
    digitalWrite(M2F,HIGH);
    digitalWrite(M1B, LOW);
    digitalWrite(M2B,LOW);
  
  }
  else if(a==LOW&&b==HIGH&&c==HIGH&&d==LOW)
  {
    Serial.println("Right");
    digitalWrite(M1F,HIGH);
    digitalWrite(M2F,LOW);
    digitalWrite(M1B, LOW);
    digitalWrite(M2B,LOW);
  }
  else
  {
    Serial.println("stop");
    digitalWrite(M1F,LOW);
    digitalWrite(M2F,LOW);
    digitalWrite(M1B, LOW);
    digitalWrite(M2B,LOW);
  }
  // put your main code here, to run repeatedly:

}
