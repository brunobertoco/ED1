#include <stdio.h>

int main(){

float x1,x2,media;
printf("<< C�lculo da M�dia >>\nDigite a nota da prova 1: ");
scanf("%f",&x1);
printf("Digite a nota da prova 2:  ");
scanf("%f",&x2);

media = (x1+x2)/2;

printf("A nota m�dia � %.2f",media);


return 0;
}
