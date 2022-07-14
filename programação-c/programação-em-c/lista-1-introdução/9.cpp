#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
		char nome[30], sobrenome[30];
		
		printf("Digite o seu nome: ");
		scanf("%s", &nome);
		printf("Digite o seu sobrenome: ");
		scanf("%s", &sobrenome);
		strcat(nome, sobrenome);
		printf("%s", nome);
		
		system("pause");
	}
