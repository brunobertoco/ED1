#include <stdio.h>

int main(){

int bit,i,b,bit1,num,dec,a,bin;

printf("<< Conversor binário-decimal >> \nEntre com o número de bits: ");
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
printf("O número binário %d em decimal é %d",num,dec);

return 0;
}
