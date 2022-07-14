#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float percentualimpares, media, quantidadeimpares=0, total;
	int numeroatual=1, quantidade;
	
	printf("DIgite numeros inteiros positivos\n\npara finalizar digite 0\n\n");
	
	while(numeroatual > 0) {
		scanf("%i", &numeroatual);
		quantidade++;
		
		if((numeroatual%2) != 0){
			quantidadeimpares++;
		}
		
		total = total + numeroatual;
	}
	
	quantidade--;
	
	percentualimpares = quantidadeimpares/quantidade*100;
	
	media = total/quantidade;
	
	printf("Quantidade de numeros informados: %i\nMedia: %.1f\nPercentual de impares: %.1f%%\n\n", quantidade,media, percentualimpares);

	system("pause");
}
