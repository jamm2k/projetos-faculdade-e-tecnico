#include <stdio.h>
#include <stdlib.h>

int main()
	{
		float fahr, celc;
		
		printf("Digite a temperatura em Fahremheit: ");
		scanf("%f", &fahr);
		
		celc = (fahr - 32) * 5 / 9;
		printf("A temperatura referente em Celsius e igual a: %.1f", celc);
		system("pause");
	}
