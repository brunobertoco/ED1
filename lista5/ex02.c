#include <stdio.h>

int main(){
    
    int a=0,v[5];

    printf("<< Listando um vetor >>\n");
    while (a<6)  {
        printf("Entre com o numero %d: ",a+1);
        scanf("%d",&v[a]);
        a++;
    }
    printf("Os valores lidos sao: %d %d %d %d %d %d",v[0],v[1],v[2],v[3],v[4],v[5]);

    return 0;
}

/*
Crie um programa que lê 6 valores inteiros e em seguida mostra na tela os 
valores lidos. Utilize loops e utilize vetores para armazenar os números.
(pense qual o melhor loop: for, while ou do-while)
 
Exemplo de saída:
<< Listando um vetor >>
Entre com o numero 1: 5
Entre com o numero 2: 6
Entre com o numero 3: 4
Entre com o numero 4: 0
Entre com o numero 5: 3
Entre com o numero 6: 6

Os valores lidos sao: 5 6 4 0 3 6
*/
