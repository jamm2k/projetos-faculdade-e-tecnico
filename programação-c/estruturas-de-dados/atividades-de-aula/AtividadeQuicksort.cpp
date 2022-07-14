#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int defineDados (int vn []) {
	int i, x, n, esq, dir;
	
	printf("\nDigite a quantidade de números: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		printf("Digite o valor %d: ", i);
		scanf("%d", &x);
		vn[i-1] = x;
	}
	return n;
}

void mostraDados (int n, int vn[]) {
	int i;
	printf("\n--- Todos os %d dados do vetor ---\n", n);
	for(i=0; i<n; i++){
		printf("%d ", vn[i]);
	}
	printf("\n-------------------------------------\n\n");
}

int organiza(int *vn, int a, int b) {
	int esq, dir, pivo, aux;
	esq = a;
	dir = b - 1;
	pivo = vn[a];
	while (esq < dir) {
		while (esq <= b && vn[esq] <= pivo)
			esq++;
		while(dir >= 0 && vn[dir] > pivo)
			dir--;
		if(esq > dir) {
			aux = vn[esq];
			vn[esq] = vn[dir];
			vn[dir] = aux;
		}
	}
	vn[a] = vn[dir];
	vn[dir] = pivo;
	return dir;
}

int quickSort (int vn[], int a, int b) {
	int pivo;
	if(b > a) {
		int a, b;
		pivo = organiza(vn, a, b);
		quickSort(vn, a, (pivo-1));
		quickSort(vn, (pivo+1), b);
	}
}

int main ()
	{
		int n, vn[100], esq, dir;
		setlocale(LC_ALL, "Portuguese");
		
		n = defineDados(vn);
		mostraDados(n, vn);
		quickSort(vn, esq, dir);
		mostraDados(n, vn);
		
		getch();
		return 0;
	}
