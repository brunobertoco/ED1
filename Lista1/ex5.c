#include <stdio.h>
#include <math.h>

int main(){

float x, aumento;

printf("<< Aumento Salarial>>\nDigite o valor do salário R$: ");
scanf("%f",&x);
aumento=x;
printf("Após 25 de aumento o salário fica em R$ %.2f",aumento*1.25);


return 0;

}
