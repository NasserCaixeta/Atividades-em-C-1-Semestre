#include <stdio.h>
#include <math.h>
int main(){
int segundos, segundoshora, segundostotais, minutos, horas;
segundostotais = 6000;
segundoshora = 3600;
horas = (segundostotais / segundoshora);
minutos = (segundostotais - (segundoshora * horas))/ 60;
segundos = (segundostotais - (segundoshora * horas) - (minutos * 60));

printf("%u",horas);
printf("%s","hora(s) e ");
printf("%u", minutos);
printf("%s","minuto(s) e ");
printf("%u", segundos);
printf("%s", "segundo(s)");

return 0;
}