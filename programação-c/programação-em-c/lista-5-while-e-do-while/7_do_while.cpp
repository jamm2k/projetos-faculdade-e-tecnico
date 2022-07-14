#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char nome_cidade[30], finalizador[] = "fim", campos[] = "Campos";
	int populacao, contador_campos = 0, contador_total = 0;
	
	printf("Para finalizar o programa, digite 'fim'\n\n");
	
	/*
	precisei da instrucao [^\n] para poder aceitar espacos (alias, para poder aceitar TUDO ate que o usuario digite enter)
	para que a implementacao funcionasse razoavelmente bem, precisei da funcao 'fflush(stdin)' para limpar o buffer do teclado
	*/
	do
	{
		printf("Digite o nome da cidade e sua respectiva populacao: ");
		fflush(stdin);
		scanf("%[^\n]", &nome_cidade);
		
		if(strcmp(nome_cidade, finalizador) == 0){
			printf("\n\nFim do programa!");
			break;
		}
			
		if(strcmp(nome_cidade, campos) == 0){
			contador_campos++;
		}
		
		scanf("%i", &populacao);
		contador_total++;
	} while(1);
	
	printf("\n\nA palavra 'Campos' foi digitada %i vez(es)!", contador_campos);
	printf("\nO total de cidades digitadas foi igual a %i", contador_total);
	
	getch();
	return 0;
}
