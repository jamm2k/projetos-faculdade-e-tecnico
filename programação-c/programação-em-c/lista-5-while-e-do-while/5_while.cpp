#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int N, maior_numero = 0, contador = 1, numero_atual;
	
	printf("Digite a quantidade de n�meros: ");
	scanf("%i", &N);
	printf("\n");
	
	//a variavel maior_numero mantera sempre o maior numero digitado pelo usuario
	while(contador <= N) {
		printf("Digite o %i� n�mero: ", contador);
		scanf("%i", &numero_atual);
		if(numero_atual > maior_numero){
			maior_numero = numero_atual;
		}
		contador++;
	}
	
	printf("\nO maior n�mero �: %i", maior_numero);
	
	getch();
	return 0;
}
