#include <stdio.h>
#include <stdlib.h>

int main()
	{
		float salariobruto, salarioliquido, desconto, ir;
		
		printf("Digite o salario bruto: ");
		scanf("%f", &salariobruto);
		printf("Digite o desconto do INSS: ");
		scanf("%f", &desconto);
		printf("Digite o desconto do IR: ");
		scanf("%f", &ir);
		salarioliquido = salariobruto - desconto - ir;
		
		printf("\nO salario liquido e igual a %f", salarioliquido);
		system("pause");
	}
