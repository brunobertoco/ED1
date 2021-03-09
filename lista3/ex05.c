#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

float massa,altura,imc;
printf("Digite sua massa: ");
scanf("%f",&massa);
printf("Digite sua altura: ");
scanf("%f",&altura);
imc = massa/(pow(altura,2));
if(imc < 18.5)
    printf("Magreza");
else if(imc >= 18.5 && imc <= 24.9)
    printf("Saudável");
else if(imc >= 25.0 && imc <= 29.9)
    printf("Sobrepeso");
else if(imc >= 30.0 && imc <= 34.9)
    printf("Obesidade Grau 1");
else if(imc >= 35.0 && imc <= 39.9)
    printf("Obesidade Grau 2(severa)");
else if(imc >= 40.0)
    printf("Obesidade Grau 2(morbida)");

return 0;
}
