/*
Esta parte del programa contiene mapeados los numeros decimales
en forma de función para mostrar en un 7 segmentos. De esta manera se 
simplifica el uso y el entendimiento en el programa.
principal.
*/
void borrar (){
  digitalWrite(segA,LOW);
  digitalWrite(segB,LOW);
  digitalWrite(segC,LOW);
  digitalWrite(segD,LOW);
  digitalWrite(segE,LOW);
  digitalWrite(segF,LOW);
  digitalWrite(segG,LOW);
  digitalWrite(dot,LOW);
}
void cero (){
  digitalWrite(segA,HIGH);
  digitalWrite(segB,HIGH);
  digitalWrite(segC,HIGH);
  digitalWrite(segD,HIGH);
  digitalWrite(segE,HIGH);
  digitalWrite(segF,HIGH);
  digitalWrite(segG,LOW);
}
void uno (){
  digitalWrite(segA,LOW);
  digitalWrite(segB,HIGH);
  digitalWrite(segC,HIGH);
  digitalWrite(segD,LOW);
  digitalWrite(segE,LOW);
  digitalWrite(segF,LOW);
  digitalWrite(segG,LOW);
}
void dos (){
  digitalWrite(segA,HIGH);
  digitalWrite(segB,HIGH);
  digitalWrite(segC,LOW);
  digitalWrite(segD,HIGH);
  digitalWrite(segE,HIGH);
  digitalWrite(segF,LOW);
  digitalWrite(segG,HIGH);
}
void tres (){
  digitalWrite(segA,HIGH);
  digitalWrite(segB,HIGH);
  digitalWrite(segC,HIGH);
  digitalWrite(segD,HIGH);
  digitalWrite(segE,LOW);
  digitalWrite(segF,LOW);
  digitalWrite(segG,HIGH);
}
void cuatro (){
  digitalWrite(segA,LOW);
  digitalWrite(segB,HIGH);
  digitalWrite(segC,HIGH);
  digitalWrite(segD,LOW);
  digitalWrite(segE,LOW);
  digitalWrite(segF,HIGH);
  digitalWrite(segG,HIGH);
}
void cinco (){
  digitalWrite(segA,HIGH);
  digitalWrite(segB,LOW);
  digitalWrite(segC,HIGH);
  digitalWrite(segD,HIGH);
  digitalWrite(segE,LOW);
  digitalWrite(segF,HIGH);
  digitalWrite(segG,HIGH);
}
void seis (){
  digitalWrite(segA,HIGH);
  digitalWrite(segB,LOW);
  digitalWrite(segC,HIGH);
  digitalWrite(segD,HIGH);
  digitalWrite(segE,HIGH);
  digitalWrite(segF,HIGH);
  digitalWrite(segG,HIGH);
}
void siete (){
  digitalWrite(segA,HIGH);
  digitalWrite(segB,HIGH);
  digitalWrite(segC,HIGH);
  digitalWrite(segD,LOW);
  digitalWrite(segE,LOW);
  digitalWrite(segF,LOW);
  digitalWrite(segG,LOW);
}
void ocho (){
  digitalWrite(segA,HIGH);
  digitalWrite(segB,HIGH);
  digitalWrite(segC,HIGH);
  digitalWrite(segD,HIGH);
  digitalWrite(segE,HIGH);
  digitalWrite(segF,HIGH);
  digitalWrite(segG,HIGH);
}
void nueve (){
  digitalWrite(segA,HIGH);
  digitalWrite(segB,HIGH);
  digitalWrite(segC,HIGH);
  digitalWrite(segD,LOW);
  digitalWrite(segE,LOW);
  digitalWrite(segF,HIGH);
  digitalWrite(segG,HIGH);
}
