/*
 *
 * Considerando que o aumento dos funcion�rios � de 75% do INPC e mais um percentual 
 * de produtividade discutido com a empresa. Construir um programa que l� o n�mero do 
 * funcion�rio, seu sal�rio atual, o valor do INPC e o �ndice de produtividade e 
 * escreve o n�mero do funcion�rio, seu aumento e o valor de seu novo sal�rio.
 *
 * Aumento=Salario*0,75*INPC/100  +Salario*IndiceProdutividade/100
 * Salario Novo = Salario + Aumento 
 *
 */

#include <stdio.h>

int main()
{
    int iNumeroFuncionario;
    float fSalarioFuncionario, fValorINPC, fIndiceProdutividade, fAumentoFuncionario, fNovoSalario;
    
    printf("C�lculo de sal�rio\n\n");

    printf("Entre com o n�mero do funcion�rio: ");
    scanf("%d", &iNumeroFuncionario);
    
    printf("Entre com o sal�rio atual do funcion�rio: ");
    scanf("%f", &fSalarioFuncionario);
    
    printf("Entre com o valor do INPC: ");
    scanf("%f", &fValorINPC);
    
    printf("Entre com o �ndice de produtividade: ");
    scanf("%f", &fIndiceProdutividade);
    
    fAumentoFuncionario = fSalarioFuncionario * 0.75 * fValorINPC / 100 + fSalarioFuncionario * fIndiceProdutividade / 100;

    fNovoSalario = fSalarioFuncionario + fAumentoFuncionario;
    
    printf( "O funcion�rio %d teve um aumento de R$ %.2f totalizando R$ %.2f.\n", iNumeroFuncionario, fAumentoFuncionario, fNovoSalario );

    return 0;
}

