#include <stdio.h>


int main(){

int i;

printf("<< Contagem regressiva >>\nQual � o n�mero inicial? ");
scanf("%d",&i);

for(;i<=0;i++){
printf("%d..",i);
}
printf("FIM!");

return 0;
}
