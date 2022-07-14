#include <stdio.h>
#include <stdlib.h>

int main()
	{
		float valorquilo, peso, precototal;
		
		printf("\nDigite o preco do quilo: ");
		scanf("%f", &valorquilo);
		printf("\nDigite o peso desejado: ");
		scanf("%f", &peso);
		
		precototal = valorquilo * peso;
		printf("\nO valor e igual a: R$%.1f", precototal);
		system("pause");
	}
