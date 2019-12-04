/*
	Name: Examen 3.
	Copyright: 2019
	Author: Elizabeth Guerrero Torres.
	Date: 03/12/19 22:12
	Description: 
		1. Realizar un algoritmo que muestre 15 opciones en pantalla de forma iterativa:
			o	La opci�n 1 deber� incrementar 15 veces el valor de un n�mero dado por el usuario. Tal incremento tambi�n lo deber� proporcionar el usuario.
			o	En la opci�n 2 se le solicitar� al usuario que ingrese dos n�meros para determinar el rango. Posteriormente se le solicitar� un tercer n�mero para evaluar si se encuentra dentro del rango que proporcion�. Si el n�mero se encuentra dentro de ese rango, se deber� imprimir en decremento los n�meros que se encuentren dentro del rango, a partir del n�mero que ingresa el usuario. Y si no se encuentra dentro de ese rango, se deber� imprimir un mensaje, comunic�ndole al usuario que tal n�mero no est� dentro del rango determinado.
			o	La opci�n 3 saldr� del programa.
	PSEUDOC�DIGO
	0.	Inicio
	1.	Inicializar variables:
		1.1	Men�
			1.1.1	sOptions[15][15] <- {"Opci�n 1", "Opci�n 2", "Opci�n 3", "Opci�n 4", "Opci�n 5", "Opci�n 5", "Opci�n 7", "Opci�n 8", "Opci�n 9", "Opci�n 10", "Opci�n 11", "Opci�n 12", "Opci�n 13", "Opci�n 14", "Opci�n 15"}
			1.1.2	eNumber <- 0
			1.1.3	eCounterOptions <- 0
			1.1.4	eLength <- 0
		1.2	Opci�n 1
			1.2.1	eNumberBase <- 0
			1.2.2	eNumberIncrement <- 0
			1.2.3	eCounterIncrement <- 1
		1.3	Opci�n 2
			1.3.1	eFirstLimit <- 0
			1.3.2	eSecondLimit <- 0
			1.3.3	eNumberRange <- 0
			1.3.4	eHigherLimit <- 0
			1.3.5	eLessLimit <- 0
	2.	eLength <- sizeof(sOptions) / sizeof(sOptions[0])
	3.	Para(eCounterOptions; eCounterOptions <= eLength; eCounterOptions++)
		3.1	Imprimir sOptions[eCounterOptions]
	4.	Fin Para.
	5.	Hacer
		5.1	Imprimir "Escoge una opci�n: "
		5.2	Leer eNumber.
		5.3	Caso(eNumber)
			5.3.1	caso 1:
				5.3.1.1	Imprimir "Escribe un n�mero: "
				5.3.1.2	Leer eNumberBase.
				5.3.1.3	Imprimir "Escribe otro n�mero para incrementar el anterior: "
				5.3.1.4	Leer eNumberIncrement.
				5.3.1.5	Mientras(eCounterIncrement <= 15)
						5.3.1.5.1	Imprimir eNumberBase
						5.3.1.5.2	eNumberBase += eNumberIncrement
						5.3.1.5.3	eCounterIncrement++
				5.3.1.6	Fin Mientras
			5.3.2	Fin caso 1.
			5.3.3	caso 2:
				5.3.3.1	Imprimir "Escribe un n�mero l�mite para determinar el rango: "
				5.3.3.2	Leer eFirstLimit.
				5.3.3.3	Imprimir "Escribe otro n�mero l�mite para determinar el rango: "
				5.3.3.4	Leer eSecondLimit.
				5.3.3.5	Imprimir "Escribe un n�mero para evaluar que se encuentre dentro del rango establecido por los n�meros que ingresaste anteriormente: "
				5.3.3.6	Leer eNumberRange.
				5.3.3.7	Si(eFirstLimit < eSecondLimit) entonces
						5.3.3.7.1	eLeesLimit <- eFirstLimit
						5.3.3.7.2	eHigherLimit <- eSecondLimit
				5.3.3.8	Fin Si.
				5.3.3.9	Si no
						5.3.3.9.1	eLeesLimit <- eSecondLimit
						5.3.3.9.2	eHigherLimit <- eFirstLimit
				5.3.3.10	Fin Si no
				5.3.3.11	Hacer
						5.3.3.11.1	Imprimir eNumberRange.
						5.3.3.11.2	eNumberRange - -
				5.3.3.12	Fin Hacer
				5.3.3.13	Mientras(eNumberRange > eLessLimit && eNumberRange < eHigherLimit)
				5.3.3.14	Fin Mientras
			5.3.4	Fin caso 2
			5.3.5	caso 3:
				5.3.5.1	Imprimir "El programa ha terminado."
			5.3.6	Fin caso 3.
			5.3.7	default
				5.3.7.1	Imprimir "S�lo se permiten las opciones 1, 2 y 3.\n"
			5.3.8	Fin default.
		5.4	Fin Caso.
	6.	Fin Hacer.
	7.	Mientras(eNumber  != 3)
	8.	Fin Mientras
	9.	Fin.
	
*/

//Bibliotecas al preprocesador.
#include<stdio.h> //Se usa parapoder mostrar los mensaje en la consola.
#include<string.h> //Se usa para procesar strings.
#include<locale.h> //Se usa para reconocer caracteres especiales.

//Inicio del programa
int main() {
	//funci�n para que reconozca los caracteres especiales.
	setlocale(LC_ALL, "");
	
	//Array de strings para mostrar el men� en la consola.
	char sOptions[15][15] = {"Opci�n 1", "Opci�n 2",
	"Opci�n 3", "Opci�n 4", "Opci�n 5", "Opci�n 6",
	"Opci�n 7", "Opci�n 8", "Opci�n 9", "Opci�n 10",
	"Opci�n 11", "Opci�n 12", "Opci�n 13", "Opci�n 14",
	"Opci�n 15"};
	
	//Variable para leer la opci�n que ingrese el usuario.
	int eNumber = 0;
	//Variable contador para el array de strings.
	int eCounterOptions = 0;
	//variable para la longitud del array de strings.
	int eLength = 0;
	
	//Variables del caso 1
	int eNumberBase = 0; //Variable que almacena el n�mero del que parte el incremento.
	int eNumberIncrement = 0; //Variable contadora que ir� incrementando la anterior.
	int eCounterIncrement = 1; //Variable contadora para el ciclo while.
	
	//Variables del caso 2
	int eFirstLimit = 0; //Variable para uno de los l�mites del rango.
	int eSecondLimit = 0; //Variable para otro de los l�mites del rango.
	int eNumberRange = 0; //Variable para evaluar si el n�mero ingresado se encuentra dentro del rango.
	int eHigherLimit = 0; //Variable que almacena el l�mite mayor.
	int eLessLimit = 0; //Variable que almacena el l�mite menor.
	
	eLength = sizeof(sOptions) / sizeof(sOptions[0]); // divisi�n para obtener la longitud de la cadena.
	//Inicia el ciclo for.
	for(eCounterOptions; eCounterOptions <= eLength; eCounterOptions++) { //se recorre el array de strings.
		printf("%s \n", sOptions[eCounterOptions]); //se muestra en la consola las opciones del el array de strings.
	} //Termina el ciclo for.
	
	//Inicia el ciclo do-while para ajecutar el programa varias veces
	do { 
		printf("Escoge una opci�n: "); //se le pide al usuario que escoja una opci�n del men�.
		scanf("%i", &eNumber); //Se lee la opci�n que ingres� el usuario.
		
		// Inicia el ciclo switch para evaluar la opci�n que ingres� el usuario.
		switch(eNumber) {
//			//Inicia el caso 1.
			case 1: //En caso de que el usuario haya ingresado la opci�n 1...
				printf("Escribe un n�mero: "); // Se le pide que escriba un n�mero para incrementar su valor.
				scanf("%i", &eNumberBase); //Se lee el d�gito que ingres�.
			
				printf("Escribe otro n�mero para incrementar el anterior: "); //Se le pide al usuario que ingrese un n�mero para incrementar el anterior.
				scanf("%i", &eNumberIncrement); //Se lee el d�gito que ingres� el usuario para incrementar eNumberBase.
			
				//Inicia ciclo while.
				while(eCounterIncrement <= 15) { //Mientras la variable contadora sea menor o igual a 15, se ejecutar� 15 veces el mismo proceso.
					printf("%i\n", eNumberBase); // se muestra en la consola el proceso del incremento.
					eNumberBase += eNumberIncrement; //eNumberIncrement incrementa el valor de eNumberBase.
					eCounterIncrement++; //Incrementa la variable contadora del ciclo while
				} //fin del ciclo while.
			break; //Fin del caso 1
			//Inicia el caso 2.
			case 2:
				//Se le pide al usuario que ingrese un n�mero l�mite para el rango.
				printf("Escribe un n�mero l�mite para determinar el rango: ");
				//Se lee el n�mero l�mite que ingres� el usuario.
				scanf("%i", &eFirstLimit);
			
				//Se le pide al usuario que ingrese otro n�mero l�mite para el rango.
				printf("Escribe otro n�mero l�mite para determinar el rango: ");
				//Se lee el segundo n�mero l�mite que ingres� el usuario.
				scanf("%i", &eSecondLimit);
			
				//Se le pide al usuario que ingrese un n�mero para evaluar que se encuentre dentro del rango establecido.
				printf("Escribe un n�mero para evaluar que se encuentre dentro\ndel rango establecido por los n�meros que ingresaste anteriormente: ");
				//Se lee el n�mero que ingres� el usuario.
				scanf("%i", &eNumberRange);
			
				//Inicia la sentencia if-else
				if(eFirstLimit < eSecondLimit) { //Si eFirstLimit es menor que eSecondLimit...
					eLessLimit = eFirstLimit; // se le asigna el valor m�s peque�o a eLessLimit y...
					eHigherLimit = eSecondLimit; // se le asigna el valor m�s grande a eHigherLimit
				} else { // si eFirstLimit es mayor que eSecondLimit...
					eLessLimit = eSecondLimit; // se le asigna el valor m�s peque�o a eLessLimit y...
					eHigherLimit = eFirstLimit; // se le asigna el valor m�s grande a eHigherLimit
				} // fin del ciclo if-else.
			
				//Inicia el ciclo do-while
				do {
					printf("%i\n", eNumberRange); // se muestra en consola el decremento de eNumberRange.
					eNumberRange--; //Va disminuyendo el valor de eNumberRange hasta llegar al valor m�nimo del rango.
				} while(eNumberRange >= eLessLimit && eNumberRange <= eHigherLimit); // lo anterior se ejecuta, mientras esto sea verdadero.
				//fin del ciclo do-while
			break; //fin del caso 2.
			case 3: //Inicia caso 3.
				printf("El programa ha terminado."); //Se muestra en consola que el programa seha terminado.
			break; //Fin del caso 3.
			default: //Inicia default
				printf("S�lo se permiten las opciones 1, 2 y 3.\n"); //En caso que el usuario no haya ingresado ninguna de las 3 opciones establecidad
				//anteriormente, se muestra en pantalla que s�lo se permiten esas opciones y se vuelve a ejecutar el ciclo do-while.
			break; //fin de default.
		} //Fin del Caso principal.
	} while(eNumber != 3); //El c�digo anteiror se ejecuta, miestras el n�mero ingresado por el usuario sea diferente de 3.
	//fin del ciclo do-while.
	
} //Fin del programa.
