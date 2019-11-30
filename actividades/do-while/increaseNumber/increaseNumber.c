/*
	Name: Incrementar un número hasta llegar a 5.
	Copyright: 2019
	Author: Elizabeth Lorena Guerrero Torres
	Date: 18/11/19 16:36
	Description: Dado un número si es igual o menor a 5 incrementar hasta llegar 5.
	
	ÁNALISIS
		- Obtener un número menor a 5 e incrementarlo hasta que llegue a 5 y mostrar el incremento en pantalla.
	OBJETIVO
		- Incrementar hasta 5 un número dado por el usuario, mientras sea menor o igual a 5.
	ENTRADA
		- eNumber: variable de tipo entero que almacenará el valor numérico dado por el usuario y que incrementará hasta llegar a 5.
	PRE-CONDICIONES
		- eNumber debe ser menor a 5 para que incremente su valor.
		- El usuario podrá ingresar valores negativos y positivos.
	RESTRICCIONES
		- No se aceptarán valores alfanuméricos.
		- No se aceptarán valores de tipo float.
	SALIDA
		- Se imprimirá el mensaje: "El incremento es", eNumber.
	PSEUDOCÓDIGO
		0.	Inicio
		1.	Inicializar variables:
			1.1	eNumber <- 0
		2.	Imprimir "Dame un número menor a 5: "
		3.	Leer eNumber.
		4.	Hacer
			4.1	Imprimir "El incremento es", eNumber.
			4.2	eNumber++
		5.	Fin Hacer.
		6.	Mientras(eNumber <= 5)
		7.	Fin Mientras.
		8.	Fin.

*/

// Biblioteda
#include<stdio.h>

//Inicio del programa
int main() {
	
	//Inicializar variable
	int eNumber = 0;
	
	//Mensaje de entrada
	printf("Dame un número menor a 5: ");
	//Leer variable.
	scanf("%i", &eNumber);
	
	//Hacer
	do {
		//Imprimir el incremento del número.
		printf("El incremento es %i \n", eNumber);
		//Aumentar en 1 el número
		eNumber++;
		//Mientras el número sea menor o igual a 5.
	} while(eNumber <= 5);
}
