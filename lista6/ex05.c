#include<stdio.h>

int main(void){
    char nome1[50],nome2[50];
    char c;
    int i,n=0,pos1,pos2;

    pos1 = 0; 
    printf("<<Compara nomes>>\n\n");
    printf("Digite o nome 1: ");
    setbuf(stdin,NULL);    
    c = getchar(); 
    while (c != '\n') {           
    nome1[pos1] = c;         
    pos1++;         
    c = getchar();     
    }
    pos2 = 0;  
    printf("Digite o nome 2: ");
    setbuf(stdin,NULL);   
    c = getchar(); 
    while (c != '\n') {           
    nome2[pos2] = c;         
    pos2++;         
    c = getchar();     
    }

    if(pos1==pos2){
        for(i=0;i<pos1;i++){
            if((nome1[i]==nome2[i])||(nome1[i]==nome2[i]-32)||(nome1[i]==nome2[i]+32)){
                n++;
            }
        }

        if(n==pos1){
           printf("Os nomes digitados são iguais\n"); 
        }else{
            printf("Os nomes digitados são diferentes\n");
        }
    }else{
        printf("Os nomes digitados são diferentes\n");
    }

}
