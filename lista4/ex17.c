#include <stdio.h>

int main(){

int i;
char a,b;

printf("<<Forca de uma letra s�>> \nQual a letra? ");
setbuf(stdin,NULL);
scanf("%c",&a);

for(b='q',i=4;b!=a;i--){
    printf("Errado! Voc� tem mais %d chances\n",i);
    printf("Qual a letra? ");
    setbuf(stdin,NULL);
    scanf("%c",&a);
    if(i==0)
        printf("Acabaram suas chances. A letra correta � 'q'");
}
printf("ACERTOU!");

return 0;
}
