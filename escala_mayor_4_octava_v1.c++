/*
Pontificia Universidad Javeriana
Daniel Andrés Pineda Suárez
Escala Mayor en CUARTA OCTAVA
Diseño de Sistemas con procesadores
*/
 
int pinbuzzer = 7;
 
int cantnotas = 8;
/* Notas en cifrado 
  Americano     C    D    E    F    G   A    B    C
*/
int notas[] = {261, 294, 330, 349, 392, 440, 493, 523};
/*
  La escala MAYOR va de la siguiente manera:
   Tono, Tono, Semitono, Tono, Tono, Tono
 */
void setup()
{
  for (int x = 0; x < cantnotas; x++)
  {
    tone(pinbuzzer, notas[x]);
    delay(1000);
  }
    noTone(pinbuzzer);
    delay(500);
}
 
void loop()
{
}