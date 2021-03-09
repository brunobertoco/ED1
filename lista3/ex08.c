#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

double A,B,C,d,e,f,g;

printf("Digite os 3 numeros da equacao: \n");
printf("A =  ");
scanf("%lf",&A);
printf("B =  ");
scanf("%lf",&B);
printf("C =  ");
scanf("%lf",&C);

d=(B*B)-(4*A*C);
e=pow(d,.5);

if(d<0){
    d = d*-1;
    f = (B*-1)/(2*A);
    g = (sqrt(d)/(2*A));
    printf("Raizes complexas sao: \nRaiz 1 = %.4lf+%.4lfi \nRaiz 2 = %.4lf - %.4lfi",f,g,f,g);
}
else{
    f=(-B+e)/(2*A);
    g=(-B-e)/(2*A);
    printf ("Raiz 1 = %.4lf\n",f);
    printf ("Raiz 2 = %.4lf\n",g);
}



return 0;
}
