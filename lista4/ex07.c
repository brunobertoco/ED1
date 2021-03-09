#include <stdio.h>


int main(){

int i;

printf("<< Contagem progressiva até 0>>\nQual é o número inicial? ");
scanf("%d",&i);

while(i<=0){
printf("%d..",i);
i++;
}
printf("FIM!");

return 0;
}
