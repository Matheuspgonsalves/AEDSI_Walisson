//Bibliotecas necessarias
#include <stdio.h>

int main(){//Funcao principal
    //Declaracao de variaveis e inicializacao
    int x, y, resto = 0;

    puts("CALCULADORA DO RESTO DA DIVISAO");//Titulo do programa

    //Instrucoes de uso e alocacao de valor nas respectivas variaveis
    puts("Digite dois numeros inteiros");
    puts("Numero 1: ");
    scanf("%d", &x);
    puts("Numero 2: ");
    scanf("%d", &y);

    //operacao de resto atribuido a respectiva variavel
    resto = x % y;

    printf("Resto da divisao: %d", resto);

    return 0;
}
