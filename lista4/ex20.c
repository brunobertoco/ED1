#include <stdio.h>

int main(){

int n,c,l,x;

printf("Digite um numero n: ");
scanf("%d",&n);

for(c=1,x=1;c<=n;c++){
    for(l=1;l<=c;l++,x++){
            printf("%d ",x);
    }
    printf("\n");
}

return 0;
}
