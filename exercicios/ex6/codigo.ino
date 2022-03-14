const int botao1 = 2;
const int botao2 = 3;
const int botao3 = 4;
const int botao4 = 5;
const int botao5 = 6;

int var1;
int var2;
int var3;
int var4;
int var5;

void setup(){
Serial.begin(9600);
pinMode(botao1, INPUT);
pinMode(botao2, INPUT);
pinMode(botao3, INPUT);
pinMode(botao4, INPUT);
pinMode(botao5, INPUT);
}

void loop(){
 var1 = digitalRead(botao1);
 var2 = digitalRead(botao2);
 var3 = digitalRead(botao3);
 var4 = digitalRead(botao4);
 var5 = digitalRead(botao5);
  
  if(var1){
   Serial.println("vasco da gama");
  }
  if(var2){
   Serial.println("vapo vapo");
  }
  if(var3){
   Serial.println("sou bonito sou gostoso");
  }
  if(var4){
   Serial.println("jogo bola e danço");
  }
  if(var5){
   Serial.println("cachinhos da haikawa");
  }
  
  delay(10);
}
