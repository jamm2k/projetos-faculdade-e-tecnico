#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
		int a = 5, b = 10, c = -2, calc1, calc2;
		
		calc1 = (b/a) % c;
		printf("Letra a: %i", calc1);
		calc2 = sqrt(c*c+b/a+3);
		printf("\nLetra b: %i", calc2);
		
		system("pause");
	}
