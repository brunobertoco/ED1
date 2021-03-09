#include <stdio.h>
#include <math.h>

int main(){

double bit,bit1,pos,pos1,a,i;

for(bit=2,a=1,i=1,pos=4,pos1=1;a<=7;a++,i++){
bit1 = pow(bit,i);
pos1 = pos1*pos;
printf("Com %.0f bits é possível endereçar %.0f posições de memória\n",bit1,pos1);
pos = pos1;
}

return 0;
}
