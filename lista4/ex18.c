#include <stdio.h>
#include <math.h>


int main(){

float km,ms,res;
char opcao;
printf("<< Conversor >> \nDigite uma opção \n  1 - para converter de km/h para m/s \n  2 - para converter de m/s para hm/h \n  q - para sair \n");
setbuf(stdin,NULL);
scanf("%c",&opcao);

if(opcao == '1'){
   printf("Digite a velocidade (km/h): ");
   setbuf(stdin,NULL);
   scanf("%f",&km);
   res=km/3.6;
   printf("A velocidade em m/s é %.4f\n",res);
   main();
}
else if(opcao == '2'){
   printf("Digite a velocidade (ms/s): ");
   setbuf(stdin,NULL);
   scanf("%f",&ms);
   res=ms*3.6;
   printf("A velocidade em km/h é %.4f\n",res);
   main();
}
else if(opcao=='q'){
    return 0;
}

return 0;
}
