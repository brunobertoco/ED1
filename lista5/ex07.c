#include <stdio.h>

int main(){
    int a=0,v[4],menor=0,maior=0;
    float media;

    printf("<< Normalizando as notas >>\n");
    while (a<5)  {
        printf("Entre com a nota do aluno %d: ",a+1);
        scanf("%d",&v[a]);
        if(a==0){maior=v[a];menor=v[a];}
        if(v[a]>maior){
            maior=v[a];
        }
        else{
            if(v[a]<menor){
                menor=v[a];
            }
         }
        a++;
    }

    a=0;

    printf("\nNotas normalizadas\n");
    while(a<5){
        printf("\nA nota do aluno %d é %d", a+1,((v[a]*100)/maior));
        a++;
    }

    return 0;
}

/*
Elabore um algoritmo para normalizar as notas de uma turma de 5 alunos.
A maior nota deve virar 100 e as demais devem ser modificadas 
proporcionalmente (pense em regra de três).

Exemplo de Saída
<< Normalizando as notas >>
Entre com a nota do aluno 1: 16
Entre com a nota do aluno 2: 20
Entre com a nota do aluno 3: 30
Entre com a nota do aluno 4: 45
Entre com a nota do aluno 5: 50

Notas normalizadas

A nota do aluno 1 é 32
A nota do aluno 2 é 40
A nota do aluno 3 é 60
A nota do aluno 4 é 90
A nota do aluno 5 é 100
*/