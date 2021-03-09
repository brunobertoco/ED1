#include <stdio.h>


int main(){

int i,a=1,num=0;

printf("<< Soma de n valores naturais >>\nQuantos números deseja somar? ");
scanf("%d",&i);

while(a<=i){
num = num + a;
a++;
}
printf("A soma dos %d primeiros números naturais é : %d",i,num);

return 0;
}
