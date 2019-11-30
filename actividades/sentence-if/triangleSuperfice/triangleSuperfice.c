#include<stdio.h>

int main() {
	float fBase = 0;
	float fHeight = 0;
	float fTriangleSuperfice = 0;
	
	printf("Dame la base del triángulo. ");
	scanf("%f", &fBase);
	
	printf("Dame la altura del triángulo. ");
	scanf("%f", &fHeight);
	
	if(fBase > 0 && fHeight > 0) {
		fTriangleSuperfice = (fBase * fHeight) / 2;
		printf("La superficie del triángulo es: %f ", fTriangleSuperfice);
	} else {
		printf("Sólo de admiten números positivos (mayores a cero).");
	}
	
}
