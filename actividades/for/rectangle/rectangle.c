/*
	Name: Asterisks rectangle
	Copyright: 2019
	Author: Elizabeth Guerrero Torres
	Date: 01/12/19 22:36
	Description: Realizar una figura geom�trica, dadas las dimensiones que proporcione el usuario.
	
	PSEUDOC�DIGO
		0.	Inicio.
		1.	Inicializaci�n de variables:
			1.1	eBase � 0
			1.2	eHeight � 0
			1.3	eCounterFiles � 1
			1.4	eCounterColumns �1
			1.5	eLong � 0
			1.6	eShort � 0
		2.	Imprimir "Escribe un n�mero entero para determinar la base o altura del rect�ngulo: "
		3.	Leer eLong.
		4.	Imprimir "Escribe otro n�mero para determinar la base o altura del rect�ngulo."
		5.	Leer eShort.
		6.	Si(eShort < eLong) entonces
			6.1	eBase = eShort
			6.2	eHeight = eLong
		7.	Fin Si
		8.	Si no
			8.1	eBase = eLong
			8.2	eHeight = eShort
		9.	Mientras(eCounterFiles <= eBase)
			9.1	Para(eCounterColumns = 1; eCounterColumns  <= eHeight; eCounterColumns++)
				9.1.1	Imprimir "*"
				9.1.2	Imprimir "\n"
			9.2	Fin Para
			9.3	eCounterFiles++
		10.	Fin Mientras
		11.	Fin

*/

//Biblioteca al preprocesador.
#include<stdio.h>

//Inicio del programa
int main() {
	
	//Inicializaci�n de variables
	int eBase = 0; //Almacenar� el valor de la base.
	int eHeight = 0; //Almacenar� el valor de la altura.
	int eCounterFiles = 1; //Contar� las filas.
	int eCounterColumns = 1; //Contar� las columnas.
	int eLong = 0; //Alamacenar� la base o altura.
	int eShort = 0; //Alamacenar� la base o altura.
	
	//Se le pide al usuario que ingrese una base o una altura.
	printf("Escribe un n�mero entero para determinar la base o altura del rect�ngulo: ");
	//Se lee el valor.
	scanf("%i", &eLong);
	
	//Se le pide al usuario que ingrese una base o una altura.
	printf("Escribe otro n�mero para determinar la base o altura del rect�ngulo: ");
	//Se lee el valor.
	scanf("%i", &eShort);
	
	//Si la variable eShort es menor que eLong...
	if(eShort > eLong) {
		//La variable eBase guarda el valor m�s grande que ingres� el usuario.
		eBase = eShort;
		//Y la variable eHeight guarda el valor m�s peque�o que ingres� el usuario.
		eHeight = eLong;
	} else {
		eBase = eLong;
		eHeight = eShort;
	}
	
	//Mientras la variable eCounterColumns sea menor o igual a la variable eHeight...
	while(eCounterColumns <= eHeight) {
		//... entonces: ejecutar el ciclo for, el cual ir� contando las filas y,...
		for(eCounterFiles = 1; eCounterFiles <= eBase; eCounterFiles++)
		/*(Mientras la condici�n del while sea verdadera, se ejecutar� otro ciclo for dentro,
			el cual va imprimiendo los aster�scos en forma de fila, hasta llegar al n�mero que
		    proporcion� el usuario para la base del rect�ngulo.
			Una vez que se cumpli� ese ciclo, pasa a aumentar el n�mero de columnas en la l�nea
			89, entonces, si de inicio, la variable eCunterColumns val�a 1, despu�s de aumentar su valor
			en 1, valdr� 2 y se vuelve a ejecutar el ciclo for. Esto se repetir� hasta que eCounterColumns
			llegue al valor que tiene la variable eHeight)*/
			printf("*");
			printf("\n");
			/*... posteriormente ir contando las columnas hasta llegar al n�mero que proporcion�
			  el usuario para la altura del rect�ngulo.*/
			eCounterColumns++;
	}
}
