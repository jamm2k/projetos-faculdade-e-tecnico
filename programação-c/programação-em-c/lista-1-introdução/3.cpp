#include <stdio.h>
#include <stdlib.h>


int main()
	{
		int numero, dobro, quadrado;
		
		printf("Digite um numero inteiro: ");
		scanf("%i", &numero);
		
		dobro = numero * 2;
		printf("\nO dobro desse numero e %i", dobro);
		
		quadrado = numero * numero;
		printf("\nO quadrado desse mesmo numero e: %i\n", quadrado);
		
		system("pause");
	}
