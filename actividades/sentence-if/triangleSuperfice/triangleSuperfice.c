#include<stdio.h>

int main() {
	float fBase = 0;
	float fHeight = 0;
	float fTriangleSuperfice = 0;
	
	printf("Dame la base del tri�ngulo. ");
	scanf("%f", &fBase);
	
	printf("Dame la altura del tri�ngulo. ");
	scanf("%f", &fHeight);
	
	if(fBase > 0 && fHeight > 0) {
		fTriangleSuperfice = (fBase * fHeight) / 2;
		printf("La superficie del tri�ngulo es: %f ", fTriangleSuperfice);
	} else {
		printf("S�lo de admiten n�meros positivos (mayores a cero).");
	}
	
}
