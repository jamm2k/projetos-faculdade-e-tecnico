#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main()
	{
		setlocale(LC_ALL, "Portuguese");
		
		int nota;
		
		printf("Digite a sua nota: ");
		scanf("%i", &nota);
		
		switch(nota)
		{
			case 0 ... 49:
				printf("O seu conceito � D");
				break;
				
			case 50 ... 69:
				printf("O seu conceito � C");
				break;
				
			case 70 ... 89:
				printf("O seu conceito � B");
				break;
			
			case 90 ... 100:
				printf("O seu conceito � A");
				break;
			
			default:
				printf("O valor informado n�o � v�lido. Digite um valor entre 0 e 100.");
		}
				
		getch();
		return 0;
	}
