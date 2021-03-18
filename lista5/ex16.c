#include <stdio.h>

int main(){
    int v[8],aux,n,i;
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
    printf("Valores repetidos:\n");

    n = 1; 
    for(i =1; i<8; i++){ 
        if(v[i] == v[i-1]){ 
            n++;
        }
        else { 
            if(n>1){
                printf("%d aparece %d vezes\n", v[i-1], n);
            }
            n = 1;
        }
    }
    if(n>1){
        printf("%d aparece %d vezes\n", v[i-1], n);
    }

    return 0;
}

/*

Faça um programa que leia um vetor de 8 posições e verifique se existem 
valores iguais e os escreva a quantidade de vezes que eles aparecem na lista

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


Valores repetidos: 
5 aparece 2 vezes
6 aparece 2 vezes
-3 aparece 3 vezes

*/