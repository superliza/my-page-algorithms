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
	
//	printf("%i", eBase);
	
	//Mientras la variable eCounterFiles sea menor o igual a la variable eHeight...
	while(eCounterFiles <= eHeight) {
		//... entonces se ejecutar� el ciclo for, el cual ir� contando las columnas y,...
		for(eCounterColumns = 1; eCounterColumns <= eBase; eCounterColumns++)
		/*(Mientras la condici�n del while sea verdadera, se ejecutar� otro ciclo for dentro,
			el cual va imprimiendo los aster�scos en forma de columna, hasta llegar al n�mero que 
			proporcion� el usuario para la base del rect�ngulo.
			Una vez que se cumpli� ese ciclo, pasa a incrementar el n�mero de filas en la l�nea
			95, entonces, si de inicio, la variable eCunterFiles val�a 1, despu�s de incrementar su valor
			en 1, valdr� 2 y se vuelve a ejecutar el ciclo for y se vuelve a repetir el ciclo,
			 pero en lugar de que los aster�scos se se acomoden en una sola l�nea, se
			acomodar�n en forma de fila por el salto de l�nea)*/
			printf("*"); // **** (se acomodan en l�na y dejan un salto de l�ena [primera vuelta del while])
			printf("\n");// **** (se acomodan en forma de l�nea y se acomodan en el salto de l�nea que hab�a
			/*en el ciclo anterior del for y tambi�n dejan un salto de l�nea [y as� sucesivamente hasta 
			cumplir con el ciclo] */
			//termina el ciclo for.
			/*... una vez que haya terminado el ciclo for, el ciclo while ir� contando las filas hasta 
				llegar al n�mero que proporcion� el usuario para la altura del rect�ngulo.*/
			eCounterFiles++; //(incrementa en 1 el valor de las filas)
	}//termina el ciclo while.
}//termina el programa.
