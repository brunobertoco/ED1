#include <stdio.h>
#include <math.h>


int main(){

double fat=1,e;
double i=1,a;
double n;

printf("<< Número neperiano >> \nEntre com o número de termos: ");
scanf("%lf",&n);

for(i=1,e=1;i<=n;i++){
    for(a = i; a >= 1; a--){
        fat = fat*a;
    }
    e = e + (1/fat);
    fat=1;
}
printf("e~ %.10lf",e);

return 0;
}
