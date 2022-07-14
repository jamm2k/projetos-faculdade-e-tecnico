#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

void criaIntersecao(int *a1, int *b1, int tam)
{
	for(i = 0; i < tam; i++)
	{
		if()
	}
}

void criaUniao(int *a2, int *b2, int tam)
{
	
}


int main() 
{
	setlocale(LC_ALL, "portuguese");
	
	int tam = 10, i;
	int A[tam], B[tam];

	printf("Digite 10 numeros inteiros (vetA): ");
	for(i=0; i < tam; i++) 
	{
		scanf("%i", &A[i]);
	}
	
	printf("\nDigite 10 numeros inteiros (vetB): ");
	for(i=0; i < tam; i++) 
	{
		scanf("%i", &B[i]);
	}
	
	criaIntersecao(A, B, tam);
	criaUniao(A, B, tam);
	
	return 0;
	getch();
}
