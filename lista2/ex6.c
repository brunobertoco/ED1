#include <stdio.h>
#include <stdlib.h>

int main(){

int a,b,a1,b1;

printf("== Troca do conte�do de vari�veis == \nEntre com o valor de A: ");
scanf("%d",&a);
printf("Entre com o valor de B: ");
scanf("%d",&b);

a1 = b;
b1 = a;

printf("Ap�s a troca, o valor de A �  %d e o de B �  %d",a1,b1);

return 0;
}
