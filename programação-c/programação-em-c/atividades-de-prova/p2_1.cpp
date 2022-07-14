#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <string.h>

int calcula_media_individual(float nota_p1, float nota_p2) {
	float media_individual;
	
	media_individual = (nota_p1 + nota_p2)/2;
}

int calcula_media_geral(float somatorio_notas, int quantidade_alunos) {
	float media_geral;
	
	media_geral = somatorio_notas / quantidade_alunos;
}

int calcula_percentuais(int quantidade_aprovados, int quantidade_reprovados, int quantidade_alunos) {
	float percentual_aprovados, percentual_reprovados;
	
	percentual_aprovados = (quantidade_aprovados / quantidade_alunos) * 100;
	percentual_reprovados = (quantidade_reprovados / quantidade_alunos) * 100;
	
	printf("\nO percentual de alunos aprovados foi de: %f%%", percentual_aprovados);
	printf("\nO percentual de alunos reprovados foi de: %f%%", percentual_reprovados);
}

int compara_maior_media(float media_individual, char nome_aluno[20]) {
	float maior_media = 0;
	char aluno_maior_media[20];
	
	if(media_individual > maior_media) {
		maior_media = media_individual;
		strcpy(nome_aluno, aluno_maior_media);
	}
}

int compara_menor_media(float media_individual, char nome_aluno[20]) {
	float menor_media = 100;
	char aluno_menor_media[20];
	
	if(media_individual < menor_media) {
		menor_media = media_individual;
		strcpy(nome_aluno, aluno_menor_media);
	}
}

int exibe_resultado_do_aluno(float media_individual, char nome_aluno[20], int contador) {
	int quantidade_aprovados, quantidade_reprovados;
	
	printf("\nAluno: %s\nMédia = %f", contador, nome_aluno, media_individual);

	if(media_individual >= 6) {
		printf("\nAPROVADO!");
		quantidade_aprovados = quantidade_aprovados + 1;
	} else {
		printf("\nREPROVADO!");
		quantidade_reprovados = quantidade_reprovados + 1;
	}
	
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int contador, quantidade_alunos, quantidade_aprovados, quantidade_reprovados;
	float nota_p1, nota_p2, somatorio_notas, media_individual, maior_media, menor_media;
	char nome_aluno[20], aluno_menor_media[20], aluno_maior_media[20];
	
	printf("Digite a quantidade de alunos: ");
	scanf("%i", &quantidade_alunos);
	
	for(contador = 1; contador <= quantidade_alunos; contador++) {
		printf("\n%iº aluno:\nDigite, respectivamente, o nome do aluno, a nota da P1 e a da P2 desse aluno: ", contador);
		scanf("%s", &nome_aluno);
		scanf("%f%f", &nota_p1, &nota_p2);
		
		calcula_media_individual(nota_p1, nota_p2);
		compara_maior_media(media_individual, nome_aluno);
		compara_menor_media(media_individual, nome_aluno);
		exibe_resultado_do_aluno(media_individual, nome_aluno, contador);
		
		
		somatorio_notas = somatorio_notas + media_individual;
	}
	
	printf("\nA maior média foi %.1f obtida pelo aluno %s", maior_media, aluno_maior_media);	
	printf("\nA menor média foi %.1f obtida pelo aluno %s", menor_media, aluno_menor_media);
	
	calcula_percentuais(quantidade_aprovados, quantidade_reprovados, quantidade_alunos);
	
	getch();
	return 0;
}
