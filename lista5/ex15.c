#include <stdio.h>

int main(){
    int v[8],aux;
    printf("<< Valores iguais >>\n");
    for(int i=0;i<8;i++){
        printf("Entre com o numero %d: ",i+1);
        scanf("%d",&v[i]);
    }

    
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            if(v[i]==v[j]){
                aux=v[i+1];
                v[i+1]=v[j];
                v[j]=aux;
            }
        }
    }
    aux=0;
    printf("Valores repetidos:");
    for(int i=1;i<8;i++){
        if(v[i]==v[i-1]&&aux!=v[i]){
            printf("%d ",v[i]);
            aux=v[i];
        }
    }


    return 0;
}

/*
Faça um programa que leia um vetor de 8 posições e verifique se existem 
valores iguais e os escreva (cada número repetido deve aparecer somente 
uma vez na resposta)

Exemplo de saída:
<< Valores iguais >>
Entre com o numero 1: 5
Entre com o numero 2: 6
Entre com o numero 3: 4
Entre com o numero 4: 5
Entre com o numero 5: -3 
Entre com o numero 6: -3
Entre com o numero 7: -3
Entre com o numero 8: 6


Valores repetidos: 5, 6, -3
*/