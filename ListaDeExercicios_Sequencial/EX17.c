
//bibliotecas necessarias
#include <stdio.h>

int main(){//funcao principal
    //Declaracao de variaveis e inicializacao
    float minuto, minutoParaHora = 0;

    //Titulo do programa
    puts("CONVERSAO DE MINUTO PARA HORA");
    //Instrucao para usuario e alocacao do valor na variavel
    puts("Insira o valor em minutos:");
    scanf("%f", &minuto);

    //Calculo para transformar hora em minuto
    minutoParaHora = minuto/60;

    printf("\n\n%.1f Minutos = %.1f Horas\n", minuto, minutoParaHora);
    return 0;
}
