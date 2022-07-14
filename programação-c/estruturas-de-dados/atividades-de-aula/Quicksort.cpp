#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int defineDados (int vn []) {
	int i, a, n;
	
	printf("\nDigite a quantidade de numeros: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		printf("Digite o valor %d: ", i);
		scanf("%d", &a);
		vn[i-1] = a;
	}
	return (n);
}

void mostraDados (int n, int vn[]) {
	int i;
	printf("\n--- Todos os %d dados do vetor ---\n", n);
	for(i=0; i<n; i++){
		printf("%d ", vn[i]);
	}
	printf("\n-------------------------------------\n\n");
}

int organiza(int *V, int a, int b) {
	int esq, dir, pivo, aux;
	esq = a;
	dir = b;
	pivo = V[a];
	while (esq < dir) {
		while (V[esq] <= pivo)
			esq++;
		while(V[dir] > pivo)
			dir--;
		if(esq < dir) {
			aux = V[esq];
			V[esq] = V[dir];
			V[dir] = aux;
		}
	}
	V[a] = V[dir];
	V[dir] = pivo;
	return dir;
}

void quickSort (int *V, int a, int b) {
	int pivo;
	if(b > a) {
		pivo = organiza(V, a, b);
		quickSort(V, a, pivo-1);
		quickSort(V, pivo+1, b);
	}
}

int main ()
	{
		setlocale(LC_ALL, "Portuguese");
		
		defineDados();
		mostraDados();
		organiza();
		mostraDados();
		
		getch();
		return 0;
	}
