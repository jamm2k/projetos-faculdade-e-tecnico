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
					printf("bebê");
					break;
				
				case 4 ... 10:
					printf("criança");
					break;
				
				case 11 ... 18:
					printf("adolescente");
					break;
				
				default:
					printf("O valor informado não é válido.");
			}	
		}
					
		getch();
		return 0;
	}
