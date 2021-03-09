#include <stdio.h>

int main(){

double x,quadrado;
printf("<< C�lculo da Quadrado de n>>\nDigite um n�mero: ");

scanf("%lf",&x);

quadrado = x*x;

printf("O valor de %.4lf ao quadrado � %.4lf",x,quadrado);


return 0;
}
