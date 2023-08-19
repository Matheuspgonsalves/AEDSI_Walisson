//Bibliotecas necessarias
#include <stdio.h>

int main(){//Funcao principal
    //Inicializacao e declaracao de variaveis
    float num1, num2, num3, num4, media = 0, somaNumeros = 0;

    puts("MEDIA PONDERADA");

    puts("Informe 4 numeros");
    puts("Numero 1: ");
    scanf("%f", &num1);

    puts("Numero 2: ");
    scanf("%f", &num2);

    puts("Numero 3: ");
    scanf("%f", &num3);

    puts("Numero 4: ");
    scanf("%f", &num4);

    somaNumeros = num1 + num2 + num3 + num4;
    media = ((1*num1)+(2*num2)+(3*num3)+(4*num4))/somaNumeros;

    printf("\nA media ponderada eh: %.2f", media);

    return 0;
}
