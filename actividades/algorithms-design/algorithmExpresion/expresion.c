/*
	Name: Resolver expresi�n matem�tica.
	Copyright: 2019
	Author: Elizabeth Guerrero Torres
	Date: 18/12/19 16:51
	Description: Es un problema matem�tico que requiere calcular la siguiente expresi�n, dados los enteros �eNumberA� y �eNumberB�: ((eNumberA + eNumberB)^2) / (3 * eNumberB).
	
	Pseudoc�digo
 		0. Inicio
		1. Inicializar variables
			1.1 eNumberA: entero <- 0
			1.2 eNumberB: entero <- 0
			1.3 fResult: flotante <- 0
		2. Escribir �dame el valor de a�.
		3. Leer eNumberA.
		4. Escribir �dame el valor de b�.
		5. Leer eNumberB.
		6. Calcular fResult <- ((eNumberA + eNumberB)2) / (3 * eNumberB)
		7. Imprimir �El resultado de la expresi�n es � fResult.
		8. Fin
*/

//Bibliotecas al preprocesador
#include<stdio.h> //funciones de entrada y salida principalmente (standard input-output header)
#include<math.h> //funciones matem�ticas

//Inicio del progrmaa
int main() {
	//Inicializar variables
	int eNumberA = 0; //variable que almacenar� el valor de "a".
	int eNumberB = 0; //variable que almacenar� el valor de "b".
	float fResult = 0; //variable que almacenar� el valor del resultado final.
	
	//Se le pide al usuario que ingrese un n�mero para determinar el valor de "a".
	printf("Escribe el valor de a: ");
	//Se lee el valor de "a".
	scanf("%i", &eNumberA);
	
	//Se le pide al usuaro que ingrese otro n�mero para determinar el valor de "b".
	printf("Escribe el valor de b: ");
	//Se lee el valor de "b".
	scanf("%i", &eNumberB);
	
	//Se calcula el resultado de la expresi�n.
	fResult = pow((eNumberA + eNumberB), 2) / (3 * eNumberB);
	//Se imprime el resultado de la espresi�n.
	printf("El resultado de la expresi�n es: %.2f", fResult);
} //Fin del programa.
