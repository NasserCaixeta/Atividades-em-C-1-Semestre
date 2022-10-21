#include <stdio.h>
#include <math.h>
int main(){
int numero, dezena, centena, milhar, unidade, numero_final, milhar_resto, centena_resto, dezena_resto;

numero = 5637;
milhar = numero / 1000;
milhar_resto = (numero % 1000);
centena = (milhar_resto / 100);
centena_resto = (milhar_resto % 100);
dezena = (centena_resto / 10);
dezena_resto = (centena_resto % 10);
unidade = (dezena_resto);



printf("%s", " Seu número é: ");
printf("%d", milhar );
printf("%s"," Em Milhar, ");
printf("%d", centena);
printf("%s", " Em centena, ");
printf("%d", dezena);
printf("%s", " Em dezena, ");
printf("%d", unidade );  
printf("%s", " Em unidade.");


}