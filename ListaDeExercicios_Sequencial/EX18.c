//Bibliotecas necessarias
#include <stdio.h>
#include <math.h>

int main(){//funcao principal
    //Declaracao de variaveis e inicializacao
    float x1, x2, p1, p2, distancia = 0, calculoX = 0,calculoY = 0, somaXeY = 0;

    //Titulo do programa
    puts("CALCULAR DISTANCIA ENTRE 2 PONTOS NO PLANO");

    //Instrucao para o usuario inserir informacoes e alocar no valor da memoria
    puts("Insira o valor de x1:");
    scanf("%f", &x1);

    //Instrucao para o usuario inserir informacoes e alocar no valor da memoria
    puts("Insira o valor de x2:");
    scanf("%f", &x2);

    //Instrucao para o usuario inserir informacoes e alocar no valor da memoria
    puts("Insira o valor de p1:");
    scanf("%f", &p1);

    //Instrucao para o usuario inserir informacoes e alocar no valor da memoria
    puts("Insira o valor de p2:");
    scanf("%f", &p2);

    //Calculo relacionado ao (x2-x1) elevado ao quadrado
    calculoX = pow(x2-x1, 2);
    //Calculo relacionado ao (p2-p1) elevado ao quadrado
    calculoY = pow(p2-p1, 2);

    //Soma entre x e y
    somaXeY = calculoX + calculoY;

    //Resultado final, raiz quadrada da soma entre x e y
    distancia = sqrt(somaXeY);

    printf("\n\nA distancia entre os dois pontos eh de: %.2f\n", distancia);

    return 0;
}
