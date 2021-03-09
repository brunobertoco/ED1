#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

float a, b, c, x;
printf("Digite os tres valores dos lados do triangulo: ");
scanf("%f %f %f", &a, &b, &c);
if (a < b){
        x = a;
        a = b;
        b = x;
    }
if (b < c){
        x = b;
        b = c;
        c = x;
    }
if (a < b){
        x = a;
        a = b;
        b = x;
    }
if (a >= b + c)
        printf("Nenhum triangulo formado\n");
else if (a * a == b * b + c * c)
        printf("Triangulo retangulo\n");
else if (a * a > b * b + c * c)
        printf("Triangulo obtusângulo\n");
else if (a * a < b * b + c * c)
        printf("Triangulo acutângulo \n");
else if (a < 0 || b < 0 || c < 0)
        printf("Numero negativo encontrado");

return 0;
}
