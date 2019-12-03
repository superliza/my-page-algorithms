/*
	Name: Cadena separada por aster�scos.
	Copyright: 2019
	Author: Elizabeth Guerrero Torres
	Date: 02/12/19 22:24
	Description: Mostrar en pantalla la cadena que proporcion� el usuario con un asterisco de separaci�n en cada car�cter.
	
	PSEUDOC�DIGO
		0.	Inicio
		1.	Inicializar variables.
			1.1	sMessage[20] <- "hola"
			1.2	eCounter <- 0
		2.	Imprimir "Escribe un mensaje: "
		3.	Leer sMessage.
		4.	Para(eCounter; eCounter <= longitud(sMessage); eCounter++)
			4.1	Imprimir sMessage[eCounter] "*"
		5.	Fin Para
		6.	Fin

*/

//Bibliotecas al preprocesador
#include<stdio.h>
#include<string.h>

//Inicio del programa
int main() {
	//Inicializaci�n de variables
	int eCounter = 0;
	char sMessage[20] = "hola";
	
	//Imprimir mensaje para que el usuario ingrese una cadena.
	printf("Escribe un mensaje: ");
	//Leer la cadena que ingres� el susuario.
	fgets(sMessage, 50, stdin);
	
	//Recorrer con un ciclo for la cadena que ingres� el usuario.
	for(eCounter; eCounter <= strlen(sMessage) - 2; eCounter++) { //la longitud -2 para que no se impriman los aster�scos de m�s.
		//Imprimir la cadena dividida en asteriscos entre cada car�cter.
		printf("%c*", sMessage[eCounter]);
	} //Fin del ciclo for
} //Fin del programa.
