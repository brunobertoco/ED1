#include <stdio.h>
#include <stdlib.h>

int main(){

int a,b,a1,b1;

printf("== Operadores Booleanos ==\nDigite 0 para falso e não 0 para verdadeiro\nEntre com o primeiro valor (A): ");
scanf("%d",&a);
printf("Entre com o segundo valor (B): ");
scanf("%d",&b);

if(a != 0 && b != 0){
    printf("A and B: VERDADEIRO\n");
    printf("A or B: VERDADEIRO\n");
    printf("A xor B: FALSO\n");
    printf("not A: FALSO\n");
}
if(a!=0 && b == 0){
    printf("A and B: FALSO\n");
    printf("A or B: VERDADEIRO\n");
    printf("A xor B: VERDADEIRO\n");
    printf("not A: FALSO\n");
}
if(a == 0 && b != 0){
    printf("A and B: FALSO\n");
    printf("A or B: VERDADEIRO\n");
    printf("A xor B: VERDADEIRO\n");
    printf("not A: VERDADEIRO\n");
}
if(a == 0 && b == 0){
    printf("A and B: FALSO\n");
    printf("A or B: FALSO\n");
    printf("A xor B: FALSO\n");
    printf("not A: VERDADEIRO\n");
}

return 0;
}
