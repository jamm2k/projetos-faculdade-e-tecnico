#include <stdio.h>
#include <stdlib.h>

int main()
	{
		int n1, n2, divisao, resto;
				
		printf("Digite o primeiro numero: ");
		scanf("%i", &n1);
		printf("\nDigite o segundo numero ");
		scanf("%i", &n2);
	
		divisao = n1 / n2;
		printf("\nA divisao inteira e: %i", divisao);
		resto = n1 % n2;
		printf("\nO resto da divisao e: %i", resto);
		
		system("pause");
	}
