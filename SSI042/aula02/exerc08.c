// Faça um programa que faça a conversão de um valor lido em reais para um valor em dólares. Deve ser informada a cotação do dólar no dia pelo usuário.

#include <stdio.h>

int main()
{
    float valorReais, valorDolar, cotacaoDolar;
    
    printf("Convers�o Real para D�lares\n\n");
    
    printf("Entre com o valor em reais: R$ ");
    scanf("%f", &valorReais);
    
    printf("Entre com a cota��o do d�lar: R$ ");
    scanf("%f", &cotacaoDolar);

    valorDolar = valorReais / cotacaoDolar;
    
    printf("O valor em d�lares � de US$ %.2f\n", valorDolar);

    return 0;
}
