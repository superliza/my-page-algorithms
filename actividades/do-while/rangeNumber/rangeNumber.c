/*
	Name: Rango de un número con ciclo do-while.
	Copyright: 2019
	Author: Elizabeth Guerrero Torres.
	Date: 30/11/19 14:38
	Description: Validar que un número se encunetre dentro de un rango determinado.
	
	PSEUDOCÓDIGO
		0.	Inicio
		1.	Inicializar variables:
			1.1	eNumber <- 0
			1.2	eFirstNumber <- 0
			1.3	eSecondNumber <- 0
			1.4	eLowerLimit <- 0
			1.5	eHigherLimit <- 0
		2.	Imprimir "Ingresa un número límite para especificar el rango: "
		3.	Leer eFirstNumber.
		4.	Imprimir "Ingresa otro número límite para especificar el rango: "
		5.	Leer eSecondNumber.
		6.	Hacer
			6.1	Imprimir "Ingresa cualquier número para validar que se encuentre dentro del rango establecido: "
			6.2	Leer eNumber.
			6.3	Si(eFirstNumber < eSecondNumber) entonces
				6.3.1	eLowerLimit <- eFirstNumber
				6.3.2	eHigherLimit <- eSecondNumber
			6.4	Fin Si
			6.5	Si no
				6.5.1	eLowerLimit <- eSecondNumber
				6.5.2	eHigherLimit <- eFirstNumber
			6.6	Fin Si no
			6.7	Si(eNumber < eLowerLimit || eNumber > eHigherLimit) entonces
				6.7.1	Imprimir: eNumber "no se encuentra dentro del rango establecido."
			6.8	Fin Si.
			6.9	Si no
				6.9.1	Imprimir: eNumber "se encuentra dentro del rango establecido."
			6.10 Fin Si no
		7.	Fin Hacer
		8.	Mientras(eNumber >= eLowerLimit && eNumber <= eHigherLimit)
		9.	Fin Mientras
		10.	Fin

*/

//Biblioteca al pre-procesador
#include<stdio.h>

//Inicio del programa con la función main
int main() {
	//Inicialización de variables
	int eNumber = 0; //Almacena el número a evaluar dentro del rango establecido.
	int eFirstNumber = 0; // Almacena el primer límite del rango.
	int eSecondNumber = 0; //Almacena el segundo límite del rango.
	int eLowerLimit = 0; //Almacena el valor más pequeño del rango.
	int eHigherLimit = 0; //Almacena el valor más grande del rango.
	
	//Se pide al usuario que ingrese los límites del rango.
	printf("Ingresa un número límite para especificar el rango: ");
	// Se lee el número ingresado.
	scanf("%i", &eFirstNumber);
		
	printf("Ingresa otro número límite para especificar el rango: ");
	scanf("%i", &eSecondNumber);
	
	//Inicia el ciclo do-while
	do {
		// Se pide al usuario que ingrese el número a evaluar.
		printf("Ingresa cualquier número para validar que se encuentre dentro del rango establecido: ");
		//Se lee el número ingresado.
		scanf("%i", &eNumber);
		
		// Si el primer límite es menor que el segundo límite...
		if(eFirstNumber < eSecondNumber) {
			// Asignar el valor más pequeño al primer límite.
			eLowerLimit = eFirstNumber;
			// Asignar el valor más grande al segundo límite.
			eHigherLimit = eSecondNumber;
		// De lo contrario
		} else {
			// Asignar el valor más pequeño al segundo límite
			eLowerLimit = eSecondNumber;
			// Asignar el valor más grande al primer límite
			eHigherLimit = eFirstNumber;
		}
		
		//Si el número ingresado es menor que el mímite más pequeño
		// o mayor al límite máximo establecido...
		if(eNumber < eLowerLimit || eNumber > eHigherLimit) {
			// Imprimir el siguiente mensaje.
			printf("%i no se encuentra dentro del rango establecido.", eNumber);
		// De lo contrario...
		} else {
			// Imprimir este mensaje:
			printf("%i se encuentra dentro del rango establecido.\n", eNumber);
		}
		//Mientras el número que ingresó el usuario se encuentre dentro del rango establecido
	} while(eNumber >= eLowerLimit && eNumber <= eHigherLimit);
}
