/*
 *
 * Escreva um programa que leia 2 notas, calcule a m�dia simples e escreva na tela.
 *
 */


#include <stdio.h>

int main()
{
    float fNota1, fNota2, fMedia;
    
    printf("C�lculo de m�dias\n\n");
    
    printf("Entre com a primeira nota: ");
    scanf("%f", &fNota1);
    
    printf("Entre com a segunda nota: ");
    scanf("%f", &fNota2);
    
    fMedia = ( fNota1 + fNota2 ) / 2;
    
    printf("A m�dia � de %.2f\n", fMedia);

    return 0;
}
