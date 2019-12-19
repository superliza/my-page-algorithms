/*
	Name: Multiplicaciones
	Copyright: 2019
	Author: Elizabeth Guerrero Torres
	Date: 18/12/19 18:00
	Description: Es un problema matemático donde se requiere multiplicar 4 dígitos de tipo entero por 10 cada uno.
	
	Pseudocódigo:
		0. Inicio
		1. Inicializar variables
			1.1 eNumberA: entero <- 0
			1.2 eNumberB: entero <- 0
			1.3 eNumberC: entero <- 0
			1.4 eNumberD: enteto <- 0
			1.5 eResultA: entero <- 0
			1.6 eResultB: entero <- 0
			1.7 eResultC: entero <- 0
			1.8 eResultD: entero <- 0
		2. Inicializar constante
			2.1 keNumberE <- 10
		3. Escribir "dame el valor del número a”
		4. Leer eNumberA
		5. Calcular eResultA <- (eNumberA* keNumberE)
		6. Escribir "dame el valor del número b”
		7. Leer "eNumberB"
		8. Calcular eResultB <- (eNumberB * keNumberE)
		9. Escribir "dame el valor de c”
		10. Leer "eResultC"
		11. Calcular eResultC <- (eNumberC * keNumberE)
		12. Escribir "dame el valor de d”
		13. Leer "eResultD"
		14. Calcular eResultD <- (eNumberD * keNumberE)
		15. Imprimir "El resultado de las multiplicaciones de los números a, b, c, d es" eResultA, eResultB, eResultC, eResultD.
		16. Fin

*/

//Biblioteca al preprocesador para funciones de entrada y salida principalmente.
#include<stdio.h> //standard input-output header

//Inicio del programa
int main() {
	//Inicializar variables
	int eNumberA = 0; //variable que almacena el valor de 'a'.
	int eNumberB = 0; //variable que almacena el valor de 'b'.
	int eNumberC = 0; //variable que almacena el valor de 'c'.
	int eNumberD = 0; //variable que almacena el valor de 'd'.
	int eResultA = 0; //variable que almacena el resultado de 'a'.
	int eResultB = 0; //variable que almacena el resultado de 'b'.
	int eResultC = 0; //variable que almacena el resultado de 'c'.
	int eResultD = 0; //variable que almacena el resultado de 'd'.
	//Inicializar constante.
	const int keNumberE = 10; //constante que almacena el número a multiplicar por los otros números..
	
	//Se le pide al usuario que ingrese el valor de a.
	printf("Escribe el valor del número 'a': ");
	//Se lee el valor de a.
	scanf("%i", &eNumberA);
	//Se calcula eñ resultado de la multiplicación de a.
	eResultA = eNumberA * keNumberE;
	
	//Se pide al usuario que ingrese el valor de b.
	printf("Escribe el valor del número 'b': ");
	//Se lee el valor de b.
	scanf("%i", &eNumberB);
	//Se calcula eñ resultado de la multiplicación de b.
	eResultB = eNumberB * keNumberE;
	
	//Se pide al usuario que ingrese el valor de c.
	printf("Escribe el valor del número 'c': ");
	//Se lee el valor de c.
	scanf("%i", &eNumberC);
	//Se calcula eñ resultado de la multiplicación de c.
	eResultC = eNumberC * keNumberE;
	
	//Se pide al usuario que ingrese el valor de d.
	printf("Escribe el valor del número 'd': ");
	//Se lee el valor de d.
	scanf("%i", &eNumberD);
	//Se calcula eñ resultado de la multiplicación de d.
	eResultD = eNumberD * keNumberE;
	
	//Se muetra el resultado de cada una de las multiplicaciones realizadas.
	printf("El resultado de las multiplicaciones de los números 'a', 'b' c' y 'd', es: a = %i, b = %i, c = %i, d = %i", eResultA, eResultB, eResultC, eResultD);
} //Fin del programa.
