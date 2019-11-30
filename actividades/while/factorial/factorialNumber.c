/*
	Name: Factorial de un número.
	Copyright: 2019
	Author: Elizabeth Lorena Guerrero Torres.
	Date: 17/11/19 20:36
	Description: Calcular el factorial de un número cualquiera y mostrarlo
	en pantalla.
	
	ANÁLISIS
		- Realizar un algoritmo que, dado un número mayor a 1, imprima su factorial.
	OBJETIVO
		- Obtener el factorial de un número mayor a 1
	ENTRADA
		- eInitialNumber: variable de tipo entero que almacenará el valor del número.
	PRE-CONDICIONES
		- eInitialNumber debe ser un número entero mayor a 1.
		- eFactorialNumber es una variable acumuladora de tipo entero, la cual irá disminuyendo, de acuerdo al valor que ingrese el usuario.
		- eNumber es una variable de tipo entero que conservará el valor inicial de eInitialNumber.
	RESTRICCIONES
		- No aceptar caracteres alfanuméricos.
		- El digito no debe ser menor a 2.
	SALIDA
		- Imprimir el mensaje: "El factorial de", eNumber "es" eFactorialNumber.
	PSEUDOCÓDIGO
		0.	Inicio
		1.	Inicializar variables:
			1.1	eInitialNumber <- 0
			1.2	eFactorialNumber <- 0
			1.3	eNumber <- 0
		2.	Imprimir "Dame un número mayor a 1 para obtener el factorial."
		3.	Leer eFactorialNumber.
		4.	eFactorialNumber = eInitialNumber
		5.	eNumber = eInitialNumber
		6.	Mientras (eInitialNumber > 1)
			6.1	eInitialNumber = eInitialNumber - 1
			6.2	eFactorialNumber = eFactorialNumber * eInitialNumber
		7.	Fin Mientras
		8.	Imprimir "El factorial de", eNumber "es" eFactorialNumber
		9.	Fin
 
*/

// Biblioteca
#include<stdio.h>

// Inicio del programa
int main() {
	
	// Inicializar variables
	int eInitialNumber = 0;
	int eFactorialNumber = 0;
	int eNumber = 0;
	
	// Imprimir mensaje de entrada
	printf("Dame un número mayor a 1 para obtener el factorial: ");
	scanf("%i", &eInitialNumber);
	
	if(eInitialNumber >= 2) {
		
		// Reasignar valores a las variables
		eFactorialNumber = eInitialNumber;
		eNumber = eInitialNumber;
	
		// Mientras el número que ingresó el usuario sea mayor a 1...
		while(eInitialNumber > 1) {
		
			// Al número inicial se le restará 1 hasta que la condición sea falsa
			eInitialNumber = eInitialNumber - 1;
			//Multiplicar la variable acumuladora por el número inicial
			eFactorialNumber = eFactorialNumber * eInitialNumber;
	}
	
	// Imprimir mensaje de salida.
	printf("El factorial de %i es: %i", eNumber, eFactorialNumber);
	
	} else {
		printf("Debes ingresar un número mayor a 1");
	}
}
