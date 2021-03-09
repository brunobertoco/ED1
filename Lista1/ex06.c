#include <stdio.h>
#include <math.h>

int main(){

float total, pri,seg,ter;

printf("<< Loteria >>\nValor total do prêmio: ");
scanf("%f",&total);
pri = (total*46)/100;
seg = (total*32)/100;
ter = total - pri - seg;
printf("Primeiro vencedor: %.2f\n",pri );
printf("Segundo vencedor: %.2f\n",seg );
printf("Terceiro vencedor: %.2f",ter );

return 0;

}
