#include <stdio.h> 
int main(){
float icms = 0.017f;
float cofins = 0.76f;
float pis_pasep = 0.165f;
float preco_inicial = 4.5f;

float preco_final = (1 + icms + cofins + pis_pasep * preco_inicial);
printf("%s", "O preço final com os impostos fica:");
printf("%f", preco_final);

  return 0;
}