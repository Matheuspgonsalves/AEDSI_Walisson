//Bibliotecas necessarias
#include <stdio.h>
#include <math.h>

int main(){//funcao principal
    //Declaracao e inicializacao de variaveis
    float a, b, c, x1 = 0,x2 = 0, potB = 0, delta = 0, sqrtDelta = 0, bhask1 = 0, bhask2 = 0;

    puts("CALCULADORA DE RAIZES DE UMA EQUACAO DO SEGUNDO GRAU");//Titulo do programa

    //Instrucao e alocacao dos valores nas variaveis
    puts("Insira o coeficiente A: ");
    scanf("%f", &a);

    puts("Insira o coeficiente B: ");
    scanf("%f", &b);

    puts("Insira o coeficiente C: ");
    scanf("%f", &c);

    //Atribuicao de operacao as respectivas variaveis
    potB = pow(b, 2);//eleva o b ao quadrado para ser usado no delta
    delta = potB - 4*a*c;
    sqrtDelta = sqrt(delta);
    bhask1 = -(b) + sqrtDelta;
    bhask2 = -(b) - sqrtDelta;
    x1 = bhask1/(2*a);
    x2 = bhask2/(2*a);

    printf("\nA = %.2f, B = %.2f, C = %.2f", a, b, c);//Mostrando os coeficientes
    printf("\nDelta = %.2f", delta);//Mostrando o valor de delta
    printf("\nRaiz de delta = %.2f", sqrtDelta);//Mostrando o valor da raiz quadrada de delta
    printf("\nAs raizes sao: \nx1 = %.2f \nx2 = %.2f", x1, x2);

    return 0;
}
