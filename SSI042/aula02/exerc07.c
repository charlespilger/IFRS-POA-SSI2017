/*
 *
 * A Joalheria Silva est� fazendo anivers�rio e resolveu premiar o primeiro cliente do 
 * dia devolvendo a ele o valor da compra ao quadrado. Fa�a um programa que leia o pre�o
 * unit�rio do produto adquirido pelo cliente, a quantidade e calcule o total gasto pelo
 * cliente. Mostre o total e calcule o total elevado ao quadrado. Mostre o valor do pr�mio.
 *
 */

#include <stdio.h>

int main()
{
    float fPrecoUnitario, fTotalGastoPeloCliente, fPremio;
    int iQuantidade;
    
    printf("C�lculo de oferta\n\n");
    
    printf("Entre com o pre�o unit�rio: ");
    scanf("%f", &fPrecoUnitario);
    
    printf("Entre com a quantidade: ");
    scanf("%d", &iQuantidade);

    fTotalGastoPeloCliente = fPrecoUnitario * iQuantidade;
    fPremio = fTotalGastoPeloCliente * fTotalGastoPeloCliente;
    
    printf("O valor do pr�mio � de R$ %.2f\n", fPremio);

    return 0;
}
