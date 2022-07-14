#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int cont, num, fim = 10, resultado_atual;
	
	printf("\nDigite um numero inteiro de 1 a 9: ");
	scanf("%i", &num);
	
	for(cont = 1; cont <= fim; cont++) {
		resultado_atual = cont * num;
		printf("\n%i x %i = %i", num, cont, resultado_atual);
	}
	
	getch();
	return 0;
}
