/*
	Name: Área y perímetro de un rectángulo.
	Copyright: 2019
	Author: Elizabeth Guerrero Torres
	Date: 16/12/19 15:02
	Description: Obtener la base y la altura de un rectángulo y respecto a los valores que se reciban, calcular el perímetro y la superficie.
	
	PSEUDOCÓDIGO
		0. Inicio
		1. Inicializar variables:
			1.1 fHeight <- 0
			1.2 fBase <- 0
			1.3 fPerimeter <- 0
			1.4 fArea <- 0
		2. Imprimir “dame el valor de la base.”
		3. Leer fBase
		4. Imprimir “dame el valor de la altura.”
		5. Leer fHeight
		6. Calcular fArea <- (fBase * fHeight)
		7. Calcular fPerimeter <- (fBase + fHeight) * 2
		8. Imprimir “El resultado del perímetro y el área es:” fPerimeter + “ ” + fArea.
		9. Fin
*/

//Biblioteca al preprocesador para funciones de entrada y salida principalmente.
#include<stdio.h> //standard input-ouput header

//Inicio del programa
int main() {
	//Inicializar variables
	float fHeight = 0; //variable de tipo float que recibirá la altura del rectángulo.
	float fBase = 0; // variable de tipo float que recibirá la base del rectángulo.
	float fPerimeter = 0; // variable de tipo float que almacenará el perímetro del rectángulo.
	float fArea = 0; // variable de tipo float que almacenará el área del rectángulo.
	
	//Se le pide al usuario que ingrese la base del recángulo.
	printf("Escribe el valor de la base: ");
	//Se lee el valor de la base.
	scanf("%f", &fBase);
	
	//Se le pide al usuario que ingrese el valor de la altura.
	printf("Escribe el valor de la altura: ");
	//Se lee el valor dela altura.
	scanf("%f", &fHeight);
	
	//Se hacen la operación correcpondiente para calcular el área del rectángulo.
	fArea = fBase * fHeight;
	//Se hace la expresión correspondiente para calcular el perímetro del rectángulo.
	fPerimeter = (fBase + fHeight) * 2;
	
	//Se imprime el resultado de perímetro y el área.
	printf("El resultado del perímetro es %.2f y el resultado del área es %.2f", fPerimeter, fArea);
} //Fin del programa.
