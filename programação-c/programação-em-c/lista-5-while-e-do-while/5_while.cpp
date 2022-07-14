#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int N, maior_numero = 0, contador = 1, numero_atual;
	
	printf("Digite a quantidade de números: ");
	scanf("%i", &N);
	printf("\n");
	
	//a variavel maior_numero mantera sempre o maior numero digitado pelo usuario
	while(contador <= N) {
		printf("Digite o %iº número: ", contador);
		scanf("%i", &numero_atual);
		if(numero_atual > maior_numero){
			maior_numero = numero_atual;
		}
		contador++;
	}
	
	printf("\nO maior número é: %i", maior_numero);
	
	getch();
	return 0;
}
