#include <stdio.h>


int main(){

int i,a=1,num=0;

printf("<< Soma de n valores naturais >>\nQuantos n�meros deseja somar? ");
scanf("%d",&i);

while(a<=i){
num = num + a;
a++;
}
printf("A soma dos %d primeiros n�meros naturais � : %d",i,num);

return 0;
}
