//Bibliotecas necessarias
#include <stdio.h>

int main(){//Funcao principal
    //declaracao e inicializacao de variaveis
    float num1, num2, num3, media = 0;

    puts("MEDIA ARITMETICA");//saida para informar o oobjetivo do programa

    //Instrucao e alocacao dos valores em memoria
    puts("Insira 3 numeros para realizar a media");
    puts("Numero 1:");
    scanf("%f", &num1);

    puts("Numero 2:");
    scanf("%f", &num2);

    puts("Numero 3:");
    scanf("%f", &num3);

    media = (num1 + num2 + num3)/3;

    printf("\nA media da soma dos numeros %.2f, %.2f e %.2f = %.2f", num1, num2, num3, media);
    return 0;
}
