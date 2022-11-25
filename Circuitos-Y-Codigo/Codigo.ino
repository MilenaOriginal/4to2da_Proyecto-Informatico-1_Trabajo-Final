// C++ code
//

#define motor11 2
#define motor12 3
#define motor21 4
#define motor22 5
#define motor31 6
#define motor32 7
#define motor41 8
#define motor42 9
const int trigger = 12;
const int echo = 13;
float echoTiempo;
float distancia;
void setup()
{
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(motor11, OUTPUT);
  pinMode(motor12, OUTPUT);
  pinMode(motor21, OUTPUT);
  pinMode(motor22, OUTPUT);
  pinMode(motor31, OUTPUT);
  pinMode(motor32, OUTPUT);
  pinMode(motor41, OUTPUT);
  pinMode(motor42, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
    digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);
  echoTiempo = pulseIn(echo, HIGH);
  distancia = echoTiempo / 58;
  delay(500);
  Serial.print(distancia);
  Serial.println(" cm");
  delay(500);
  if(distancia > 30){
    digitalWrite(motor11, HIGH);
    digitalWrite(motor12, LOW);
    digitalWrite(motor21, HIGH);
    digitalWrite(motor22, LOW);
    digitalWrite(motor31, HIGH);
    digitalWrite(motor32, LOW);
    digitalWrite(motor41, HIGH);
    digitalWrite(motor42, LOW);
    delay(100);
      
  }
  else{
    
     digitalWrite(motor11, LOW);
     digitalWrite(motor12, LOW);
     digitalWrite(motor21, LOW);
     digitalWrite(motor22, LOW);
     digitalWrite(motor31, LOW);
     digitalWrite(motor32, LOW);
     digitalWrite(motor41, LOW);
     digitalWrite(motor42, LOW);
     delay(100);
     digitalWrite(motor11, LOW);
     digitalWrite(motor12, HIGH);
     digitalWrite(motor21, LOW);
     digitalWrite(motor22, HIGH);
     digitalWrite(motor31, LOW);
     digitalWrite(motor32, HIGH);
     digitalWrite(motor41, LOW);
     digitalWrite(motor42, HIGH);
     delay(600);
     digitalWrite(motor11, LOW);
     digitalWrite(motor12, HIGH);
     digitalWrite(motor21, LOW);
     digitalWrite(motor22, HIGH);
     digitalWrite(motor31, LOW);
     digitalWrite(motor32, LOW);
     digitalWrite(motor41, LOW);
     digitalWrite(motor42, LOW);
  }
}
