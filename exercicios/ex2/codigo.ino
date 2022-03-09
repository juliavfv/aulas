const int led1 = 7;
const int led2 = 6;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}  

void loop()
{
  digitalWrite(led1, HIGH);
  delay(1000); 
  digitalWrite(led1, LOW);
  delay(1000); 
  digitalWrite(led2, HIGH);
  delay(1000); 
  digitalWrite(led2, LOW);
  delay(1000); 
  
}
