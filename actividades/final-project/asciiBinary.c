/*
	Name: C�digo binario de una cadena (Proyecto final)
	Copyright: 2019
	Author: Elizabeth Guerrero Torres
	Date: 28/11/19 01:06
	Description: Dada una cadena, obtener su c�digo Ascii y mostrar su equivalente en binario.
	
	PSEUDOC�DIGO
		0.	Inicio
		1.	Inicializar variables:
			1.1	sLetter[50] � "o"
			1.2	eCount � 0
			1.3	eReverse � 0
			1.4	eResult[8] � {0} 
		2.	Imprimir "Escribe una letra: "
		3.	Leer sLetter
		4.	Mientras(eCount < 8)
			4.1	eResult[eCount] � sLetter[0] % 2
			4.2	sLetter[eCount] � sLetter[eCount] / 2
			4.3	eCount++
		5.	Fin Mientras
		6.	Para(eReverse = eCount - 1;  eReverse >= 0;  eReverse--)
			6.1	Imprimir eResult[eReverse]
		7.	Fin Para
		8.	Fin.
*/


//Se incluyen las bibliotecas necesarias para imprimir mensajes y el uso de strings.
#include<stdio.h>
#include<string.h>

//Inicia la funci�n principal para el programa.
int main() {
	
	//Inicializaci�n de variables
	unsigned char sLetter[50] = "o"; //Se pone unsigned char para que tome los valores
									// del 0 al 255 de la tabla Ascii.
	int eCount = 0; //Variable contadora de tipo entero que va aumentando el valor.
	int eReverse = 0; //Variable contadora de tipo entero que va disminuyendo el valor.
	int eResult[8] = {0}; //Arreglo de tipo entero para almacenar el m�dulo del c�digo Ascii.
	
	//Imprimir mensaje para el usuario.
	printf("Escribe una letra: ");
	
	//Leer la cadena dada por el usuario.
	gets(sLetter);
	
	//Mientras la variable contadora sea menor a 8, ejecutar las siguientes instrucciones:
	while(eCount < 8) {
		
		//Se agregan los residuos del c�digo Ascii al array.
		eResult[eCount] = sLetter[0] % 2;
		
		//Se divide entre 2 el c�digo Ascii.
		sLetter[0] /= 2;
		
		//Se actualiza el contador en 1 para evitar un bucle infinito.
		eCount++;
	} // Fin Mientras
	
	//Se disminuye el contador eReverse en 1 de final a principio, comenzando en 7 hasta 0
	// para invertir los los residuos del c�digo Ascii que se encuentrean en el array.
	for(eReverse = eCount - 1; eReverse >= 0; eReverse--) {
		
		// Finalmente se imprime el c�digo binario de forma ordenada.
		printf("%i", eResult[eReverse]);
	} // Fin Para
} // Fin del programa
