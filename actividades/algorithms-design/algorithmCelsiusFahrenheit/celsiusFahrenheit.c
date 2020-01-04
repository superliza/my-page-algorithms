/*
	Name: Grados Celsius y Fahrenheit
	Copyright: 2019
	Author: Elizabeth Guerrero Torres
	Date: 15/12/19 17:44
	Description: Convertir grados Fahrenheit a Celsius y grados Celsius Fahrenheit.
	
	PSEUDOCÓDIGO
		0.	Inicio
		1.	Inicializar variables:
			1.1	fCelsius <-0
			1.2	fFahrenheit <- 0
			1.3	fResultFarenheit <- 0
			1.4	fResultCelsius <- 0
		2.	Imprimir "Dame los grados Celsius para convertirlos a grados Fahrenheit: "
		3.	Leer fCelsius.
		4.	Calcular fResultFahrenheit <- (fCelsius * 1.8) + 32
		5.	Imprimir "Los grados Celsius a grados Fahrenheit son: " fResultFahrenheit
		6.	Imprimir "Dame los grados Fahrenheit para convertirlos a grados Celsius: "
		7.	Leer fFahrenheit.
		8.	Calcular fResultCelsius <- (fFahrenheit - 32) / 1.8
		9.	Imprimir "Los grados Fahrenheit a grados Celsius son: " fResultCelsius
		10.	Fin.

*/

//Biblioteca al preprocesador para funciones de entrada y salida principalmente.
#include<stdio.h> // standard input-output header.

//Inicio del programa
int main() {
	// Inicialización de variables.
	float fCelsius = 0; //entrada en grados Celsius
	float fFahrenheit = 0; //entrada en grados Fahrenheit
	float fResultFahrenheit = 0; //Resultado a grados Fahrenheit
	float fResultCelsius = 0; //Resultado a grados Celsius
	
	//Se le pide al usuario que ingrese los grados Celsius para convertirlos a grados Fahrenheit.
	printf("Dame los grados Celsius para convertirlos en grados Fahrenheit: ");
	//Se leen los grados Celsius que ingresó el usuario.
	scanf("%f", &fCelsius);
	
	//Se realiza la operación necesaria para convertir los grados Celsius a Fahrenheit.
	fResultFahrenheit = (fCelsius * 1.8) + 32;
	//Se imprime el resultado de los grados Fahrenheit.
	printf("Los grados Celsius a grados Fahrenheit son: %f", fResultFahrenheit);
	//Se le pide al usuario que ingrese los grados Fahrenheit para convertirlos a grados Celsius.
	printf("\n\nDame los grados Fahrenheit para convertirlos a grados Celsius: ");
	//Se leen los grados Fahrenheit que ingresó el usuario.
	scanf("%f", &fFahrenheit);
	//Se realiza la operación necesaria para convertir los grados Fahrenheit a Celsius.
	fResultCelsius = (fFahrenheit - 32) / 1.8;
	//Se imprime el resultado de los grados Celsius.
	printf("Los grados Fahrenheit a grados Celsius son: %f", fResultCelsius);
} //Fin del programa.
