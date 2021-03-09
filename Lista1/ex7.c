#include <stdio.h>
#include <math.h>

int main(){

int dias;
float vbruto,vliqui,imposto,iss;

printf("<< Pagamento encanador >>Digite o número de dias trabalhados: ");
scanf("%d",&dias);

vbruto = 30.00*dias;
imposto = (vbruto*8)/100;
iss = (vbruto*4)/100;
vliqui = vbruto - imposto - iss;

printf("Valor bruto R$: %.2f \nValor líquido R$: %.2f \nISS R$: %.2f \nIR R$: %.2f",vbruto,vliqui,iss,imposto);


return 0;

}
