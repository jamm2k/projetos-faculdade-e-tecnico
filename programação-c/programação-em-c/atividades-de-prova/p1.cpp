#include <stdio.h>
#include <stdlib.h>

int main(){
		int velocidademed_treino = 240, duracao_treino = 2, litros_treino = 40, voltas_total, reabasts_totais; 
		float consumof1, consumo_metrosporl, comprim_pista, preco, litros_min, gasto_combustivel;

		consumof1 = (velocidademed_treino * duracao_treino) / litros_treino;
		consumo_metrosporl = consumof1 * 1000;
		
		printf("Descreva o comprimento da pista:");
		scanf("%f", &comprim_pista);
		printf("diga o total de voltas do GP:");
		scanf("%i", &voltas_total);
		printf("coloque o numero de abastecimentos desejados no GP:");
		scanf("%i", &reabasts_totais);
		printf("Escreva o preco atual do litro do combustivel:R$");
		scanf("%f", &preco);
		
		litros_min = ((comprim_pista * voltas_total) / reabasts_totais) / consumo_metrosporl;
		
		gasto_combustivel = preco * litros_min;
		
		printf("A quantidade minima de litros de combustivel ate o primeiro reabastecimento e de %.2f\n", litros_min); 
		printf("O total gasto ate o primeiro reabastecimento do carro e de R$%.2f\n", gasto_combustivel);
		
		system("pause");
}
