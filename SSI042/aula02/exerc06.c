#include <stdio.h>

int main()
{
    float num1, num2, num3, multiplicacao;
    
    printf("C�lculo de multiplica��o\n\n");
    
    printf("Entre com o primeiro n�mero: ");
    scanf("%f", &num1);
    
    printf("Entre com o segundo n�mero: ");
    scanf("%f", &num2);

    printf("Entre com o terceiro n�mero: ");
    scanf("%f", &num3);
    
    multiplicacao = num1 * num2 * num3;
    
    printf("A multiplica��o � de %.2f\n", multiplicacao);

    return 0;
}
