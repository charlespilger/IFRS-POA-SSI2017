#include <stdio.h>

int main()
{
    int numeroFuncionario;
    float salarioFuncionario, valorINPC, indiceProdutividade, aumentoFuncionario, novoSalario;
    
    printf("C�lculo de sal�rio\n\n");

    printf("Entre com o n�mero do funcion�rio: ");
    scanf("%d", &numeroFuncionario);
    
    printf("Entre com o sal�rio atual do funcion�rio: ");
    scanf("%f", &salarioFuncionario);
    
    printf("Entre com o valor do INPC: ");
    scanf("%f", &valorINPC);
    
    printf("Entre com o �ndice de produtividade: ");
    scanf("%f", &indiceProdutividade);
    
    aumentoFuncionario = salarioFuncionario *0.75 * valorINPC/100 + salarioFuncionario * indiceProdutividade / 100;

    novoSalario = salarioFuncionario + aumentoFuncionario;
    
    printf("O funcion�rio %d teve um aumento de R$ %.2f totalizando R$ %.2f.\n", numeroFuncionario, aumentoFuncionario, novoSalario);

    return 0;
}

