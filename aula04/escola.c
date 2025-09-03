/**
Uma escola deseja criar um sistema de avaliação que calcule a média das notas de um grupo de estudantes e determine quais estudantes precisam de recuperação. A média mínima para aprovação é 7.0. Se a média for menor que 7.0, o estudante está de recuperação. 

Escreva um programa em C que: 

Peça ao usuário para inserir o número de estudantes.
Use um vetor para armazenar as notas finais de cada estudante.
Crie uma função calcularMediaTurma que recebe o vetor de notas e o número de estudantes e retorna a média das notas da turma. 
Crie uma função imprimirResultados que recebe o vetor de notas e o número de estudantes, e imprime quais estudantes estão de recuperação e quais estão aprovados.
*/
#include <stdio.h>

// Calcula a média das notas da turma
float calcularMediaTurma(float notas[], int numAlunos) {
    float soma = 0.0;
    for (int i = 0; i < numAlunos; i++) {
        soma += notas[i];
    }
    return soma / numAlunos;
}

// Imprime os resultados
void imprimirResultados(float notas[], int numAlunos) {
    printf("Resultados:\n");
    for (int i = 0; i < numAlunos; i++) {
        printf("Estudante %d: Nota %.2f - ", i + 1, notas[i]);
        if (notas[i] >= 7.0) {
            printf("O aluno está aprovado! :D \n");
        } else {
            printf("Está de recuperação :( \n");
        }
    }
}

int main() {
    int numAlunos;

    // Pede o número dos estudantes
    printf("Digite o número de estudantes: ");
    scanf("%d", &numAlunos);

    // Declara o vetor de notas
    float notas[numAlunos];

    // Pede a nota de cada estudante
    for (int i = 0; i < numAlunos; i++) {
        printf("Digite a nota final do estudante %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    // Calcula e exibe a média da turma
    float mediaTurma = calcularMediaTurma(notas, numAlunos);
    printf("\nMédia da turma: %.2f\n", mediaTurma);

    // Imprime os resultados individuais
    imprimirResultados(notas, numAlunos);

    return 0;
}
