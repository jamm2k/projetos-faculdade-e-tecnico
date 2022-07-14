#include <stdio.h>
#include <stdlib.h>

int main()
	{
		int larguraparede = 5, alturaparede = 2, consumotinta = 3;
		float metrosquadrados, quantidadelatas;
		
		metrosquadrados = alturaparede*larguraparede;
		quantidadelatas = metrosquadrados*consumotinta/2;

		printf("Sera necessario %.1f latas\n", quantidadelatas);
		system("pause");
	}
