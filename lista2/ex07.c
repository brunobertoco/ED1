#include <stdio.h>
#include <stdlib.h>

int main(){

int a,b,a1,b1;

printf("== Operadores Booleanos ==\nDigite 0 para falso e não 0 para verdadeiro\nEntre com o primeiro valor (A): ");
scanf("%d",&a);
printf("Entre com o segundo valor (B): ");
scanf("%d",&b);

if(a != 0 && b != 0){
    printf("A and B: 1\n");
    printf("A or B: 1\n");
    printf("A xor B: 0\n");
    printf("not A: 0\n");
}
if(a!=0 && b == 0){
    printf("A and B: 0\n");
    printf("A or B: 1\n");
    printf("A xor B: 1\n");
    printf("not A: 0\n");
}
if(a == 0 && b != 0){
    printf("A and B: 0\n");
    printf("A or B: 1\n");
    printf("A xor B: 1\n");
    printf("not A: 1\n");
}
if(a == 0 && b == 0){
    printf("A and B: 0\n");
    printf("A or B: 0\n");
    printf("A xor B: 0\n");
    printf("not A: 1\n");
}

return 0;
}
