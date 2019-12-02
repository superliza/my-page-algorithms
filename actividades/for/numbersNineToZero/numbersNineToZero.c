/*
	Name: Números del 9 al 0 con decremento de 1 en 1.
	Copyright: 2019
	Author: Elizabeth Guerrero Torres
	Date: 30/11/19 20:50
	Description: Mostrar en pantalla el decremento que va teniendo el 9 hasta el cero de 1 en 1.
	
	PSEUDOCÓDIGO
		0.	Inicio.
		1.	Inicializar variable:
			1.1	eCountDecrement  9
		2.	Para(eCountDecrement; eCountDecrement >= 0; eCountDecrement--)
			2.1	Imprimir eCountDecrement
		3.	Fin Para
		4.	Fin

*/

//Bibliotecas alpreprocesador.
#include<stdio.h>

//Inicia el programa con la función main.
int main() {
	//Inicialización de la variable contadora.
	int eCountDecrement = 9;
	
	//Inicia el bucle for para ir decrementando la variable contadora de 1 en 1 hasta llegar a cero.
	for(eCountDecrement; eCountDecrement >= 0; eCountDecrement--) {
		//Imprimir en pantalla el proceso del decremento.
		printf("\t%i", eCountDecrement);
	} //Fin del ciclo for.
}//Fin del programa.
