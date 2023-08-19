//Bibliotecas necessarias
#include <stdio.h>
#include <math.h>

int main(){//Funcao principal
    //Declaracao e inicializacao de variaveis
    int A = 4, B = 5, C = 1;
    int opA = 0, opB = 0, opC = 0, opD = 0, opE = 0;

    opA = B * A - pow(B, 2)/ 4 * C ;
    opB = (A * B)/pow(3 , 2);
    opC = (((B + C)/2 * A + 10) * 3 * B) - 6;
    opD = 7 * 10 - 50 % 3 * 4 + 9;
    opE = (7 *(10 - 5)% 3) * 4 + 9;

    printf("\nA)Resultado: %d\nB)Resultado: %d\nC)Resultado: %d\nD)Resultado: %d\nE)Resultado: %d", opA, opB, opC, opD, opE);

    return 0;
}
