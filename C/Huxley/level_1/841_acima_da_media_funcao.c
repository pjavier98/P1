#include <stdio.h>

float media(float x,float y, float z, float med, float resultado) {
  med = ((x+y+z)/3);

  if(med<x) {
    resultado++; //resultado=resultado+1
  }
  if(med<y) {
    resultado++;
  }
  if(med<z) {
    resultado++;
  }
  printf("%.f\n",resultado);
}

int main () {
  float x,y,z,med,resultado;
  scanf("%f%f%f",&x,&y,&z);
  media(x,y,z,med,resultado);
  return 0;
}
