#include <stdio.h>

int main()
{
    float nota1, nota2, media;
    
    printf("C�lculo de m�dias\n\n");
    
    printf("Entre com a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Entre com a segunda nota: ");
    scanf("%f", &nota2);
    
    media = ( nota1 + nota2 ) / 2;
    
    printf("A m�dia � de %.2f\n", media);

    return 0;
}
