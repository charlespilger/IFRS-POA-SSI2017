#include <stdio.h>

int main()
{
    float precoUnitario, totalGastoPeloCliente, premio;
    int quantidade;
    
    printf("C�lculo de oferta\n\n");
    
    printf("Entre com o pre�o unit�rio: ");
    scanf("%f", &precoUnitario);
    
    printf("Entre com a quantidade: ");
    scanf("%d", &quantidade);

    totalGastoPeloCliente = precoUnitario * quantidade;
    premio = totalGastoPeloCliente * totalGastoPeloCliente;
    
    printf("O valor do pr�mio � de R$ %.2f\n", premio);

    return 0;
}
