#include <stdio.h>

int main(){

int p,p1,i;

printf("<< N�meros primos >> \nEntre com o valor: ");
scanf("%d",&p);

for(i=2;i<=p/2;i++){
    if(p%i == 0){
        p1++;
    }
}
if(p1==0)
    printf("O n�mero %d � primo",p);
else
    printf("O n�mero %d n�o � primo",p);


return 0;
}
