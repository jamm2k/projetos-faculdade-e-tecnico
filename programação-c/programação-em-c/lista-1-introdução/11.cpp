#include <stdio.h>
#include <stdlib.h>

int main(){
		char produto1[50], produto2[50], produto3[50];
		int quantidade1, quantidade2, quantidade3;
		float preco1, preco2, preco3, valor1, valor2, valor3, precofinal;
		
		printf("Digite o nome do primeiro produto: ");
		scanf("%s", &produto1);
		printf("Digite o preco do primeiro produto: ");
		scanf("%f", &preco1);
		printf("Digite a quantidade do primeiro produto: ");
		scanf("%i", &quantidade1);
		printf("Digite o nome do segundo produto: ");
		scanf("%s", &produto2);
		printf("Digite o preco do segundo produto: ");
		scanf("%f", &preco2);
		printf("Digite a quantidade do segundo produto: ");
		scanf("%i", &quantidade2);
		printf("Digite o nome do terceiro produto: ");
		scanf("%s", &produto3);
		printf("Digite o preco do terceiro produto: ");
		scanf("%f", &preco3);
		printf("Digite a quantidade do terceiro produto: ");
		scanf("%i", &quantidade3);
		
		valor1 = preco1 * quantidade1;
		valor2 = preco2 * quantidade2;
		valor3 = preco3 * quantidade3;
		precofinal = valor1+valor2+valor3;
				
		printf("\nValor total da compra: R$%f", precofinal);
		system("pause");
	}
