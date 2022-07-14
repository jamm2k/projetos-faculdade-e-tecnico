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
				printf("O seu conceito é D");
				break;
				
			case 50 ... 69:
				printf("O seu conceito é C");
				break;
				
			case 70 ... 89:
				printf("O seu conceito é B");
				break;
			
			case 90 ... 100:
				printf("O seu conceito é A");
				break;
			
			default:
				printf("O valor informado não é válido. Digite um valor entre 0 e 100.");
		}
				
		getch();
		return 0;
	}
