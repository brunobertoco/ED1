#include <stdio.h>
#include <stdlib.h>

int main(){

float x1,x2,x3,media;
char letra[1];

printf("<< Cálculo da Média >> \nDigite o nome do aluno: ");
setbuf(stdin,NULL);
scanf("%c",&letra);
printf("Digite a nota da prova 1: ");
scanf("%f",&x1);
printf("Digite a nota da prova 2: ");
scanf("%f",&x2);
printf("Digite a nota da prova 3: ");
scanf("%f",&x3);


media = ((x1*1)+(x2*1)+(x3*2))/(1+1+2);
if (media>=60)
    printf("A nota média do aluno %s é %.2f=>ARPOVADO!",letra,media);
else
    printf("A nota média do aluno %s é %.2f=>REPROVADO!",letra,media);

return 0;
}
