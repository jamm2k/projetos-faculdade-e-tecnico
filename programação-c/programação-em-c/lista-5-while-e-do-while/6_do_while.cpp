#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char letra_atual[2], a[] = "a", e[] = "e", i[] = "i", o[] = "o", u[] = "u", finalizador[2] = "Z";
	int contador = 0;
	
	printf("\nO programa ira contar a quantidade de vogais digitadas.\nPara isso, digite cada letra e em seguida aperte ENTER!\nDigite apenas letras minusculas para a contagem.\nPara finalizar o programa digite 'Z'!\n");
	
	do
	{
		fflush(stdin);
		printf("\nDigite uma letra a seguir: ");
		scanf("%c", &letra_atual);
		
		if(strcmp(letra_atual, finalizador) == 0) {
			break;
		}
		
		if(
		strcmp(a, letra_atual) == 0 ||
		strcmp(e, letra_atual) == 0 ||
		strcmp(i, letra_atual) == 0 ||
		strcmp(o, letra_atual) == 0 ||
		strcmp(u, letra_atual) == 0
		) {
			contador++;
		}
	} while(1);
	
	printf("A quantidade de vogais foi igual a %i", contador);
	
	getch();
	return 0;
}
