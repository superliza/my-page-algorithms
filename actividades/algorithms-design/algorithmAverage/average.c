/*
	Name: Promedio de unx alumnx.
	Copyright: 2019
	Author: Elizabeth Guerrero Torres
	Date: 17/12/19 00:34
	Description: Obtener el promedio de un alumno con 5 calificaciones y mostrar su n�mero de cuenta.
	
	PSEUDOC�DIGO
		0.	Inicio
		1.	Inicializar variables
			1.1	fQualification1 <- 0
			1.2	fQualification2 <- 0
			1.3	fQualification3 <- 0
			1.4	fQualification4 <- 0
			1.5	fQualification5 <- 0
			1.6	fSumQualifications <- 0
			1.7	cAccountNumber[10] <- "012345678"
			1.8	fResult <- 0
		2.	Inicializar constante
			2.1	keNumDivisor <- 5
		3.	Imprimir "Escribe tu n�mero de cuenta con nueve caracteres: "
		4.	Leer cAccountNumber.
		5.	Imprimir "Escribe la primera calificaci�n: "
		6.	Leer fQualification1.
		7.	Imprimir "Escribe la segunda calificaci�n: "
		8.	Leer fQualification2.
		9.	Imprimir "Escribe la tercera calificaci�n: "
		10.	Leer fQualification3.
		11.	Imprimir "Escribe la cuarta calificaci�n: "
		12.	Leer fQualification4.
		13.	Imprimir "Escribe la quinta calificaci�n: "
		14.	Leer fQualification5.
		15.	Calcular fSumQualifications <- (fQualification1 + fQualification2 + fQualification3 + fQualification4 + fQualification5)
		16.	Calcular fResult <- (fSumQualifications / keNumDivisor)
		17.	Imprimir "Tu n�mero de cuenta es: ", cAccountNumber "Y tu promedio es: ", fResult
		18.	Fin

*/

//Biblioteca al preprocesador para funciones de entrada y salida principalmente.
#include<stdio.h> //standard input-output header.

//Inicio del programa
int main() {
	//Inicializar variables
	float fQualification1 = 0; //variable que almacenar� el valor de la primera calificaci�n.
	float fQualification2 = 0; //variable que almacenar� el valor de la segunda calificaci�n.
	float fQualification3 = 0; //variable que almacenar� el valor de la tercera calificaci�n.
	float fQualification4 = 0; //variable que almacenar� el valor de la cuarta calificaci�n.
	float fQualification5 = 0; //variable que almacenar� el valor de la quinta calificaci�n.
	float fSumQualifications = 0; //variable que almacenar� el valor de la suma de calificaciones.
	float fResult = 0; //variable que almacenar� el resultado del promedio del/la alumnx.
	char cAccountNumber[10] = "012345678"; //variable que almacenar� el n�mero de cuenta del/la alumnx.
	//Inicializar constante
	const int keNumDivisor = 5; //n�mero de calificaciones aceptadas.
	
	//Se le pide al/la usuarix que ingrese su n�mero de cuenta.
	printf("Escribe tu n�mero de cuenta con 9 carcateres: ");
	//Se lee el n�mero de cuenta.
	fgets(cAccountNumber, 10, stdin);
	
	//Se le pide al/la usuarix que ingrese la primera calificaci�n.
	printf("Escribe la primera calificaci�n: ");
	//Se lee el valor de la primera calificaci�n.
	scanf("%f", &fQualification1);
	
	//Se le pide al/la usuarix que ingrese la segunda calificaci�n.
	printf("Escribe la segunda calificaci�n: ");
	//Se lee el valor de la segunda calificaci�n.
	scanf("%f", &fQualification2);
	
	//Se le pide al/la usuarix que ingrese la tercera calificaci�n.
	printf("Escribe la tercera calificaci�n: ");
	//Se lee el valor de la tercera calificaci�n.
	scanf("%f", &fQualification3);
	
	//Se le pide al/la usuarix que ingrese la cuarta calificaci�n.
	printf("Escribe la cuarta calificaci�n: ");
	//Se lee el valor de la cuarta calificaci�n.
	scanf("%f", &fQualification4);
	
	//Se le pide al/la usuarix que ingrese la quinta calificaci�n.
	printf("Escribe la quinta calificaci�n: ");
	//Se lee el valor de la quinta calificaci�n.
	scanf("%f", &fQualification5);
	
	//Se realiza la suma de las calificaciones.
	fSumQualifications = fQualification1 + fQualification2 + fQualification3 + fQualification4 + fQualification5;
	//Se obtiene el promedio de las calificaciones.
	fResult = fSumQualifications / keNumDivisor;
	
	//Se imprime el procedio y el n�mero de cuenta del/la alumnx.
	printf("Tu n�mero de cuenta es: %s\nY tu promedio es: %f", cAccountNumber, fResult);
} //Fin del programa.
