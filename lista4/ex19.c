#include <stdio.h>

int main(){

int anos,mes;
float x,y,p1,p2;

for(x=50000,y=25000,mes=1;y<x;mes++){
    x=x+800;
    printf("Jose %d mes: %.2f\n",mes,x);
    y=y+3000;
    printf("Carlos %d mes: %.2f\n",mes,y);
}
anos=mes/12;

printf("Carlos levara %d anos para ficar com mais dinheiro que Jose", anos);

return 0;
}
