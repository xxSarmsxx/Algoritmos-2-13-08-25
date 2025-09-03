#include <stdio.h>

int minuto(int hora, int minuto) {
    return hora * 60 + minuto;
}

int diferenca(int horario1, int horario2){
    int diferenca = horario1 - horario2;
        if (diferenca > 0){ 
            return diferenca * -1;
        }

    return diferenca;

}

int main (){
    int hora1, minuto1, hora2, minuto2, tminutos1, tminutos2, diffminutos;

        printf("Insira o primeiro horário no formato de 24 horas (HH:MM): ");
        scanf("%d:%d", &hora1, &minuto1);
        printf("Insira o segundo horário no formato de 24 horas (HH:MM): ");
        scanf("%d:%d",&hora2, &minuto2);

        tminutos1 = minuto(hora1, minuto1);
        tminutos2 = minuto(hora2, minuto2);
        diffminutos = diferenca(tminutos1, tminutos2);



    printf("A Diferença de minutos entre os horários é de: %d minutos.\n", diffminutos);


    return 0;
}