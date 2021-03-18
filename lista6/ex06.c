#include <stdio.h>

int main(){

char nome[50],nome2[50]; 
char c;
int i, pos,a,b; 
pos = 0;

printf("Digite um nome: ");
c = getchar();
while (c != '\n') {  
    nome[pos] = c;
    pos++;
    c = getchar();
    }
printf("Nome: ");
for (i=0; i < pos; i++){
        printf("%c",nome[i]);
        if(nome[i]==' '){
            for (a=i,b=i; a < pos; a++,i++){
                nome2[a]=nome[a];
           }
        }
}
printf("\nSobrenome:");
for(; b < pos; b++){
    printf("%c",nome2[b]);
}

return 0;
}
