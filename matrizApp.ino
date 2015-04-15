#include <Matriz.h>
Matriz matriz(6, 9, 5);

int incomingByte;
int unidad=0;
int decena=0;

void setup(){
  Serial.begin(9600);
}
void loop(){
  while (incomingByte < 1) { //Si recibe datos,
    incomingByte = Serial.read(); //Acumula el último byte en incomingByte
    matriz.printMatrix();
  }
  while (decena < 1) { //Si recibe datos,
    decena=Serial.read();
  }
  while (unidad < 1) {
    unidad=Serial.read();
  }

  if(incomingByte == 'e'){
    matriz.newPixel(decena-48, unidad-48);
  }
  if(incomingByte == 'a'){
    matriz.deletePixel(decena-48, unidad-48);
  }
  incomingByte=0;
  unidad=0;
  decena=0;
}





