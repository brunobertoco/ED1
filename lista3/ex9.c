#include <stdio.h>
#include <stdlib.h>

int main(){

float v, c;

printf("Digite o valor da venda: ");
scanf("%f",&v);

if(v>=100000){
    c = 700 + (v*0.16);
    printf("O valor da comissao � %.2f",c);
}
else if(v<100000 && v>=80000){
    c = 650 + (v*0.14);
    printf("O valor da comissao � %.2f",c);
}
else if(v<80000 && v>=60000){
    c = 600 + (v*0.14);
    printf("O valor da comissao � %.2f",c);
}
else if(v<60000 && v>=40000){
    c = 550 + (v*0.14);
    printf("O valor da comissao � %.2f",c);
}
else if(v<40000 && v>=20000){
    c = 500 + (v*0.14);
    printf("O valor da comissao � %.2f",c);
}
else if(v<20000){
    c = 400 + (v*0.14);
    printf("O valor da comissao � %.2f",c);
}

return 0;
}
