#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int contador = 0;
	float soma = 0, ma, numero_atual;
	
	printf("\nO programa fará a média aritmética entre vários números.\nPara finalizar digite '9999'!\n\n");
	
	do
	{
		printf("Digite um numero: ");
		scanf("%f", &numero_atual);
		printf("O numero digitado foi %f\n", numero_atual);
		
		if(numero_atual == 9999) {
			break;
		}
		
		soma = soma + numero_atual;
		contador++;	
	} while(1);

	ma = soma/contador;
	printf("\n\nA média aritmética entre todos os números é de: %.2f", ma);
	
	getch();
	return 0;
}
