#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main()
	{
		setlocale(LC_ALL, "Portuguese");
		
		int estadocivil;
		
		printf("Digite '1' para solteiro, '2' para casado, '3' para divorciado ou '4' para viúvo: ");
		scanf("%i", &estadocivil);
		
		switch(estadocivil){
			case 1: 
				printf("De acordo com sua resposta, o seu estado civil é SOLTEIRO.");
				break;
			
			case 2:
				printf("De acordo com sua resposta, o seu estado civil é CASADO.");
				break;
			
			case 3:
				printf("De acordo com sua resposta, o seu estado civil é DIVORCIADO.");
				break;
				
			case 4:
				printf("De acordo com sua resposta, o seu estado civil é VIÚVO.");
				break;
				
			default:
				printf("ERRO! Deve ser digitado apenas um dos números (1, 2, 3 ou 4).");
		
		}
		
		getch();
		return 0;
	}
