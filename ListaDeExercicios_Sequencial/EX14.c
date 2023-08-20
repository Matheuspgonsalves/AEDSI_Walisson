//bibliotecas necessarias
#include <stdio.h>

int main(){//funcao principal
    //Declaracao de variaveis e inicializacao
    float precoProduto, desconto10percento = 0, acrescimo20percento = 0, precoDescontado = 0, precoAcrescimo = 0;

    puts("DESCONTO E ACRESCIMO");//Titulo do programa

    //Instrucao para o usuario e alocacao do valor na variavel
    puts("Insira o preco do produto:");
    scanf("%f", &precoProduto);

    //Calculo de 10 porcento do produto e subtracao do valor total pela porcentagem
    desconto10percento = (precoProduto/100)*10;
    precoDescontado = precoProduto - desconto10percento;

    //Calculo de 20 por cento do valor do produto e soma do preco original somado a 20 porcento
    acrescimo20percento = (precoProduto/100)*20;
    precoAcrescimo = precoProduto + acrescimo20percento;

    printf("\n\nPreco com desconto de 10%: %.2f\nPreco com acrescimo de 20%: %.2f\n", precoDescontado, precoAcrescimo);//saida para o usuario

    return 0;
}
