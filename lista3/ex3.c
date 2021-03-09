#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

int unidade;
float x,vf;

printf("<<  Valor do Produto com imposto >> \nDigite o valor do produto R$: ");
scanf("%f",&x);
printf("Digite a unidade da federação: ");
scanf("%d",&unidade);

if(unidade == 1 ){
    vf = x*1.07;
    printf("Valor final com impostos R$: %.2f",vf);
}else if(unidade == 2 ){
    vf = x*1.12;
    printf("Valor final com impostos R$: %.2f",vf);
}else if(unidade == 3 ){
    vf = x*1.15;
    printf("Valor final com impostos R$: %.2f",vf);
}else if(unidade == 4 ){
    vf = x*1.08;
    printf("Valor final com impostos R$: %.2f",vf);
}
return 0;
}
