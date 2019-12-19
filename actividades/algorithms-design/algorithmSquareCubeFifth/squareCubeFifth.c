/*
	Name: Cuadrado, cubo y quinta potencia.
	Copyright: 2019
	Author: Elizabeth Guerrero Torres
	Date: 16/12/19 23:05
	Description: Es un problema matemático que requiere elevar un número al cuadrado, al cubo y a la quinta potencia.
	
	PSEUCÓDIGO
		0. Inicio
		1. Inicializar variables
			1.1 eNumber <- 0
			1.2 eResultSquare <- 0
			1.3 eResultThird <- 0
			1.4 eResultFifth <- 0
		2. Imprimir “Dame el número para calcularlo a la segunda, tercera y quinta potencia.”
		3. Leer eNumber
		4. Calcular eResultSquare ?eNumberˆ2
		5. Calcular eResultThird ? eNumberˆ3
		6. Calcular eResultFifth ? eNumberˆ5
		7. Imprimir “El número a la segunda potencia es “ + eResultSquare + “,” + “el número a la tercera potencia es” + eResultThird + “,” + “el número a la quinta potencia es” + eResultFifth.
		8. Fin
*/

//Bibliotecas al preprocesador.
#include<stdio.h> //funciones de entrada y salida principalmente (standard input-output header).
#include<math.h> //funciones matemáticas.

//Inicio del programa
int main() {
	//Inicializar variables
	int eNumber = 0; //variable de tipo entero que almacenará el número a elevar.
	int eResultSquare = 0; //variable de tipo entero que almacenará el número al cuadrado.
	int eResultThird = 0; //variable de tipo entero que almacenará el número al cubo.
	int eResultFifth = 0; //variable de tipo entero que almacenará el número a la quinta potencia.
	
	//Se le pide al usuario que ingrese un número.
	printf("Escribe un número para calcularlo a la segunda, tercera y quinta potencia: ");
	//Se lee el número a elevar.
	scanf("%i", &eNumber);
	
	//Se eleva el número al cuadrado.
	eResultSquare = pow(eNumber, 2);
	//Se eleva el número al cubo.
	eResultThird = pow(eNumber, 3);
	//Se eleva el número a la quinta potencia.
	eResultFifth = pow(eNumber, 5);
	
	//Se imprime el número elevado a la segunda, tercera y quinta potencia.
	printf("El número a la segunda potencia es: %i\nEl número a la tercera potencia es: %i\nEl número a la quinta potencia es: %i", eResultSquare, eResultThird, eResultFifth);
} //Fin del programa
