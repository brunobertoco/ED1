#include <stdio.h>

int main(){

float x1,x2,media;
printf("<< Cálculo da Média >>\nDigite a nota da prova 1: ");
scanf("%f",&x1);
printf("Digite a nota da prova 2:  ");
scanf("%f",&x2);

media = (x1+x2)/2;

printf("A nota média é %.2f",media);


return 0;
}
