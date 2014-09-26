/*
***************************************************************
/   Este programa es un ejemplo para el curso de robótica.    /
***************************************************************
/   Descripción: El programa enciende el led 1 cuando el      /
/   usuario teclea la clave correcta y enciende el led 2      /
/   cuando la clave es errónea.                               /
***************************************************************
/             Autor: Gonzalo Matarrubia                       /
***************************************************************
*/

#define ledOK 10
#define ledERR 8
#define pulsaA 2
#define pulsaB 3
#define pulsaC 4



void setup (){
  pinMode(ledOK, OUTPUT);
  pinMode(ledERR,OUTPUT);
  pinMode(pulsaA,INPUT);
  pinMode(pulsaB,INPUT);
  pinMode(pulsaC,INPUT);
}

int clave[]={2,2,0,2};
int sec[]={100,100,100,100};
int estado = 0;
int intentosRestantes = 3;
void loop (){ 
  if(digitalRead(pulsaA)){
    sec[estado]=0;
    estado++;
    delay(500);
  }
  if(digitalRead(pulsaB)){
    sec[estado]=1;
    estado++;
    delay(500);
  }
   if(digitalRead(pulsaC)){
    sec[estado]=2;
    estado++;
    delay(500);
  }
  if(estado==4){
    if((sec[0]==clave[0])&&(sec[1]==clave[1])&&(sec[2]==clave[2])&&(sec[3]==clave[3])){
      digitalWrite(ledOK,HIGH);
      delay(1500);
      intentosRestantes=3;
    }
    else {
      intentosRestantes--;
      digitalWrite(ledERR,HIGH);
      delay(1500);
    }
    digitalWrite(ledOK,LOW);
    digitalWrite(ledERR,LOW);
    estado=0;
  } 
  if(intentosRestantes==0){
    digitalWrite(ledOK,HIGH);
    digitalWrite(ledERR,HIGH);
    delay(12000);
    digitalWrite(ledOK,LOW);
    digitalWrite(ledERR,LOW);
    intentosRestantes=3;
  }
}  
