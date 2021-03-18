#include <stdio.h>

int main(){

char nome1[50],nome2[50];
char c;
int i, pos,n=0; 

pos=0;
printf("<< Compara nomes>>\n");
printf("Digite um nome 1: ");
setbuf(stdin, NULL);
c = getchar();
while (c != '\n') {  
    nome1[pos] = c;
    pos++;
    c = getchar();
}

pos=0;
printf("Digite um nome 2: ");
setbuf(stdin, NULL);
c = getchar(); 
while (c != '\n') {  
    nome2[pos] = c;
    pos++;
    c = getchar();
 }


for(i=0;i<=pos;i++){
    if(nome1[i]!=nome2[i]){
        n++;
    }
}

if(n==0){
    printf("Os nomes digitados são iguais");
}
else{
    printf("Os nomes digitados são diferentes");
}

return 0;
}
