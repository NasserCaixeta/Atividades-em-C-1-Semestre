#include <stdio.h>
#include <math.h>
int main(){
double angulo , altura, distancia, val, pi;
pi = 3.1415;
val = 3.1415 / 180;
angulo = 45;
distancia = 30;
altura = sin(angulo * val) * distancia;
printf("%s", "A altura é:");
printf("%f", altura);
return 0;
}