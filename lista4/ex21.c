#include <stdio.h>

int main(){

int fat=1,n=1,c;

for(c=1,fat=1;c<=10;c++){
    for(n = c; n >= 1; n--){
        fat = fat*n;
    }
    printf("%d! = %d \n",c,fat);
    fat=1;
}
return 0;
}
