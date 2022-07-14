#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
	{
		int Vx[50], Vy[50], n, i, Cx = 0, Cy = 0;
		
		//Recebe a quantidade de pontos
		printf("Digite n: ");
		scanf("%d", &n);
		
		//Mostra todos os pontos
		srand((unsigned)time(NULL));
		for(i = 0; i<n; i++)
		{
			Vx[i] = rand() % 99;
			Vy[i] = rand() % 99;
			printf("Ponto %d: (%d,%d)\n", i+1, Vx[i], Vy[i]);
		}
		
		//Calculo do centro
		for(i = 0; i<n; i++)	
		{
			Cx = Cx + Vx[i];
			Cy = Cy + Vy[i];
		}
		Cx = Cx/n;
		Cy = Cy/n;
		
		//Mostra centro calculado
		printf("\nCentro: (%d,%d)\n\n", Cx, Cy);
		
		//Distancia entre cada ponto e o centro
		for(i = 0; i<n; i++)	
		{
			Vx[i] = abs(Vx[i]-=Cx);
			Vy[i] = abs(Vy[i]-=Cy);
		}
		
		//Mostra Vx e Vy
			for(i = 0; i<n; i++)
		{
			printf("Distancia %d: (%d,%d)\n", i+1, Vx[i], Vy[i]);
		}
	}
