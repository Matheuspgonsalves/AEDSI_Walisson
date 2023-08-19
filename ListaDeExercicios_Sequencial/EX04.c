//Bibliotecas necessarias
#include <stdio.h>

int main(){//Funcao principal
    //Inicializacao e declaracao de variaveis
    float num1, num2, num3, num4, media = 0, somaNumeros = 0;

    puts("MEDIA PONDERADA");//Nome e objetivo do programa

    //Instrucao de uso e alocacao das variaveis necessarias
    puts("Informe 4 numeros");
    puts("Numero 1: ");
    scanf("%f", &num1);

    puts("Numero 2: ");
    scanf("%f", &num2);

    puts("Numero 3: ");
    scanf("%f", &num3);

    puts("Numero 4: ");
    scanf("%f", &num4);

    /*Atribuicao das operacoes
    somaNumeros -> armazena a soma dos numeros inseridos pelo usuario
    media -> realiza a media ponderada*/
    somaNumeros = num1 + num2 + num3 + num4;
    media = ((1*num1)+(2*num2)+(3*num3)+(4*num4))/somaNumeros;

    //Saida para do resultado para o usuario
    printf("\nA media ponderada eh: %.2f", media);

    return 0;
}
