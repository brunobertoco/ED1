#include <stdio.h>

int main(){
    int vd,az,ama,vm;
    float total;

    printf("<< Probabilidades >>\n");
    printf("Digite a quantidade de bolinhas\n");
    printf("Verde: ");
    scanf("%d",&vd);
    printf("Azul: ");
    scanf("%d",&az);
    printf("Amarela: ");
    scanf("%d",&ama);
    printf("Vermelha: ");
    scanf("%d",&vm);

    total = vd+az+ama+vm;

    if(vd>=az && vd>=ama && vd>=vm){
    printf("Probabilidades\n");
    printf("Verde: %.1f <<maior probabilidade",(vd/total)*100);
    printf("\nAzul: %.1f",(az/total)*100);
    printf("\nAmarela: %.1f",(ama/total)*100);
    printf("\nVermelha: %.1f",(vm/total)*100);
    }
    else if(az>=vd && az>ama && az>vm){
    printf("Probabilidades\n");
    printf("Verde: %.1f ",(vd/total)*100);
    printf("\nAzul: %.1f <<maior probabilidade",(az/total)*100);
    printf("\nAmarela: %.1f",(ama/total)*100);
    printf("\nVermelha: %.1f",(vm/total)*100);
    }
    else if(ama>vd && ama>az && ama>vm){
    printf("Probabilidades\n");
    printf("Verde: %.1f ",(vd/total)*100);
    printf("\nAzul: %.1f",(az/total)*100);
    printf("\nAmarela: %.1f <<maior probabilidade",(ama/total)*100);
    printf("\nVermelha: %.1f",(vm/total)*100);
    }
    else if(vm>vd && vm>az && vm>ama){
    printf("Probabilidades\n");
    printf("Verde: %.1f ",(vd/total)*100);
    printf("\nAzul: %.1f",(az/total)*100);
    printf("\nAmarela: %.1f",(ama/total)*100);
    printf("\nVermelha: %.1f <<maior probabilidade",(vm/total)*100);
    }

    return 0;
}

/*
Uma piscina de bolinhas possui bolas azuis, verdes, amarelas e vermelhas. 
Faça um programa em que o usuário digita a quantidade de bolinhas de cada
cor existente em uma piscina e mostra a probabilidade de ocorrência de cada 
cor, indicando qual possui a maior probabilidade

Exemplo de saída:
<< Probabilidades >>

Digite a quantidade de bolinhas
Verde: 51
Azul: 60
Amarela: 70
Vermelha: 80

Probabilidades
Verde: 19.5%
Azul: 22.9%
Amarela: 26.8%
Vermelha: 30.6% << Maior probabilidade
*/