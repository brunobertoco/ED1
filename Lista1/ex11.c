#include <stdio.h>
#include <math.h>

int main(){

float real1,real2,imag1,imag2,modz,modw;


printf("<<Numero complexo>> \nInforme a parte real de z: ");
scanf("%f",&real1);
printf("Informe a parte imaginária de z: ");
scanf("%f",&imag1);
printf("Informe a parte real de w: ");
scanf("%f",&real2);
printf("Informe a parte imaginária de w: ");
scanf("%f",&imag2);

printf("z + w = %.2f + %.2fi\n",real1+real2,imag1+imag2);
printf("z - w = %.2f + %.2fi\n",real1-real2,imag1-imag2);
printf("z * w = %.2f + %.2fi\n",((real1*real2)-(imag1*imag2)),((real1*imag2)+(real2*imag1)));

modz = sqrt(((pow(real1,2)+(pow(imag1,2)))));
modw = sqrt(((pow(real2,2)+(pow(imag2,2)))));

printf("|z| = %f\n",modz);
printf("|w| = %f\n",modw);

return 0;
}
