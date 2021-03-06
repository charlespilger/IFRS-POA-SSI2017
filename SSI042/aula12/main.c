/* 
 * File:   main.c
 * Author: Charles ROberto Pilger
 *
 * Created on 25 de Maio de 2017, 21:24
 */

#include "main.h"

int main(int argc, char** argv) {

	int iOpcao, iSair;
	iSair = 0;

	while( iSair == 0 ) {
		printf("\nEntre com o número do exercício que deseja executar (0 para sair): ");
		scanf("%d", &iOpcao);
		getchar();

		printf("\n\n");
		switch( iOpcao ) {
			case 1: 
				exercicio1();
				break;
			case 2:
				exercicio2();
				break;
			case 3:
				exercicio3();
				break;
			case 4:
				exercicio4();
				break;
			default:
				if(iOpcao != 0) {
					printf("Opção inválida.\n");
				} else {
					iSair = 1;
				}
			}
	}

	return (EXIT_SUCCESS);

}


