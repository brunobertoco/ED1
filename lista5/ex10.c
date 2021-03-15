#include <stdio.h>

int main(){
    int v1[3],v2[3],v3[3],i;
    printf("<< Subtracao de vetores >>\n");
    for(i=0;i<3;i++){
        printf("Digite o valor de %d de A: ",i+1);
        scanf("%d",&v1[i]);
    } 
    printf("\n");
    for(i=0;i<3;i++){
        printf("Digite o valor de %d de B: ",i+1);
        scanf("%d",&v2[i]);
    }
    printf("\nO vetor C, definido como C = A-B:  ");
    for(i=0;i<3;i++){
        v3[i]=v1[i]-v2[i];
    }
    printf("(%d, %d, %d)",v3[0],v3[1],v3[2]);
    return 0;
}

/*
Faça um programa que receba do usuário dois arrays  A e B, com 3 números inteiros cada. Crie um novo array C calculando C = A - B. Mostre na tela os dados do array C.

Exemplo de saída:
<< Subtracao de vetores >>
Digite o valor 1 de A: 50
Digite o valor 2 de A: 60
Digite o valor 3 de A: 70

Digite o valor 1 de B: 30
Digite o valor 2 de B: 0
Digite o valor 3 de B: -10

O vetor C, definido como C = A-B:  (20, 60, 80)
*/
