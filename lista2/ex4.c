#include <stdio.h>
#include <stdlib.h>

int main(){

float x1,x2,x3,p1,p2,p3,media;
char letra[1];

printf("<< Cálculo da Média >> \nDigite o nome do aluno: ");
//scanf("%s",letra);
gets(letra);
printf("Digite a nota da prova 1: ");
scanf("%f",&x1);
printf("Digite a nota da prova 2: ");
scanf("%f",&x2);
printf("Digite a nota da prova 3: ");
scanf("%f",&x3);
printf("Digite o peso da prova 1: ");
scanf("%f",&p1);
printf("Digite o peso da prova 2: ");
scanf("%f",&p2);
printf("Digite o peso da prova 3: ");
scanf("%f",&p3);


media = ((x1*p1)+(x2*p2)+(x3*p3))/(p1+p2+p3);

printf("A nota média do aluno %s é %.2f",letra,media);


return 0;
}
