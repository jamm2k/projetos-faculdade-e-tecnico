#include <stdio.h>
#include <stdlib.h>

int main()
	{
		float precofabrica, preco;
		char automovel[30];
		
		printf("Digite o nome do automovel: ");
		scanf("%s", automovel);
		printf("\nDigite o preco de fabrica: ");
		scanf("%f", &precofabrica);
		
		preco = precofabrica * (1+0.45+0.28);
		
		printf("\nAutomovel: %s", automovel);
		printf("\nPreco final: R$%f\n", preco);
		system("pause");
	}
