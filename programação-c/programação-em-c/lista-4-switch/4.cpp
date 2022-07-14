#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main()
	{
		setlocale(LC_ALL, "Portuguese");
		
		int numero;
		
		printf("Digite um número de 0 a 9: ");
		scanf("%i", &numero);
		
		switch(numero){
			case 0: case 2: case 4: case 6: case 8:
				printf("O número é par!");
				break;
				
			case 1: case 3: case 5: case 7: case 9:
				printf("O número é ímpar!");
				break;
				
			default:
				printf("Erro! Deve ser digitado um valor de 0 a 9.");		
		}
		
		getch();
		return 0;
	}
