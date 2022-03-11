const int led1 = 7;
const int botao1 = 6;
int valor1;
  
void setup()
{
  pinMode(botao1, INPUT);
  pinMode(led1, OUTPUT);
}  

void loop()
{
  valor1 = digitalRead(botao1);
  
  if(valor1){
  digitalWrite(led1, HIGH); 
  }else{
  digitalWrite(led1, LOW);
  }
  delay(10);  

}
