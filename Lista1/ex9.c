#include <stdio.h>
#include <math.h>

int main(){

float x, y,r2,part1,part2,part3;

printf("<< Distância >> \nEntre com a coordenada x: ");
scanf("%f",&x);
printf("Entre com a coordenada y: ");
scanf("%f",&y);

part1 = pow(0-x,2);
part2 = pow(0-y,2);
part3 = part1+part2;
r2 = sqrt(part3);

printf("A distância entre os pontos (%.2f,%.2f) e (0,0)  eh %.2f",x,y,r2);

return 0;

}
