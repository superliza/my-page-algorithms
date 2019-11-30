/*
	Name: Verificar que un n�mero dado por el usuario se encuentre dentro de un rango establecido.
	Copyright: 2019
	Author: Elizabeth Guerrero Torres
	Date: 29/11/19 00:18
	Description: El n�mero se debe encontrar dentro de un rango determinado.
	PSEUDOC�DIGO
		0.	Inicio
		1.	Inicializar variables:
			1.1	eFirstNumber <- 0
			1.2	eHigherLimit <- 0
			1.3	eLowerLimit <- 0
			1.4	eSecondNumber <- 0
			1.5	eNumber <- 0
		2.	Imprimir "Escribe un n�mero l�mite para especificar el rango."
		3.	Leer eFirstNumber
		4.	Imprimir "Escribe otro n�mero l�mite para especificar el rango."
		5.	Leer eSecondNumber
		6.	Imprimir "Escribe cualquier n�mero para verificar si se encuentra dentro del rango."
		7.	Leer eNumber
		8.	Si (eFirstNumber < eSecondNumber) entonces
			8.1	eLowerLimit�<- eFirstNumber
			8.2	eHigherLimit <- eSecondNumber
		9.	Fin Si
		10.	O si (eSecondNumber  < eFirstNumber) entonces
			10.1 eLowerLimit <- eSecondNumber
			10.2 eHigherNumber <- eFirstNumber
		11.	Fin O si.
		12.	Si (eNumber > eLowerLimit && eNumber < eHigherNumber) entonces
			12.1 Imprimir: eNumber "se encuentra dentro del rango establecido."
		13.	Fin Si
		14.	Si no
			14.1 Imprimir: eNumber "no se encuentra dentro del rango establecido."
		15.	Fin Si no.
		16.	Fin

*/


//Biblioteca al preprocesador
#include<stdio.h>

//Inicio del programa
int main() {
	//variables de entrada
	int eNumber = 0;
	int eFirstNumber = 0;
	int eSecondNumber = 0;
	
	//variables del programa
	int eLowerLimit = 0;
	int eHigherLimit = 0;
	
	//mensajes de entrada para especificar los l�mites del rango.
	printf("Escribe un n�mero l�mite para especificar el rango: ");
	scanf("%i", &eFirstNumber);
	
	printf("Escribe otro n�mero l�mite para especificar el rango: ");
	scanf("%i", &eSecondNumber);
	
	//mensaje de entrada para verificar si el n�mero que se ingresa se
	//encuentra dentro del rango establecido anteriormente.
	printf("Escribe cualquier n�mero para verificar si se encuentra dentro del rango establecido: ");
	scanf("%i", &eNumber);
	
	//si un n�mero es mayor que otro, establecer el menor a eLowerLimit y el mayor a Higher
	if(eFirstNumber < eSecondNumber) {
		eLowerLimit = eFirstNumber;
		eHigherLimit = eSecondNumber;
	} else if (eSecondNumber < eFirstNumber) {
		eLowerLimit = eSecondNumber;
		eHigherLimit = eFirstNumber;
	}
	
	//si el n�mero ingresado se encuentra en el rango establecido...
	if(eNumber > eLowerLimit && eNumber < eHigherLimit) {
		//imprimir el siguiente mensaje:
		printf("%i se encuentra dentro del rango establecido.", eNumber);
	} else {
		//de lo contrario, imprimir este mensaje:
		printf("%i no se encuentra dentro del rango establecido.", eNumber);
	}
}
