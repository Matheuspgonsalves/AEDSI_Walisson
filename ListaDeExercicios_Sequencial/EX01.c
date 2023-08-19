//Bibliotecas necessarias
#include <stdio.h>

int main(){//Funcao principal para execucao do programa
    //Declaracao e inicializacao de variaveis
    float num1, num2, num3, soma = 0, multiplicacao = 0;

    puts("Soma e produto de 3 numeros");//Mensagem informativa sobre a obtivo do programa

    puts("\nDigite 3 numeros diferentes");//Instrucao para o usuario

    //Saida para o usuario, informando os numeros a serem inseridos, seguido de alocacao do valor na variavel
    puts("\nNumero 1: ");
    scanf("%f", &num1);

    puts("\nNumero 2: ");
    scanf("%f", &num2);

    puts("\nNumero 3:");
    scanf("%f", &num3);

    //atribuicao de operacoes as respectivas variaveis
    soma = num1 + num2 + num3;
    multiplicacao = num1 * num2 * num3;

    printf("\n\nSoma dos numeros: %.2f\nMultiplicacao dos numeros: %.2f\n\n", soma, multiplicacao);

    return 0;
}
