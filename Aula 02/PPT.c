#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int computador = (rand() % 3) + 1;
    int usuario;

    printf("Escolha entre 1 = Pedra, 2 = Papel e 3 = Tesoura: ");
    scanf("%d", &usuario);

    if (usuario == 1 && computador == 3){
      printf("O Usuário Venceu!\n");
    }
    else if (usuario == 2 && computador == 1){
      printf("O Usuário Venceu!\n"); 
    }
    else if (usuario == 3 && computador == 2){
        printf("O Usuário Venceu!\n");
    } 
    else if (usuario == 1 && computador == 1 || usuario == 2 && computador == 2 || usuario == 3 && computador == 3){
        printf("Está Empatado!\n");
    }  
     else{
        printf("O Computador Ganhou!\n");
     }   

    return 0;
}