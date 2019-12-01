/*
	Name: Incrementar el cero de 0.5 en 0.5, hasta llegar a 10.
	Copyright: 2019
	Author: Elizabeth Guerrero Torres
	Date: 30/11/19 19:58
	Description: Mostrar en pantalla los números del 0 al 100 con un incremento de 0.5.
	
	PSEUDOCÓDIGO
		0.	Inicio
		1.	Inicializar variable:
			1.1	fCount <- 0
		2.	Para(fCount; eCount <= 10; fCount += 0.5)
			2.1	Imprimir fCount
		3.	Fin Para
		4.	Fin

*/

//Biblioteca al preprocesador.
#include<stdio.h>

//Inicia el programa con la función main.
int main() {
	
	//Inicialización de varibale contadora de tipo float.
	float fCount = 0;
	
	//Inicio del ciclo for que va incrementando la variable contadora de 0.5 en 0.5
	//hasta llegar a 10.
	for(fCount; fCount <= 10; fCount += 0.5) {
		//Imprimir variable contadora
		printf("\t%0.1f", fCount);
	} //Fin del ciclo for.
} //Fin del programa.
