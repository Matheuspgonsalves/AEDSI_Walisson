//bibliotecas necessarias
#include <stdio.h>

int main(){
    //Declaracao de variaveis e inicializacao
    float salario, vendasMes, comissaoVendas = 0;

    puts("CALCULO DE SALARIO + COMISSAO");//Titulo do programa

    //Instrucao para usuario e alocacao do valor na memoria
    puts("Insira seu salario");
    scanf("%f", &salario);

    //Instrucao para usuario e alocacao do valor na memoria
    puts("Insira o total em vendas do mes:");
    scanf("%f", &vendasMes);

    comissaoVendas = (vendasMes/100)*4;//Calculo da comissao a ser recebida
    salario += comissaoVendas;

    printf("\n\nO seu salario final eh: R$%.2f\n", salario);//Saida do resultado para o usuario

    return 0;
}
