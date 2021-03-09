#include <stdio.h>

int main(){

float x1,x2,x3,x4,media;
printf("<<Média aritmética>>\nDigite a 1a nota: ");
scanf("%f",&x1);
printf("Digite a 2a nota: ");
scanf("%f",&x2);
printf("Digite a 3a nota: ");
scanf("%f",&x3);
printf("Digite a 4a nota: ");
scanf("%f",&x4);

media = (x1+x2+x3+x4)/4;

printf("===Notas===\nNota1: %.2f; Nota 2: %.2f; Nota 3: %.2f; Nota 4: %.2f\nMédia: %.2f",x1,x2,x3,x4,media);


return 0;
}
