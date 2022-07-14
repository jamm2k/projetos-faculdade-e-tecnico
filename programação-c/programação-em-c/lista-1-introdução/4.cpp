#include <stdio.h>
#include <stdlib.h>

int main()
{
		int n1, n2, soma, multip;
		
		printf("Digite um numero inteiro:\n");
		scanf("%i", &n1);
		printf("Digite outro numero inteiro:\n");
		scanf("%i", &n2);
		
		soma = n1 + n2;
		printf("A soma entre esses numeros e: %i", soma);
		
		multip = n1 * n2;
		printf("\nA multiplicacao entre esses numeros e: %i\n", multip);
		
		system("pause");
}
