#include <stdio.h>

int main()
{
    float num1, num2, soma;
    
    printf("C�lculo de soma\n\n");
    
    printf("Entre com o primeiro n�mero: ");
    scanf("%f", &num1);
    
    printf("Entre com o segundo n�mero: ");
    scanf("%f", &num2);
    
    soma = num1 + num2;
    
    printf("A soma � de %.2f\n", soma);

    return 0;
}
