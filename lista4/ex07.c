#include <stdio.h>


int main(){

int i;

printf("<< Contagem progressiva at� 0>>\nQual � o n�mero inicial? ");
scanf("%d",&i);

while(i<=0){
printf("%d..",i);
i++;
}
printf("FIM!");

return 0;
}
