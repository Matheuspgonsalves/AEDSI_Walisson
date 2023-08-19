//Bibliotecas necessarias
#include <stdio.h>

int main(){//funcao principal
    //Declaracao e inicializacao das variaveis
    float lado, altura, area = 0, perimetro = 0;

    puts("CALCULADORA DE AREA E PERIMETRO DO RETANGULO");//Titulo do programa

    puts("Insira o lado: ");
    scanf("%f", &lado);

    puts("Insira a altura: ");
    scanf("%f", &altura);

    area = lado * altura;
    perimetro = (lado*2) + (altura * 2);

    printf("\nArea: %.2f\nPerimetro: %.2f", area, perimetro);

    return 0;
}
