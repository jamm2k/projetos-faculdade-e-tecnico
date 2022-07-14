#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int numero_secreto, palpite, tentativas = 1;
	
	/*
	Optei por fazer um jogo de adivinhacao, dadas as instrucoes propostas na questao
	
	Inventei algumas regras apenas para que o bom funcionamento seja responsabilidade do usuario, sem necessidade de sanitização
	*/
	
	printf("Bem vindo ao jogo de adivinhação!\n\nPara iniciarmos, digite o número secreto de até dois dígitos para que o outro jogador possa descobrir: ");
	scanf("%i", &numero_secreto);
	system("cls");
	printf("O número secreto foi definido com sucesso!\n\nRegras:\n1. O jogador tem chances infinitas para adivinhar o número secreto;\n2. O número deve ser inteiro entre 0 e 99.\n\nVamos lá!\n\n");
	
	//quando o numero for descoberto, sera retornado "false" para finalizar o loop "infinito"
	while(true) {
		printf("\nDigite o seu palpite: ");
		scanf("%i", &palpite);
		printf("Tentativa %i: %i\n\n",tentativas, palpite);
		if(palpite == numero_secreto){
			printf("\nParabens! Você acertou com %i tentativas! O número secreto era: %i\n\n", tentativas, numero_secreto);
			return false;
		}
		tentativas++;
	}
	
	getch();
	return 0;
}
