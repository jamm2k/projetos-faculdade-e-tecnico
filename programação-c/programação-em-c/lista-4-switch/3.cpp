#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main()
	{
		setlocale(LC_ALL, "Portuguese");
		
		int estadocivil;
		
		printf("Digite '1' para solteiro, '2' para casado, '3' para divorciado ou '4' para vi�vo: ");
		scanf("%i", &estadocivil);
		
		switch(estadocivil){
			case 1: 
				printf("De acordo com sua resposta, o seu estado civil � SOLTEIRO.");
				break;
			
			case 2:
				printf("De acordo com sua resposta, o seu estado civil � CASADO.");
				break;
			
			case 3:
				printf("De acordo com sua resposta, o seu estado civil � DIVORCIADO.");
				break;
				
			case 4:
				printf("De acordo com sua resposta, o seu estado civil � VI�VO.");
				break;
				
			default:
				printf("ERRO! Deve ser digitado apenas um dos n�meros (1, 2, 3 ou 4).");
		
		}
		
		getch();
		return 0;
	}
