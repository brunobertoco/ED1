#include <stdio.h>


int main(){

    int a=0,v[5];

    printf("<< Listando um vetor >>\n");
    while (a<6)  {
        printf("Entre com o numero %d: ",a+1);
        scanf("%d",&v[a]);
        a++;
    }
    printf("Os valores lidos sao: %d %d %d %d %d %d",v[5],v[4],v[3],v[2],v[1],v[0]);

    return 0;
}

/*
Faça um programa em que o usuário digita 6 números inteiros e o programa mostra
na tela os 6 números digitados na ordem inversa (obrigatório o uso de loops)

Exemplo de saída:
<< Listando um vetor em ordem inversa >>
Entre com o numero 1: 5
Entre com o numero 2: 6
Entre com o numero 3: 4
Entre com o numero 4: 0
Entre com o numero 5: 3
Entre com o numero 6: 6

A ordem inversa dos numeros eh: 6 3 0 4 6 5
*/
