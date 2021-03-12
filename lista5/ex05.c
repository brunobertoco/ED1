#include <stdio.h>

int main(){
    int a=0,v[4];

    printf("<< Five Values >>\n");
    while (a<5)  {
        printf("Input #%d: ",a+1);
        scanf("%d",&v[a]);
        a++;
    }
    printf("The numbers entered are: %d %d %d %d %d",v[0],v[1],v[2],v[3],v[4]);
    if(v[0]>=v[1] && v[0]>=v[2] && v[0]>=v[3] && v[0]>=v[4] && v[0]>=v[5]){
        printf("Max. Value: %d",v[0]);
    }
    else if(v[1]>=v[0] && v[1]>=v[2] && v[1]>=v[3] && v[1]>=v[4] && v[1]>=v[5]){
        printf("Max. Value: %d",v[1]);
    }
    else if(v[2]>=v[0] && v[2]>=v[1] && v[2]>=v[3] && v[2]>=v[4] && v[2]>=v[5]){
        printf("Max. Value: %d",v[2]);
    }
    else if(v[3]>=v[0] && v[3]>=v[1] && v[3]>=v[2] && v[3]>=v[4] && v[3]>=v[5]){
        printf("Max. Value: %d",v[3]);
    }
    else if(v[4]>=v[0] && v[4]>=v[1] && v[4]>=v[2] && v[4]>=v[3] && v[4]>=v[5]){
        printf("Max. Value: %d",v[4]);
    }
    else if(v[5]>=v[0] && v[5]>=v[1] && v[5]>=v[2] && v[5]>=v[3] && v[5]>=v[4]){
        printf("Max. Value: %d",v[5]);
    }

    if(v[0]<=v[1] && v[0]<=v[2] && v[0]<=v[3] && v[0]<=v[4] && v[0]<=v[5]){
        printf("Max. Value: %d",v[0]);
    }
    else if(v[1]<=v[0] && v[1]<=v[2] && v[1]<=v[3] && v[1]<=v[4] && v[1]<=v[5]){
        printf("Max. Value: %d",v[1]);
    }
    else if(v[2]<=v[0] && v[2]<=v[1] && v[2]<=v[3] && v[2]<=v[4] && v[2]<=v[5]){
        printf("Max. Value: %d",v[2]);
    }
    else if(v[3]<=v[0] && v[3]<=v[1] && v[3]<=v[2] && v[3]<=v[4] && v[3]<=v[5]){
        printf("Max. Value: %d",v[3]);
    }
    else if(v[4]<=v[0] && v[4]<=v[1] && v[4]<=v[2] && v[4]<=v[3] && v[4]<=v[5]){
        printf("Max. Value: %d",v[4]);
    }
    else if(v[5]<=v[0] && v[5]<=v[1] && v[5]<=v[2] && v[5]<=v[3] && v[5]<=v[4]){
        printf("Max. Value: %d",v[5]);
    }


    return 0;
}


/*
Fazer um programa para ler 5 valores, e, em seguida, mostrar todos os valores
lidos juntamente com o maior (Max), o menor (Min) e a média (Mean) dos valores

Exemplo de saída:
<< Five Values >>
Input #1: 5
Input #2: 6
Input #3: 4
Input #4: 0
Input #5: 3

The numbers entered are: 5 6 4 0 3
Max. Value: 6
Min. Value: 0
Mean: 3.6
*/