/*
	Name: Cuadrado, cubo y quinta potencia.
	Copyright: 2019
	Author: Elizabeth Guerrero Torres
	Date: 16/12/19 23:05
	Description: Es un problema matem�tico que requiere elevar un n�mero al cuadrado, al cubo y a la quinta potencia.
	
	PSEUC�DIGO
		0. Inicio
		1. Inicializar variables
			1.1 eNumber <- 0
			1.2 eResultSquare <- 0
			1.3 eResultThird <- 0
			1.4 eResultFifth <- 0
		2. Imprimir �Dame el n�mero para calcularlo a la segunda, tercera y quinta potencia.�
		3. Leer eNumber
		4. Calcular eResultSquare ?eNumber�2
		5. Calcular eResultThird ? eNumber�3
		6. Calcular eResultFifth ? eNumber�5
		7. Imprimir �El n�mero a la segunda potencia es � + eResultSquare + �,� + �el n�mero a la tercera potencia es� + eResultThird + �,� + �el n�mero a la quinta potencia es� + eResultFifth.
		8. Fin
*/

//Bibliotecas al preprocesador.
#include<stdio.h> //funciones de entrada y salida principalmente (standard input-output header).
#include<math.h> //funciones matem�ticas.

//Inicio del programa
int main() {
	//Inicializar variables
	int eNumber = 0; //variable de tipo entero que almacenar� el n�mero a elevar.
	int eResultSquare = 0; //variable de tipo entero que almacenar� el n�mero al cuadrado.
	int eResultThird = 0; //variable de tipo entero que almacenar� el n�mero al cubo.
	int eResultFifth = 0; //variable de tipo entero que almacenar� el n�mero a la quinta potencia.
	
	//Se le pide al usuario que ingrese un n�mero.
	printf("Escribe un n�mero para calcularlo a la segunda, tercera y quinta potencia: ");
	//Se lee el n�mero a elevar.
	scanf("%i", &eNumber);
	
	//Se eleva el n�mero al cuadrado.
	eResultSquare = pow(eNumber, 2);
	//Se eleva el n�mero al cubo.
	eResultThird = pow(eNumber, 3);
	//Se eleva el n�mero a la quinta potencia.
	eResultFifth = pow(eNumber, 5);
	
	//Se imprime el n�mero elevado a la segunda, tercera y quinta potencia.
	printf("El n�mero a la segunda potencia es: %i\nEl n�mero a la tercera potencia es: %i\nEl n�mero a la quinta potencia es: %i", eResultSquare, eResultThird, eResultFifth);
} //Fin del programa
