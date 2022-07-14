#include <stdio.h>
#include <stdlib.h>

int main()
	{
		float deslocamento, tempo, vm;
		
		printf("Digite o deslocamento do veiculo em km: ");
		scanf("%f", &deslocamento);
		printf("Digite o tempo em horas que ele levou para se deslocar: ");
		scanf("%f", &tempo);
		
		vm = deslocamento/tempo;
		
		printf("\nA velocidade media e igual a %.1f", vm);
		system("pause");
	}
