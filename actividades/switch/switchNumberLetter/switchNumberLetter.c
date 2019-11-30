#include<stdio.h>

int main() {
	int eNumber = 0;
	
	printf("Ingresa el valor del número en un rango entre el 1 y el 5: ");
	scanf("%i", &eNumber);
	
	switch(eNumber){
		case 1:
			printf("El equivalente en letra es a.");
			break;
		case 2:
			printf("El equivalente en letra es b.");
			break;
		case 3:
			printf("El equivalente en letra es c.");
			break;
		case 4:
			printf("El equivalente en letra es d");
			break;
		case 5:
			printf("El equivalente en letra es e");
			break;
		default:
			printf("No se encuentra dentro del rango.");
			break;
	}
}
