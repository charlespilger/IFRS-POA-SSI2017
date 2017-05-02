/*
 * Escreva um algoritmo que escreva n�meros de 1 a 10. Usando o comando FOR
 * (for(i=10;i>0;i--)) com decremento. (use a imagina��o)
 */

#include <stdio.h>

int main()
{
    int iNumeroDePatinhos, iPatinhosQueForam, iPatinhosQueVoltaram;
    
	iNumeroDePatinhos = 5;
	
    for( iPatinhosQueForam = iNumeroDePatinhos; iPatinhosQueForam >= 0; iPatinhosQueForam-- ) 
    {
		iPatinhosQueVoltaram = iPatinhosQueForam - 1;
		
		switch( iPatinhosQueForam ) 
		{
		    case 0:
    			printf( "A mam�e patinha foi procurar\n");
    			iPatinhosQueVoltaram = iNumeroDePatinhos;
    			break;
    		case 1:
			    printf( "1 patinho foi passear\n" );
			    break;
    		default:
    		    printf( "%d patinhos foram passear\n", iPatinhosQueForam );
				break;
		}
		
		printf( "Al�m das montanhas\n" );
		printf( "Para brincar\n" );
		printf( "A mam�e gritou: Qu�, qu�, qu�, qu�\n" );		
		
		switch( iPatinhosQueVoltaram ) 
		{
		    case 0:  
		        printf( "Mas nenhum patinho voltou de l�.\n\n" );
		        break;
		    case 1:
		        printf( "Mas s� %d patinho voltou de l�.\n\n", iPatinhosQueVoltaram );
		        break;
		    default:
    		    if( iPatinhosQueForam != 0 ) {
    	            printf( "E os %d patinhos voltaram de l�.\n\n", iPatinhosQueVoltaram );
    		    } else {
    			    printf( "Mas s� %d patinhos voltaram de l�.\n\n", iPatinhosQueVoltaram );
    		    }
				break;
		}
    }

    return 0;
}