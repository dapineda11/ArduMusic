/*
Pontificia Universidad Javeriana
Diseño de Sistemas con procesadores
Daniel Andrés Pineda Suárez
*/

int altavoz = 11;  //pin salida del altavoz, el otro pin del altavoz es GND
//OCTAVA ALTA
int Si2 =1975;
int LaS2=1864;
int La2= 1760;
int SolS2=1661;
int Sol2=1567;
int FaS2=1479;
int Fa2= 1396;
int Mi2= 1318;
int ReS2=1244;
int Re2= 1174;
int DoS2=1108;
int Do2= 1046;
//OCTAVA BAJA
int Si = 987;
int LaS= 932;
int La = 880;
int SolS=830;
int Sol= 783;
int FaS= 739;
int Fa=  698;
int Mi=  659;
int ReS= 622;
int Re = 587;
int DoS =554;
int Do = 523;
//TIEMPOS
int redonda=0;
int redondap=0;
int blanca= 0;
int blancap=0;
int negra=0;  
int negrap=0;
int corchea=0;
int corcheap =0;
int semicorchea=0;
int semicorcheap=0;


int bpm= 100;

void setup(){
        pinMode(altavoz,OUTPUT);
   //definimos la relacion de tiempo entre las notas     
      negra= 60000/bpm; 
      negrap=negra*1.5;
      blanca= negra*2;
      blancap=blanca*1.5;
      redonda= negra*4;
      redondap= redonda*1.5;
      corchea= negra/2;
      corcheap=corchea*1.5;
      semicorchea= negra/4;
      semicorcheap=semicorchea*1.5;
}
void loop(){
  
//escribimos las notas con el siguiente esquema
  
 
 tone(altavoz,Do,blanca);
 delay(blanca+50); 
 tone(altavoz,Re,blanca);
 delay(blanca+50);


 
 
 delay(5000); //la cancion se repetira cada 5 segundos
}

