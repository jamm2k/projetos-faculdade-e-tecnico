#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int casos;
	float base, altura, area_retangulo, perimetro_retangulo, diagonal_retangulo;
	
	printf("MENU DE OPÇÕES\n\n1 - Calculo da area do retangulo\n2 - Calculo do perimetro do retangulo\n3 - Calculo da diagonal do retangulo\n4 - Sair do programa\n\n");
	scanf("%i", &casos);
	
	switch(casos) {
		case 1:
			printf("\nDigite a base e a altura do retangulo: ");
			scanf("%f%f", &base, &altura);
			area_retangulo = base * altura;
			printf("A area do retangulo e igual a %.1f", area_retangulo);
			break;
		
		case 2: 
			printf("\nDigite a base e a altura do retangulo: ");
			scanf("%f%f", &base, &altura);
			perimetro_retangulo = (base *2) + (altura * 2);
			printf("\nO perimetro do retangulo e igual a %.1f", perimetro_retangulo);
			break;
		
		case 3:
			printf("\nDigite a base e a altura do retangulo: ");
			scanf("%f%f", &base, &altura);
			diagonal_retangulo = sqrt((base*base) + (altura*altura));
			printf("A diagonal do retangulo e igual a %.1f", diagonal_retangulo);
			break;
			
		case 4:
			exit(0);
			
		default:
			printf("\nOpcao Invalida!");
	}
	
	
	unsigned x;
	
	getch();
	return 0;
}
