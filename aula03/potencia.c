#include <stdio.h>

int potencia(int base, int expoente) {
    int resultado = 1; 

    for (int cont = 1; cont <= expoente; cont++ ) {
        resultado *= base; //resultado = resultado * base
       }
    return resultado;
 }
    int main(){

        int base, expoente;
            

        printf("Insira um número:\n ");
        scanf("%d", &base);
        printf("Insira um expoente:\n ");
        scanf("%d", &expoente);

        int pot = potencia(base, expoente);
        printf("A Potência é igual a: %d\n", pot);
         return 0;
    }