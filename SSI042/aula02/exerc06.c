/*
 *
 * Escreva um programa que l� tr�s numeros e imprima o resultado da multiplica��o. 
 *
 */

#include <stdio.h>

int main()
{
    float fNum1, fNum2, fNum3, fMultiplicacao;
    
    printf("C�lculo de multiplica��o\n\n");
    
    printf("Entre com o primeiro n�mero: ");
    scanf("%f", &fNum1);
    
    printf("Entre com o segundo n�mero: ");
    scanf("%f", &fNum2);

    printf("Entre com o terceiro n�mero: ");
    scanf("%f", &fNum3);
    
    fMultiplicacao = fNum1 * fNum2 * fNum3;
    
    printf("A multiplica��o � de %.2f\n", fMultiplicacao);

    return 0;
}
