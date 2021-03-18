#include <stdio.h>

int main(){
    int a,v[5];
    printf("<< Zerando negativos >>\n");
    while(a<5){
        printf("Entre com o numero %d: ",a+1);
        scanf("%d", &v[a]);
        if(v[a]<0)
            v[a]=0;
        a++;
    }
    printf("Negativo zerados: ");
    for(a=0;a<5;a++){
        printf("%d ",v[a]);
    }
    return 0;
}

/*
Leia um vetor de 5 posições e atribua valor 0 para todos os elementos
que possuírem valores negativos. Mostre o vetor final.

Exemplo de saída:
<< Zerando negativos >>
Entre com o numero 1: 5
Entre com o numero 2: -6
Entre com o numero 3: 4
Entre com o numero 4: 0
Entre com o numero 5: -3

Negativo zerados: 5 0 4 0 0 
*/