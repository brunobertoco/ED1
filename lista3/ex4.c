#include <stdio.h>
#include <stdlib.h>

int main(){

float x1,x2,x3,media;
char nome1,nome2,nome3;

printf("<< Notasda Turma >>\nEntre com o nome do aluno #1: ");
setbuf(stdin,NULL);
scanf("%c",&nome1);
printf("Digite a nota do aluno 1: ");
scanf("%f",&x1);
printf("Entre com o nome do aluno #2: ");
setbuf(stdin,NULL);
scanf("%c",&nome2);
printf("Digite a nota do aluno 2: ");
scanf("%f",&x2);
printf("Entre com o nome do aluno #3: ");
setbuf(stdin,NULL);
scanf("%c",&nome3);
printf("Digite a nota do aluno 3: ");
scanf("%f",&x3);

media = ((x1*1)+(x2*1)+(x3*2))/(1+1+2);
if (x1 >= x2 && x2 >= x3)
    printf("%c tem a maior nota (%.1f) e %c a menor (%.1f)",nome1,x1,nome3,x3);
else if(x1 >= x3 && x3 >= x2)
    printf("%c tem a maior nota (%.1f) e %c a menor (%.1f)",nome1,x1,nome2,x2);
else if(x2 >= x1 && x1 >= x3)
    printf("%c tem a maior nota (%.1f) e %c a menor (%.1f)",nome2,x2,nome3,x3);
else if(x2 >= x1 && x3 >= x1)
    printf("%c tem a maior nota (%.1f) e %c a menor (%.1f)",nome2,x2,nome1,x1);
else if(x3 >= x1 && x1 >= x2)
    printf("%c tem a maior nota (%.1f) e %c a menor (%.1f)",nome3,x3,nome2,x2);
else if(x3 >= x2 && x1 >= x2)
    printf("%c tem a maior nota (%.1f) e %c a menor (%.1f)",nome3,x3,nome2,x2);

return 0;
}
