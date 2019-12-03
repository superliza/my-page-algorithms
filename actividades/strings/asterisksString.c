/*
	Name: Cadena separada por asteríscos.
	Copyright: 2019
	Author: Elizabeth Guerrero Torres
	Date: 02/12/19 22:24
	Description: Mostrar en pantalla la cadena que proporcionó el usuario con un asterisco de separación en cada carácter.
	
	PSEUDOCÓDIGO
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
	//Inicialización de variables
	int eCounter = 0;
	char sMessage[20] = "hola";
	
	//Imprimir mensaje para que el usuario ingrese una cadena.
	printf("Escribe un mensaje: ");
	//Leer la cadena que ingresó el susuario.
	fgets(sMessage, 50, stdin);
	
	//Recorrer con un ciclo for la cadena que ingresó el usuario.
	for(eCounter; eCounter <= strlen(sMessage) - 2; eCounter++) { //la longitud -2 para que no se impriman los asteríscos de más.
		//Imprimir la cadena dividida en asteriscos entre cada carácter.
		printf("%c*", sMessage[eCounter]);
	} //Fin del ciclo for
} //Fin del programa.
