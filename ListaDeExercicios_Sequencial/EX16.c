//bibliotecas necessarias
#include <stdio.h>

int main(){//funcao principal
    //Declaracao de variaveis e inicializacao
    float hora, horaParaMinuto = 0;

    //Titulo do programa
    puts("CONVERSAO DE HORA PRA MINUTO");
    //Instrucao para usuario e alocacao do valor na variavel
    puts("Insira o valor em horas:");
    scanf("%f", &hora);

    //Calculo para transformar hora em minuto
    horaParaMinuto = hora * 60;

    printf("\n\n%.1f Horas = %.1f Minutos\n", hora, horaParaMinuto);
    return 0;
}
