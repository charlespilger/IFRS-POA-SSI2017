/*
 *
 * Escreva um programa que l� dois numeros e imprima o resultado da soma dos dois numeros.
 *
 */

#include <stdio.h>

int main()
{
    float fNum1, fNum2, fSoma;
    
    printf("C�lculo de soma\n\n");
    
    printf("Entre com o primeiro n�mero: ");
    scanf("%f", &fNum1);
    
    printf("Entre com o segundo n�mero: ");
    scanf("%f", &fNum2);
    
    fSoma = fNum1 + fNum2;
    
    printf("A soma � de %.2f\n", fSoma);

    return 0;
}
