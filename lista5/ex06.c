#include <stdio.h>

int main(){
    int a=0,menor=0,maior=0,pos1,pos2;
    float media,v[4];

    printf("<< Five Values >>\n");
    while (a<5)  {
        printf("Input #%d: ",a+1);
        scanf("%f",&v[a]);
        if(a==0){maior=v[a];menor=v[a];}
        if(v[a]>maior){
            maior=v[a];
            pos1 = a;
        }
        else{
            if(v[a]<menor){
                menor=v[a];
                pos2 = a;
            }
         }
        a++;
    }

    printf("The numbers entered are: %.0f %.0f %.0f %.0f %.0f\n",v[0],v[1],v[2],v[3],v[4]);
    printf("Max. Value: %d, index %d of the array\n", maior,pos1);
    printf("Min. Value: %d, index %d of the array\n", menor,pos2);
    media = (v[0]+v[1]+v[2]+v[3]+v[4])/5;
    printf("Mean: %.2f\n", media);

    return 0;
}


/*
Fazer um programa para ler 5 valores, e, em seguida, mostrar todos os valores
lidos juntamente com o maior (Max), o menor (Min) e a média (Mean) dos valores
Mostrar o índice (index) do vetor associado ao maior número e ao menor número 

Exemplo de saída:
<< Five Values with index >>
Input #1: 5
Input #2: 6
Input #3: 4
Input #4: 0
Input #5: 3

The numbers entered are: 5 6 4 0 3
Max. Value: 6, index 1 of the array
Min. Value: 0, index 3 of the array
Mean: 3.6
*/