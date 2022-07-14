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
	
	while(contador <= N){
		printf("\nDigite o %iº numero a ser somado: ", contador);
		scanf("%f", &numero_atual);
		total =  total + numero_atual;
		contador++;		
	}
	
	printf("\nA soma de todos os numeros e igual a: %.2f", total);
	
	getch();
	return 0;
}
