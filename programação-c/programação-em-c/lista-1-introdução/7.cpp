#include <stdio.h>
#include <stdlib.h>

int main()
	{		
		float base, altura, area;
		
		printf("Digite a altura do triangulo:");
		scanf("%f", &altura);
		printf("\nDigite a base do triangulo");
		scanf("%f", &base);
		area = (altura * base) / 2;
		printf("A area do triangulo e igual a: %f", area);
		
		system("pause");
	}
