#include <stdio.h>
#include <stdlib.h>

#define LINES (3)
#define COLUMNS (3)

void popularMatriz (int lines, int columns, int matriz[lines][columns]){
    //laço de repetição
     for (int i = 0; i < LINES; i++){   
        for (int j = 0; j < COLUMNS; j++){  
            //pede pro usuário popular os elementos da matriz
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
  }
 }
}
void imprimeMatriz(int lines, int columns, int matriz[lines][columns]){
    for(int i = 0; i < LINES; i++){
        for(int j = 0; j < COLUMNS; j++){
            printf("%2d ", matriz[i][j]);
  }
  
            printf("\n");
 }
}

int tracoMatriz(int lines, int columns, int matriz[lines][columns]){
    int soma = 0;
    for (int i = 0; i < LINES; i++){ 
       // define qual vai ser a "diagonal" que nós queremos achar
            soma += matriz [i][i]; // soma = soma + matriz[i][j];
  }

  return soma;
 }

int main (){
    //declara a matria
    int matriz[LINES][COLUMNS];

    popularMatriz(LINES, COLUMNS, matriz);

    imprimeMatriz(LINES, COLUMNS, matriz);

    int traco = tracoMatriz(LINES, COLUMNS, matriz);

    printf("Traço da matriz: %d\n   ", traco);

    return 0;

}