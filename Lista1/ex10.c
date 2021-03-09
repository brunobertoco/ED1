#include <stdio.h>
#include <math.h>

int main(){

float x1, x2,x3,aposta,premio,y1,y2,y3;

printf("<< Loteria >>Bolão jogador 1 R$: ");
scanf("%f",&x1);
printf("Bolão jogador 2 R$: ");
scanf("%f",&x2);
printf("Bolão jogador 3 R$: ");
scanf("%f",&x3);
printf("Informe o valor do prêmio: ");
scanf("%f",&premio);

aposta = x1+x2+x3;

y1 = (premio)*(x1/aposta);
y2 = (premio)*(x2/aposta);
y3 = (premio)*(x3/aposta);


printf("Jogador 1 receberá R$: %.2f\n",y1 );
printf("Jogador 2 receberá R$: %.2f\n",y2 );
printf("Jogador 3 receberá R$: %.2f",y3 );

return 0;

}
