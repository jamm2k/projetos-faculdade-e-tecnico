#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float percentual_invalidos, votos_candidato_a, votos_candidato_b, votos_candidato_c, brancos_e_nulos, total_de_votos;
	
	printf("Digite o total de votos dos candidados A, B e C: ");
	scanf("%f%f%f", &votos_candidato_a, &votos_candidato_b, &votos_candidato_c);
	printf("\nDigite agora a quantidade de votos brancos e nulos: ");
	scanf("%f", &brancos_e_nulos);
	
	total_de_votos = votos_candidato_a + votos_candidato_b + votos_candidato_c + brancos_e_nulos;
	percentual_invalidos = brancos_e_nulos / total_de_votos * 100;
		
	printf("\n\nO total de votos foi igual a %.0f", total_de_votos);
	printf("\nO percentual de votos invalidos foi igual a %.1f%%", percentual_invalidos);
	
	if((votos_candidato_a > votos_candidato_b) && (votos_candidato_a > votos_candidato_c)) {
		printf("\nO vencedor foi o candidato A!");
	} else if((votos_candidato_b > votos_candidato_a) && (votos_candidato_b > votos_candidato_c)) {
		printf("\nO vencedor foi o candidato B!");
	} else {
		printf("\nO vencedor foi o candidato C!");
	}
	
	if(percentual_invalidos >= 50) {
		printf("\nHavera segundo turno!");
	} else {
		printf("\nNao havera segundo turno!");
	}
	
	getch();
	return 0;
}
