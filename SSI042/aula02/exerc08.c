/*
 *
 * Fa�a um programa que fa�a a convers�o de um valor lido em reais para 
 * um valor em d�lares. Deve ser informada a cota��o do d�lar no dia pelo 
 * usu�rio.
 *
 */

#include <stdio.h>

int main()
{
    float fValorReais, fValorDolar, fCotacaoDolar;
    
    printf("Convers�o Real para D�lares\n\n");
    
    printf("Entre com o valor em reais: R$ ");
    scanf("%f", &fValorReais);
    
    printf("Entre com a cota��o do d�lar: R$ ");
    scanf("%f", &fCotacaoDolar);

    fValorDolar = fValorReais / fCotacaoDolar;
    
    printf("O valor em d�lares � de US$ %.2f\n", fValorDolar);

    return 0;
}
