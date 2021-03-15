#include <stdio.h>
#include <math.h>

int main(){
    int a=0;
    float v[5],media,desvio;

     printf("<< Media e desvio-padrao >>\n");

     while (a<5)  {
        printf("Entre com o numero %d: ",a+1);
        scanf("%f",&v[a]);
        a++;
    }

    media = (v[0]+v[1]+v[2]+v[3]+v[4])/5;

    desvio = sqrt(((pow((v[0]-media),2)) + (pow((v[1]-media),2)) + (pow((v[2]-media),2)) + (pow((v[3]-media),2)) + (pow((v[4]-media),2)))/4);

    printf("A media eh %.2f e o desvio-padrao eh %.2f",media,desvio);
    return 0;
}

/*
Calcular a média e o desvio padrão amostral de 5 números informados pelo usuário.

deobs: desvio-padrão (amostral, normalizado por N-1)
Exemplo de saída:
<< Media e desvio-padrao >>
Digite o valor 1: 50
Digite o valor 2: 60
Digite o valor 3: 70
Digite o valor 4: 80
Digite o valor 5: 60
A media eh 64 e o desvio-padrao eh 11.40
*/
