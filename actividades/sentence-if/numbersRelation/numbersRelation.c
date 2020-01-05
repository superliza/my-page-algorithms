/*
	Name: Relaci�n de dos n�meros
	Copyright: 2020
	Author: Elizabeth Guerrero Torre
	Date: 04/01/20 16:50
	Description: Obtener dos valores num�ricos y verificar si uno es igual a cero, mayor o menor que el otro.
	
	PSEUDOC�DIGO
		0.	Inicio
		1.	Inicializar varibales:
			1.1	fFirstNumber <- 0
			1.2	fSecondNumber <- 0
		2.	Imprimir "Escribe el valor del primer n�mero: "
		3.	Leer fFirstNumber.
		4.	Imprimir "Ecribe el valor del segundo n�mero: "
		5.	Leer fSecondNumber.
		6.	SI (fFirstNumber > fSecondNumber) entonces
			6.1	Imprimir fFirstNumber "es mayor que", fSecondNumber ", por lo tanto" fSecondNumber "es menor que", fFirstNumber
		7.	Fin si
		8.	O si (fSecondNumber > fFirstNumber) entonces
			8.1	Imprimir fSecondNumber "es mayor que", fFirstNumber ", por lo tanto" fFirstNumber "es menor que", fSecondNumber
		9.	Fin o si.
		10.	Si no
			10.1 Imprimir "Los dos n�meros son iguales."
		11.	Fin si no.
		12.	Fin.
*/

//Biblioteca al preprocesador para funciones de entrada y salida principalmente.
#include<stdio.h> //standard input-output header
//Biblioteca para reconocer caracteres especiales.
#include<locale.h>

int main() {
	//funci�n para que reconozca los caracteres especiales
	setlocale(LC_ALL, "");
	
	//Inicializar variables
	float fFirstNumber = 0; // variable de tipo float que almacenar� el primer n�mero,
	float fSecondNumber = 0;// variable de tipo float que almacenar� el segundo n�mero.
	
	//Se le pide al usuario que ingrese el primer valor.
	printf("Escribe el valor del primer n�mero: ");
	//Se lee la variable que almacena el primer valor.
	scanf("%f", &fFirstNumber);
	
	//Se le pide al uruario que ingrese el segundo valor.
	printf("Escribe el valor del segundo n�mero: ");
	//Se lee la variable que almacena el segundo valor.
	scanf("%f", &fSecondNumber);
	
	//Se eval�a cu�l de los dos n�meros es mayor y si el primero es el mayor...
	if(fFirstNumber > fSecondNumber) {
		//... entonces se imprime el siguiente mensaje:
		printf("%.2f es mayor que %.2f, por lo tanto %.2f es menor que %.2f", fFirstNumber, fSecondNumber, fSecondNumber, fFirstNumber);
		//pero si el segundo valor es mayor que el primero...
	} else if(fSecondNumber > fFirstNumber) {
		//... se imprime el siguiente mensaje:
		printf("%.2f es mayor que %.2f, por lo tanto %.2f es menor que %.2f", fSecondNumber, fFirstNumber, fFirstNumber, fSecondNumber);
	//pero si ambos valores son iguales...
	} else {
		//... se imprime el siguiente mensaje:
		printf("Los dos n�meros son iguales.");
	}//fin sentencia if
}//Fin del programa
