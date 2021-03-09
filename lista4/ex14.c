#include <stdio.h>

int main(){

int p,p1,i;

printf("<< Números primos >> \nEntre com o valor: ");
scanf("%d",&p);

for(i=2;i<=p/2;i++){
    if(p%i == 0){
        p1++;
    }
}
if(p1==0)
    printf("O número %d é primo",p);
else
    printf("O número %d não é primo",p);


return 0;
}
