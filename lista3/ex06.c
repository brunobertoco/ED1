#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int a, c;
float b;

printf("Digite um numero: ");
scanf("%d",&a);
b=sqrt(a);
c=b;
if(b==c){
    printf("O numero digitado é um quadrado perfeito\n");
    printf("Raiz Quadrada de %d: %.f\n",a,b);
}
else
    printf("O numero digitado nao é um quadrado perfeito\n");


return 0;
}
