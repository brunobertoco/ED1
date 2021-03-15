#include <stdio.h>

int main(){
    int a=0,v[5],v1[5],v2[5],p=0,i=0;
    printf("<< Pares e Ímpares >>\n");

    for(a=0;a<5;a++){
        printf("Digite o valor %d: ",a+1);
        scanf("%d", &v[a]);

        if(v[a]%2==0){
            v2[p]=v[a];
            p++;
        }
        else{
            v1[i]=v[a];
            i++;
        }
    }
    printf("\nImpares: ");
    for(a=0;a<i;a++){
        printf("%d, ",v1[a]);
    }

    printf("\nPares: ");
    for(a=0;a<p;a++){
        printf("%d, ",v2[a]);
    }

    return 0;
}

/*
Leia 5 números inteiros e armazene em um vetor v. Crie dois novos vetores v1 e v2. Copie os valores ímpares de v para v1, e os valores pares de v para v2. Note que cada um dos vetores v1 e v2 tem no máximo 5 elementos, mas nem todos os elementos são utilizados. No final escreva os elementos UTILIZADOS de v1 e v2.
Exemplo de saída:
<< Pares e Ímpares >>
Digite o valor 1: 51
Digite o valor 2: 60
Digite o valor 3: 70
Digite o valor 4: 80
Digite o valor 5: 60

Ímpares: 51
Pares: 60, 70, 80, 60
*/
