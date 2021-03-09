#include <stdio.h>

//Tem que ser alterado o tipo de dado usado, pois a faixa de valores a partir do fatorial 13
// nao é correspondente a faixa de valores do tipo int, por isso deve-se usar o double.

int main(){

double fat=1,n=1,c;

for(c=11,fat=1;c<=15;c++){
    for(n = c; n >= 1; n--){
        fat = fat*n;
    }
    printf("%.0lf! = %.0lf \n",c,fat);
    fat=1;
}
return 0;
}
