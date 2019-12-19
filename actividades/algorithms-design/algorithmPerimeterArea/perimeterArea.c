/*
	Name: �rea y per�metro de un rect�ngulo.
	Copyright: 2019
	Author: Elizabeth Guerrero Torres
	Date: 16/12/19 15:02
	Description: Obtener la base y la altura de un rect�ngulo y respecto a los valores que se reciban, calcular el per�metro y la superficie.
	
	PSEUDOC�DIGO
		0. Inicio
		1. Inicializar variables:
			1.1 fHeight <- 0
			1.2 fBase <- 0
			1.3 fPerimeter <- 0
			1.4 fArea <- 0
		2. Imprimir �dame el valor de la base.�
		3. Leer fBase
		4. Imprimir �dame el valor de la altura.�
		5. Leer fHeight
		6. Calcular fArea <- (fBase * fHeight)
		7. Calcular fPerimeter <- (fBase + fHeight) * 2
		8. Imprimir �El resultado del per�metro y el �rea es:� fPerimeter + � � + fArea.
		9. Fin
*/

//Biblioteca al preprocesador para funciones de entrada y salida principalmente.
#include<stdio.h> //standard input-ouput header

//Inicio del programa
int main() {
	//Inicializar variables
	float fHeight = 0; //variable de tipo float que recibir� la altura del rect�ngulo.
	float fBase = 0; // variable de tipo float que recibir� la base del rect�ngulo.
	float fPerimeter = 0; // variable de tipo float que almacenar� el per�metro del rect�ngulo.
	float fArea = 0; // variable de tipo float que almacenar� el �rea del rect�ngulo.
	
	//Se le pide al usuario que ingrese la base del rec�ngulo.
	printf("Escribe el valor de la base: ");
	//Se lee el valor de la base.
	scanf("%f", &fBase);
	
	//Se le pide al usuario que ingrese el valor de la altura.
	printf("Escribe el valor de la altura: ");
	//Se lee el valor dela altura.
	scanf("%f", &fHeight);
	
	//Se hacen la operaci�n correcpondiente para calcular el �rea del rect�ngulo.
	fArea = fBase * fHeight;
	//Se hace la expresi�n correspondiente para calcular el per�metro del rect�ngulo.
	fPerimeter = (fBase + fHeight) * 2;
	
	//Se imprime el resultado de per�metro y el �rea.
	printf("El resultado del per�metro es %.2f y el resultado del �rea es %.2f", fPerimeter, fArea);
} //Fin del programa.
