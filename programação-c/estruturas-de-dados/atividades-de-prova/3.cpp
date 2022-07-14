#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int calculaMedia(float *a1, int tam) 
{
	int i;
	float media, soma;
	
	for(i = 0; i < tam; i++)
	{
		soma = soma + a1[i];
	}
	
	media = soma / tam;
	
	printf("A media geral da turma foi de %.2f", media);
}

int calculaAprovados(float *a2, int tam)
{
	int i, quantidadeAprovados = 0, quantidadeRecuperacao = 0;
	
	for(i = 0; i < tam; i++)
	{
		if(a2[i] >= 6.0) {
			quantidadeAprovados++;
		} else {
			quantidadeRecuperacao++;
		}
	}
	
	printf("\n\nAprovados: %i\nRecuperacao: %i", quantidadeAprovados, quantidadeRecuperacao);
	
}

int main() 
{
	int tam = 15;
	float A[tam];
	int i = 0;

	printf("Digite 15 numeros reais: ");
	
	for(i=0; i<tam; i++) 
	{
		scanf("%f", &A[i]);
	}

	//letra a
	
	calculaMedia(A, tam);
	
	//letra b
	
	calculaAprovados(A, tam);

	return 0;
	getch();
}
