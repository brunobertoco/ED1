#include <stdio.h>

int main(){

char nome[50]; 
char c;
int i, pos; 
pos = 0;

printf("Digite um nome: ");
c = getchar(); 
while (c != '\n') {  
    nome[pos] = c;
    pos++;
    c = getchar();
    }
printf("O nome digitado e: ");
for (i=0; i < pos; i++){
    if(nome[i]>97){
        printf("%c", nome[i]-32);
    }
    else
        printf("%c",nome[i]);
}

return 0;
}
