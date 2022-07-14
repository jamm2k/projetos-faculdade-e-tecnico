#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

void mostraMultiplos(int *a1, int tam)
{
	int x, i, a;
	
	printf("Digite x: ");
	scanf("%i", &x);
	
	printf("\nValores multiplos: ");
	
	for(i = 0; i < tam; i++)
	{
		a = a1[i];
		if((a % x) == 0) {
			printf("%i ", a);
		}
	}
	
}
void imparesA(int *a2, int tam)
{
	int i, j = 0, I[tam];
	
	printf("\nVetor de impares: ");
	
	for(i = 0; i < tam; i++)
	{
		if(a2[i]%2 == 1) 
		{
			I[j] = a2[i];
			j++;
		}
	}
	
	for(i = 0; i < j; i++)
	{
		printf("%i ", I[i]);
	}
	
}
int subtracaoAB(int *a3, int *b3, int tam)
{
	int i, subtracao[tam];
	
	for(i = 0; i < tam; i++)
	{
		subtracao[i] = a3[i] - b3[i];
	}
	
	printf("\n\nVetor subtracao: ( ");
	
	for(i = 0; i < tam; i++)
	{
		printf("%i ", subtracao[i]);
	}
	
	printf(")");
}

void vetorC(int *a4, int *b4, int tam)
{
	int i, C[tam];
	
	for(i = 0; i < tam; i++)
	{
		if(i%2 == 0) 
		{
			C[i] = a4[i];
		} else {
			C[i] = b4[i];
		}
	}
	
	for(i = 0; i < tam; i++)
	{
		printf("%i ", C[i]);
	}
	
}

int main() 
{
	setlocale(LC_ALL, "portuguese");
	
	int tam = 10, i, menu;
	int A[tam], B[tam];

	printf("Digite 10 numeros inteiros (vetA): ");
	for(i=0; i<tam; i++) 
	{
		scanf("%i", &A[i]);
	}
	
	printf("\nDigite 10 numeros inteiros (vetB): ");
	for(i=0; i<tam; i++) 
	{
		scanf("%i", &B[i]);
	}
	
	system("cls");
	
	while(1)
	{
		
		printf("Menu\n");
		printf("\n1. Mostrar múltiplos de X no vetor A");
		printf("\n2. Criar e mostrar vetor de números ímpares extraído do vetor A");
		printf("\n3. Calcular e mostrar a Subtração de vetores: A – B");
		printf("\n4. Criar e mostrar um vetor C que contem nas posições pares os valores de A e nas posições impares os valores de B\n\n");
		scanf("%i", &menu);
		
		switch(menu) 
		{
			case 1:
				mostraMultiplos(A, tam);
				
				printf("\n\n");
				break;
				
			case 2:
				imparesA(A, tam);
				
				printf("\n\n");
				break;
				
			case 3:
				subtracaoAB(A, B, tam);
				
				printf("\n\n");
				break;
				
			case 4:
				vetorC(A, B, tam);
				
				printf("\n\n");
				break;
				
			default:
				printf("Digite apenas as opções válidas\n\nAperte qualquer tecla para tentar novamente...\n");
				getch();
				system("cls");
		}
		
	}

	return 0;
	getch();
}
