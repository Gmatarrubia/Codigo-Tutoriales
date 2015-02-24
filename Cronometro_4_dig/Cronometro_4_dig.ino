/*
************************************************************************
Programa para hacer un cronónmetro con un 7 segmentos de 4 digitos.
1 digito para minutos,2 digitos para segundos y 1 dígito para centesimas
de segundo. 
Con un pulsador controlamos el start/stop y con otro, resetearemos el 
tiempo acumulado.
*************************************************************************
*/
#define dig4 0
#define dig3 1
#define dig2 2
#define dig1 3
#define segA 4
#define segB 5
#define segC 10
#define segD 8
#define segE 9
#define segF 6
#define segG 7
#define dot 11
#define start 12
#define reset 13

void setup () {
  //Configuramos los pines de selección de dígito
  //como salidas
  pinMode(dig4,OUTPUT);  pinMode(dig3,OUTPUT);
  pinMode(dig2,OUTPUT);  pinMode(dig1,OUTPUT);
  
  //También son salidas los pines de selección de
  //cada segmento del cada dígito
  pinMode(segA,OUTPUT);  pinMode(segB,OUTPUT);
  pinMode(segC,OUTPUT);  pinMode(segD,OUTPUT);
  pinMode(segE,OUTPUT);  pinMode(segF,OUTPUT);
  pinMode(segG,OUTPUT);  pinMode(dot,OUTPUT);
  
  //Configuramos como entradas nuestros dos pulsadores
  pinMode(start,INPUT);
  pinMode(reset,INPUT);
}

//****Variables Globales******
long Tparcial =0;
long tiempo = 0;
bool pause=false;

void loop () {
  //Bucle que va cambiando el pin que queremos colorear
  //hace el barrido muy rápido, tanto que no nos dará tiempo
  //A ver solo un dígito encendido, veremos los cuatro encendidos
  //a la vez.
    for(int i=3; i>=0; i--) {
      digitalWrite(0,HIGH);
      digitalWrite(1,HIGH);
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(i,LOW);
      
      //Bucle para hacer varias pasadas por cada dígito y así evitar
      //problemas de refresco rápido y de parpadeos
      for(int p=0; p<25; p++){
        if(digitalRead(reset))Tparcial=millis();
        if(digitalRead(start)){pause=!pause; borrar();delay(200);}
        if(pause)Tparcial=millis()-tiempo;
        
        //Si llega al número más alto que puede cronometrar, empieza
        //la cuenta desde cero.
        if(tiempo>600000)Tparcial=millis();
       
        //Cargamos el tiempo y lo modificamos para dividirlo en las
        //diferentes cifras y unidades. Además le aplicamos el efecto
        //Del start/stop y del Reseteo
        tiempo = millis()-Tparcial;
        int centesimas = (tiempo/100)%10;
        int segundos = (tiempo/1000)%60;
        int minutos = (tiempo/1000)/60;
        
        //Escritura del número cargado en el dígito correspondiente.
       //Además añadimos los puntos para distinguir unidades
        switch(i){
          case 3: escribeNum(centesimas); break;
          case 2: escribeNum(segundos%10);
                  digitalWrite(dot,HIGH);
                  break;
          case 1: escribeNum(segundos/10); break;
          case 0: escribeNum(minutos);
                  digitalWrite(dot,HIGH); 
                  break;
        }
      }
      //Entre cifra y cifra hacemos un borrado para evitar segmentos
      //medio encendidos debido a la rápida evolución de la selección
      //de los dígitos
      borrar();
   }
}

//Nuestra función encargada de llamar a unas subfuenciones que pondrán
//configurarán cada número en el display de manera que coincida con el
//valor del numero que le pasamos.
void escribeNum (int num){
  switch(num){
    case 0: cero(); break;
    case 1: uno(); break;
    case 2: dos(); break;
    case 3: tres(); break;
    case 4: cuatro(); break;
    case 5: cinco(); break;
    case 6: seis(); break;
    case 7: siete(); break;
    case 8: ocho(); break;
    case 9: nueve(); break;
  }
}
