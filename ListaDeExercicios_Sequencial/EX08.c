//Bibliotecas necessarias
#include <stdio.h>

int main(){
    //Declaracao de variaveis e inicializacao
    float baseSuperior, baseInferior, altura, calculoArea = 0;

    puts("CALCULAR AREA DO TRAPEZIO");//Titulo do programa

    //Instrucoes de uso e alocacao dos valores nas variaveis
    puts("Digite a base maior: ");
    scanf("%f", &baseSuperior);

    puts("Digite a base menor: ");
    scanf("%f", &baseInferior);

    puts("Digite a altura: ");
    scanf("%f", &altura);

    //Atribuicao da operacao de area a respectiva variavel
    calculoArea = (baseSuperior + baseInferior)*altura/2;

    printf("\nA area do trapezio eh: %.2f", calculoArea);

    return 0;
}
