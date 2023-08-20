//bibliotecas necessarias
#include <stdio.h>

int main(){//funcao principal
    //Declaracao de variaveis e inicializacao
    float salario, calculoAumento = 0, porcentagem;

    puts("CALCULO DE AUMENTO SALARIAL\n");//titulo do programa

    //Instrucao e alocacao do valor na variavel
    puts("Insira seu antigo salario:");
    scanf("%f", &salario);

    //Instrucao e alocacao do valor na variavel
    puts("Insira a porcentagem do seu aumento:");
    scanf("%f", &porcentagem);

    calculoAumento = (salario/100) * porcentagem;//calculo da porcentagem de aumento
    salario += calculoAumento;

    printf("\nSeu novo salario eh: R$%.2f", salario);//saida do novo salario para usuario

    return 0;
}
