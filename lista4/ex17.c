#include <stdio.h>

int main(){

int i;
char a,b;

printf("<<Forca de uma letra só>> \nQual a letra? ");
setbuf(stdin,NULL);
scanf("%c",&a);

for(b='q',i=4;b!=a;i--){
    printf("Errado! Você tem mais %d chances\n",i);
    printf("Qual a letra? ");
    setbuf(stdin,NULL);
    scanf("%c",&a);
    if(i==0)
        printf("Acabaram suas chances. A letra correta é 'q'");
}
printf("ACERTOU!");

return 0;
}
