//Declaracao de bibliotecas necessarias
#include <stdio.h>
#include <math.h>

int main(){//Funcao principal
    //Declaracao de variaveis e inicializacao
    float num, pot = 0, raizQuadrada = 0, raizCubo = 0,seno = 0, coss = 0;

    puts("ALGORITMO DE CALCULO");//titulo do programa

    //Instrucao e alocacao do valor de entrada na memoria

    do {//estrutura de repeticao para receber numeros positivos
        puts("Informe um numero positivo: ");
        scanf("%f", &num);
    }while(num < 0);

    /*
    Atribuicao de operacoes nas respectivas variaveis
    */
    pot = pow(num, 3);
    raizQuadrada = sqrt(num);
    raizCubo = pow(num, 1/3);
    seno = sin(num);
    coss = cos(num);

    //Saida para o usuario
    printf("\n\nNumero ao cubo: %.2f\nRaiz quadrada: %.2f\nRaiz cubica: %.2f\nSeno: %.2f\nCosseno: %.2f", pot, raizQuadrada, raizCubo, seno, coss);

    return 0;
}
