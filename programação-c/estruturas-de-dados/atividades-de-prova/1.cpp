#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int quadrado(float *a, int tam) 
{
	int i = 0;
	float B[tam];
	
	for(i=0; i<tam; i++){
		B[i]=a[i] * a[i];
		printf("O quadrado do %i elemento e igual a %.1f\n", i+1, B[i]);
	}
}

int somaValores(float *a1, int tam) 
{
	int x, y;
	float soma;
	
	printf("\n\nDigite x e y: ");
	scanf("%i%i", &x,&y);
	
	soma = a1[x] + a1[y];
	
	printf("\nA soma dos dois valores e igual a %.2f", soma);
}

int imprimePar(float *a2, int tam) 
{
	int resto, i;
	
	printf("\n\nValores pares: ");
	
	for(i = 0; i < tam; i++)
	{
		if(((int)a2[i] % 2) == 0) {
			
			printf("\n%.0f ", a2[i]);
		}
	}
}

int calculaMaiorValor(float *a3, int tam) {
	float maiorNumero = 0;
	int i;
	
	for(i = 0; i < tam; i++)
	{
		if (a3[i] > maiorNumero) 
		{
			maiorNumero = a3[i];
		}
	}
	
	printf("\n\nMaior numero do vetor: %.2f", maiorNumero);
}

int main() 
{
	int tam = 10;
	float A[tam];
	int i = 0;

	printf("Digite 10 numeros reais: ");
	
	for(i=0; i<tam; i++) 
	{
		scanf("%f", &A[i]);
	}

	//letra a
	
	quadrado(A, tam);
	
	//letra b
	
	somaValores(A, tam);
	
	//letra c
	
	imprimePar(A, tam);
	
	//letra d
	
	calculaMaiorValor(A, tam);

	return 0;
	getch();
}
