//bibliotecas necessarias
#include <stdio.h>

int main() {//funcao principal
    //Declaracao de variaveis e inicializacao
    float salario, calculoPorcentagem = 0;

    puts("Aumento de 25%");//Titulo do programa

    //instrucao e alocacao do valor na variavel
    puts("Insira seu salario: ");
    scanf("%f", &salario);

    //Atribuicao da operacao de porcentagem. Calculado 25 % do salario
    calculoPorcentagem = (salario / 100) * 25;//Calcula 25% do salario atual
    salario += calculoPorcentagem;//Calculo o proprio valor do salario, somado a porcentagem do novo aumento

    printf("Seu novo salario eh: %.2f", salario);//Saida para o usuario

    return 0;
}
