//Bibliotecas necessarias
#include <stdio.h>
#include <math.h>

int main(){
    //Declaracao e inicializacao de variaveis
    float raio, area = 0;

    puts("CALCULAR AREA CIRCUFERENCIA");//Titulo do programa

    //Instrucao e alocacao de valores as variaveis
    puts("Digite o raio: ");
    scanf("%f", &raio);

    //Atribuicao de operacao a respectiva variavel
    area = 3.14 * pow(raio, 2);

    printf("\nA area da circuferencia eh: %.2f", area);

    return 0;
}
