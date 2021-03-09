#include <stdio.h>

int main(){
    int v[5];
    
    printf("<< Listando um vetor >> \nEntre com o numero 1: ");
    scanf("%d",&v[0]);
    printf("Entre com o numero 2: ");
    scanf("%d",&v[1]);
    printf("Entre com o numero 3: ");
    scanf("%d",&v[2]);
    printf("Entre com o numero 4: ");
    scanf("%d",&v[3]);
    printf("Entre com o numero 5: ");
    scanf("%d",&v[4]);
    printf("Entre com o numero 6: ");
    scanf("%d",&v[5]);

    printf("Os valores lido sao: %d %d %d %d %d %d ",v[0],v[1],v[2],v[3],v[4],v[5]);

    return 0;
}

/*
Crie um programa que lê 6 valores inteiros e em seguida mostra na tela os 
valores lidos. Não utilize loops e utilize vetores para armazenar os números.
 
Exemplo de saída:
<< Listando um vetor >>
Entre com o número 1: 5
Entre com o número 2: 6
Entre com o número 3: 4
Entre com o número 4: 0
Entre com o número 5: 3
Entre com o número 6: 6

Os valores lidos são: 5 6 4 0 3 6
*/
