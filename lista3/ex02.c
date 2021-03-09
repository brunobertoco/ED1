#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

float x,temp;
char unidade;
printf("<< Conversor Temperatura>>\nDigite a temperatura: ");
scanf("%f",&x);
printf("Digite a unidade: ");
setbuf(stdin,NULL);
scanf("%c",&unidade);

if(unidade == 'c' ){
    temp = (x*(9.0/5.0))+32;
    printf("%.2f graus Celsius correspondem a %.2f Fahrenheit",x,temp);
}
if(unidade == 'f'){
    temp = (x-32)/1.8;
    printf("%.2f graus Fahrenheit correspondem a %.2f Celsius",x,temp);
}
else
    printf("Unidade digitada invalida");

return 0;
}
