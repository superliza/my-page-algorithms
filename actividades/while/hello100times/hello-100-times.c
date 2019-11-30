/*
	Name: Imprimir 100 veces un saludo
	Copyright: 2019
	Author: Elizabeth Lorena Guerrero Torres
	Date: 17/11/19 18:24
	Description: Escribir un algoritmo que imprima 100 
				veces ìhola a todosî con su representaciÛn 
				gr·fica.
	
	¡NALISIS
		- Imprimir 100 veces "hola a todos", mientras el contador sea menor a 100.
	OBJETIVO
		- Mostrar en pantalla el mensaje "hola a todos" 100 veces.
	PRE-CONDICIONES
		- La variable eCount de tipo entero iniciar· desde cero e ir· aumentando hasta llegar a 100.
		- Imprimir el n˙mero alado del mensaje para llevar la cuenta de cu·ntos mensajes se han impreso.
		- Se har· uso del ciclo while (mientras).
	RESTRICCIONES
		- La variable eCount sÛlo recibir· valores numÈricos.
		- No imprimir m·s de 100 veces el mensaje, ni menos de 100 veces.
	SALIDA
		- Se imprimir· el mensaje: eCount, "hola a todos."
	PSEUDOC”DIGO
		0.	Inicio
		1.	Inicializar variable:
			1.1	eCount ê 0
		2.	Mientras(eCount < 100)
			2.1	eCount++
			2.2	Imprimir eCount, "hola a todos."
		3.	Fin Mientras
		4.	Fin.

*/

// Bibliotecas
#include<stdio.h>

// Inicio del programa.
int main() {
	// Inicializar variable contador
	int eCount = 0;
	
	// Mientras(eCount < 100)
	while(eCount < 100) {
		// Aaumentar el contador en 1.
		eCount++;
		//Imprimir mensaje
		printf("%i hola a todos. \n", eCount);
	}
}
