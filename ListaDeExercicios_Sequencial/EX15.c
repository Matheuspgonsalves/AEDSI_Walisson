//bibliotecas necessarias
#include <stdio.h>

int main(){//funcao principal
    //Declaracao de variaveis e inicializacao
    float horasTrabalhadas, horasExtrasTrabalhadas;
    float salarioMinimo = 1320, valorHoraTrabalho = salarioMinimo * 0.125, valorHoraExtra = salarioMinimo * 0.250, salarioBruto = 0, quantiaHorasExtras = 0, salarioFinal = 0;

    puts("CALCULO SALARIO MENSAL");

    //Instrucao para o usuario e alocacao do valor na variavel
    puts("Informe as horas trabalhadas:");
    scanf("%f", &horasTrabalhadas);

    //Instrucao para o usuario e alocacao do valor na variavel
    puts("Informe as horas extras trabalhadas:");
    scanf("%f", &horasExtrasTrabalhadas);

    //Operacao para calcular o salario bruto
    salarioBruto = horasTrabalhadas * valorHoraTrabalho;
    //Operacao para calcular o valor das horas extras a receber
    quantiaHorasExtras = horasExtrasTrabalhadas * valorHoraExtra;
    //Calculo para o salario final a receber
    salarioFinal = salarioBruto + quantiaHorasExtras;

    //Saida final para o usuario
    printf("Seu salario final eh: R$%.2f", salarioFinal);

    return 0;
}
