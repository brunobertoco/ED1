#include <stdio.h>
#include <stdlib.h>

int main(){

float x1,x2,media;
char letra[1];

printf("<< C�lculo da M�dia >> \nDigite o nome do aluno: ");
//scanf("%s",letra);
gets(letra);
printf("Digite a nota da prova 1: ");
scanf("%f",&x1);
printf("Digite a nota da prova 2: ");
scanf("%f",&x2);

media = (x1+x2)/2;

printf("A nota m�dia do aluno %s � %.2f",letra,media);


return 0;
}
