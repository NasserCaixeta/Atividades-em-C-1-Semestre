#include <math.h>
#include <stdio.h>
int main(){
int  anos_em_dias, meses_em_dias,anos_pessoa, meses_pessoa, anos_pessoa_dias, meses_pessoa_dias, dias_finais;
meses_em_dias = 30;
anos_em_dias = 365;
anos_pessoa = 30;
meses_pessoa = 11;
anos_pessoa_dias = anos_pessoa * anos_em_dias;
meses_pessoa_dias = meses_pessoa * meses_em_dias;
dias_finais = anos_pessoa_dias + meses_pessoa_dias;
printf("%s", "Seus dias de vida foram: ");
printf("%d", dias_finais);


return 0;





  
}