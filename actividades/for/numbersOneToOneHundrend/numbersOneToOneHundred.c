/*
	Name: Números del 1 al 100.
	Copyright: 2019
	Author: Elizabeth Guerrero Torres
	Date: 30/11/19 18:44
	Description: Aumentar los números de uno en uno a partir del 1 hasta llegar a 100 en un ciclo repetitivo.
	
	PSEUDOCÓDIGO
		0.	Inicio.
		1.	Inicializar variable:
				1.1	eCount <- 1
		2.	Para(eCount; eCount <= 100; ++eCount)
				2.1	Imprimir eCount
		3.	Fin Para
		4.	Fin

*/

//Biblioteca al preprocesador.
#include<stdio.h>

//Inicio del programa.
int main() {
	//Inicializar variable contadora.
	int eCount = 1;
	
	//Ciclo for que hace un ciclo repetitivo hasta llegar a 100.
	for(eCount; eCount <= 100; ++eCount) {
		
		//Muestra en pantalla los números del 1 al 100.
		printf("%i", eCount);
	} //Fin del ciclo for.
} //Fin de la función main.
