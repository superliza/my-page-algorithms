/*
	Name: Superficie del triángulo
	Copyright: 2019
	Author: Elizabeth Guerrero Torres
	Date: 15/12/19 19:07
	Description: De acuerdo a la base y altura de un triángulo, calcular la superficie.
	
	PSEUDOCÓDIGO 
		0. Inicio 
		1. Inicializar variables: 
			1.1 fBase <- 0 
			1.2 fHeight <- 0 
			1.3 fSurface <- 0 
		2. Imprimir “Dame el valor de la base” 
		3. Leer fBase. 
		4. Imprimir “Dame el valor de la altura” 
		5. Leer fHeight 
		6. Calcular fSurface <- (fBase * fHeight) / 2 
		7. Imprimir “La superficie del triángulo es ” fSurface. 
		8. Fin. 
*/

//Biblioteca al preprocesador para funciones de entrada y salida principalmente.
#include<stdio.h> //standard input-output header

//Inicio del programa
int main() {
	//Inicializar variables
	float fBase = 0; //variable que almacena la base del triángulo.
	float fHeight = 0; //variable que almacena la altura del triángulo.
	float fSurface = 0; //variable que almacena la superficie del triángulo.
	
	//se le pide al usuario que ingrese el valor de la base.
	printf("Escribe el valor de la base: ");
	//se lee el valor de la base.
	scanf("%f", &fBase);
	
	//se le pide al usuario que ingrese el valor de la altura.
	printf("Escribe el valor de la altura: ");
	//se lee el valor de la altura.
	scanf("%f", &fHeight);
	
	//se realiza la expresión necesaria para calcular la superficie.
	fSurface = (fBase * fHeight) / 2;
	//se imprime la superficie del triángulo.
	printf("La superficie del triángulo es: %.2f", fSurface);
} // fin del programa
