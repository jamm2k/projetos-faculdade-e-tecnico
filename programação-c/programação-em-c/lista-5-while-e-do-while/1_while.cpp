#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float numero;
	
	printf("Digite um número: ");
	scanf("%f", &numero);
	
	while(numero >= 1) {
		numero = numero / 2;
	}
	
	printf("Resultado da última divisão: %.2f\n", numero);
	
	getch();
	return 0;
}
