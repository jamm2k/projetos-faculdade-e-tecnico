#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()	{		
		float n1, n2, p1, p2, ms, mp, mg;
		
		printf("Nota da avaliacao 1: ");
		scanf("%f", &n1);
		printf("Peso da avaliacao 1: ");
		scanf("%f", &p1);
		printf("Nota da avaliacao 2: ");
		scanf("%f", &n2);
		printf("Peso da avaliacao 2: ");
		scanf("%f", &p2);
		
		ms = (n1+n2) / 2;
		mp = ((n1*p1) + (n2*p2))/ (p1+p2);
		mg = sqrt(n1 * n2);
		
		printf("A media aritmetica simples e: %.2f", ms);
		printf("\nA média aritmetica ponderada e: %.2f", mp);
		printf("\nA média aritmetica geometrica e: %.2f", mg);
		system("pause");
	}		
