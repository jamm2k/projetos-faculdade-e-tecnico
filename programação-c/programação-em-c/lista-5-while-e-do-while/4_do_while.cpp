#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int N, contador = 1;
	float total, numero_atual;
	
	printf("\nDigite a quantidade de numeros a serem somados: ");
	scanf("%i", &N);
	
	do
	{
		printf("\nDigite o %iº numero a ser somado: ", contador);
		scanf("%f", &numero_atual);
		total =  total + numero_atual;
		contador++;		
	} while(contador <= N);
	
	printf("\nA soma de todos os numeros e igual a: %.2f", total);
	
	getch();
	return 0;
}
