#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main()
	{
		setlocale(LC_ALL, "Portuguese");
		
		int idade;
		
		printf("Digite a idade: ");
		scanf("%i", &idade);
		
		if(idade > 18){
			printf("adulto");
		} else {
			switch(idade)
			{
				case 0 ... 3:
					printf("beb�");
					break;
				
				case 4 ... 10:
					printf("crian�a");
					break;
				
				case 11 ... 18:
					printf("adolescente");
					break;
				
				default:
					printf("O valor informado n�o � v�lido.");
			}	
		}
					
		getch();
		return 0;
	}
