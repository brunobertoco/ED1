#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

float x,temp;
printf("<< Conversor Temperatura>>Digite a temperatura (em Celsius): ");

scanf("%f",&x);

temp = (x*(9.0/5.0))+32;

printf("%.2f graus Celsius correspondem a %.2f Fahrenheit",x,temp);


return 0;
}
