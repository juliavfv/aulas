const int botao1 = 2;
const int botao2 = 3;
const int botao3 = 4;
const int led1 = 5;
const int led2 = 6;
const int led3 = 7;
const int led4 = 8;
const int led5 = 9;
const int led6 = 10;
const int led7 = 11;
const int led8 = 12;
const int led9 = 13;
const int led10 = 14;

int valor1;
int valor2;
int valor3;

void setup()
{
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
  pinMode(botao3, INPUT);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT); 
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT); 

}

void loop()
{
 valor1 = digitalRead(botao1);
 valor2 = digitalRead(botao2);
 valor3 = digitalRead(botao3);
 
  if(valor1){
   acendetudoapaga();
  }else{
    apagatudo();
  }
  
  if(valor2){
   piscapisca();
  }else{
    apagatudo();
  }
  
  if(valor3){
   piscaintercalado();
  }else{
      apagatudo();
    }
  
}
  
  
  void acendetudoapaga()
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, HIGH);
    digitalWrite(led8, HIGH);
    digitalWrite(led9, HIGH);
    digitalWrite(led10, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led10, LOW);
  }
    
  void piscapisca()
  {
    digitalWrite(led1, HIGH);
    delay(200);
    digitalWrite(led2, HIGH);
    delay(200);
    digitalWrite(led3, HIGH);
    delay(200);
    digitalWrite(led4, HIGH);
    delay(200);
    digitalWrite(led5, HIGH);
    delay(200);
    digitalWrite(led6, HIGH);
    delay(200);
    digitalWrite(led7, HIGH);
    delay(200);
    digitalWrite(led8, HIGH);
    delay(200);
    digitalWrite(led9, HIGH);
    delay(200);
    digitalWrite(led10, HIGH);
    delay(10);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led10, LOW);
  }
 
  void piscaintercalado()
  {
    digitalWrite(led1, HIGH);
    delay(200);
    digitalWrite(led3, HIGH);
    delay(200);
    digitalWrite(led5, HIGH);
    delay(200);
    digitalWrite(led7, HIGH);
    delay(200);
    digitalWrite(led9, HIGH);
    delay(2000);
    digitalWrite(led2, HIGH);
    delay(200);
    digitalWrite(led2, HIGH);
    delay(200);
    digitalWrite(led4, HIGH);
    delay(200);
    digitalWrite(led6, HIGH);
    delay(200);
    digitalWrite(led8, HIGH);
    delay(200);
    digitalWrite(led10, HIGH);
    delay(200);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led10, LOW);
  }
  
  void apagatudo()
  {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led10, LOW);
  }
