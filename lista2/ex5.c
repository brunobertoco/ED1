#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int x1,x2,x3,x4,deci;

printf("== Conversor de n�meros bin�rios == \nDigite o 1o. bit: ");
scanf("%d",&x1);
printf("Digite o 2o. bit: ");
scanf("%d",&x2);
printf("Digite o 3o. bit: ");
scanf("%d",&x3);
printf("Digite o 4o. bit: ");
scanf("%d",&x4);

deci = (((pow(2,0))*x4)+((pow(2,1))*x3)+((pow(2,2))*x2)+((pow(2,3))*x1));

printf("O n�mero bin�rio %d%d%d%d corresponde ao n�mero decimal %d",x1,x2,x3,x4,deci);

return 0;
}
