#include <stdio.h>
#include <math.h>
int main(){
int b = 4;
int a = 1;
int c = 3;

double delta;
delta = (b * b - 4 * a * c);
if (delta < 0){
  printf("%s", "essa conta não da certo parceiro");
}
double resultado1;
resultado1 = (-b + sqrt(delta))/2 * a;
double resultado2;
resultado2 = (-b - sqrt(delta))/2 * a;

printf("%f", resultado1);
printf("%f", resultado2);



return 0;

}