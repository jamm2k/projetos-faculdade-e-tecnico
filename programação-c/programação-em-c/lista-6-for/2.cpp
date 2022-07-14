#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <conio.h>

//funcao para verificar se o valor digitado foi igual a zero
int verifica_zero(int N) {
	if(N == 0) {
		return 0;
	}
}

//funcao para mostrar na tela os numeros pares
int verifica_par(int N) {
	int resto, result_div, cont;
	
	for(cont = 2; cont <= N; cont++) {
		resto = cont%2;
		result_div = cont/2;
				
		verifica_zero(N);
		
		if(resto == 0) {
			printf("\n%i", cont);
		}		
	}
}

//funcao para mostrar na tela os numeros impares
int verifica_impar(int N) {
	int resto, result_div, cont;
	
	for(cont = N; cont >= 0; cont--) {
		resto = cont%2;
		result_div = cont/2;
			
		verifica_zero(N);
		
		if(resto == 1) {
			printf("\n%i", cont);
		}		
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int N, primeiro_par = 0;
	
	printf("Digite um numero inteiro positivo: ");
	scanf("%i", &N);
	
	printf("\nNumeros pares:\n%i", primeiro_par);
	
	verifica_par(N);
	
	printf("\n\nNumeros impares:");
	
	verifica_impar(N);
	
	getch();
	return 0;
}
