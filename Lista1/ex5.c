#include <stdio.h>
#include <math.h>

int main(){

float x, aumento;

printf("<< Aumento Salarial>>\nDigite o valor do sal�rio R$: ");
scanf("%f",&x);
aumento=x;
printf("Ap�s 25 de aumento o sal�rio fica em R$ %.2f",aumento*1.25);


return 0;

}
