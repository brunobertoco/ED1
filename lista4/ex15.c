#include <stdio.h>

int main(){

int bit,i,b,bit1,num,dec,a,bin;

printf("<< Conversor bin�rio-decimal >> \nEntre com o n�mero de bits: ");
scanf("%d",&bit);

for(i=1,num=0,bit1=bit-1;i<=bit;i++,bit1--){
    printf("Digite o bit # %i: ",i);
    scanf("%d",&b);
    num = num + (b*(pow(10,bit1)));
}
bin = num;
for(a=0,dec=0; bin > 0; a++){
    dec = dec + pow(2, a)*(bin % 10);
    bin = bin / 10;
}
printf("O n�mero bin�rio %d em decimal � %d",num,dec);

return 0;
}
