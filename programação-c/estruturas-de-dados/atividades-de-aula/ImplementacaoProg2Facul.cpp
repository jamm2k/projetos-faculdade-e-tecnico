#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int defineDados (int vn []) {
	int i, a, n;
	
	printf("\nDigite n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		printf("Digite o valor %d: ", i);
		scanf("%d", &a);
		vn[i-1] = a;
	}
	return (n);
}

int ordenaPar (int n, int vn []) {
	int troca, a, pv, i;
	
	do {
		troca = 0;
		pv = vn[0];
		for(i=1; i<n; i++){
			a = vn[i];
			if (pv > a){
				vn[i-1] = a;
				vn [i] = pv;
				troca++;
			} else {
				pv = a;
			}
		}
	} while (troca);
}

void mostraDados (int n, int vn[]) {
	int i;
	printf("\n--- Todos os %d dados do vetor ---\n", n);
	for(i=0; i<n; i++){
		printf("%d ", vn[i]);
	}
	printf("\n-------------------------------------\n");
}


int main()
	{
		setlocale(LC_ALL, "Portuguese");
		
		int n, vn[100];
		n = defineDados(vn);
		mostraDados(n, vn);
		ordenaPar(n, vn);
		mostraDados(n, vn);
					
		getch();
		return 0;
	}
