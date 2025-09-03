#include <stdio.h>

int main(){
    
    int selo3;
    int selo5;
    int centavos;
    int soma;
    
    printf("Digite a quantidade de centavos:\n ");
    scanf("%d", &centavos);

    selo3 = 0;
    selo5 = 0;
    soma = 0;

    while (soma < centavos){
        int resto = centavos - soma;

     if (resto % 5 == 0){
        selo5 += resto / 5;
        soma += resto;
     }

     else {
        selo3++;
        soma += 3;
     }
    
    printf("Caso você possua %d centavos, a quantidade de selos de 3 centavos será %d e %d de 5 centavos. :)\n", centavos, selo3,selo5);
    
    return 0;
   }
}