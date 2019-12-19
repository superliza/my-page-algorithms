/*
	Name: Promedio de unx alumnx.
	Copyright: 2019
	Author: Elizabeth Guerrero Torres
	Date: 17/12/19 00:34
	Description: Obtener el promedio de un alumno con 5 calificaciones y mostrar su número de cuenta.
	
	PSEUDOCÓDIGO
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
		3.	Imprimir "Escribe tu número de cuenta con nueve caracteres: "
		4.	Leer cAccountNumber.
		5.	Imprimir "Escribe la primera calificación: "
		6.	Leer fQualification1.
		7.	Imprimir "Escribe la segunda calificación: "
		8.	Leer fQualification2.
		9.	Imprimir "Escribe la tercera calificación: "
		10.	Leer fQualification3.
		11.	Imprimir "Escribe la cuarta calificación: "
		12.	Leer fQualification4.
		13.	Imprimir "Escribe la quinta calificación: "
		14.	Leer fQualification5.
		15.	Calcular fSumQualifications <- (fQualification1 + fQualification2 + fQualification3 + fQualification4 + fQualification5)
		16.	Calcular fResult <- (fSumQualifications / keNumDivisor)
		17.	Imprimir "Tu número de cuenta es: ", cAccountNumber "Y tu promedio es: ", fResult
		18.	Fin

*/

//Biblioteca al preprocesador para funciones de entrada y salida principalmente.
#include<stdio.h> //standard input-output header.

//Inicio del programa
int main() {
	//Inicializar variables
	float fQualification1 = 0; //variable que almacenará el valor de la primera calificación.
	float fQualification2 = 0; //variable que almacenará el valor de la segunda calificación.
	float fQualification3 = 0; //variable que almacenará el valor de la tercera calificación.
	float fQualification4 = 0; //variable que almacenará el valor de la cuarta calificación.
	float fQualification5 = 0; //variable que almacenará el valor de la quinta calificación.
	float fSumQualifications = 0; //variable que almacenará el valor de la suma de calificaciones.
	float fResult = 0; //variable que almacenará el resultado del promedio del/la alumnx.
	char cAccountNumber[10] = "012345678"; //variable que almacenará el número de cuenta del/la alumnx.
	//Inicializar constante
	const int keNumDivisor = 5; //número de calificaciones aceptadas.
	
	//Se le pide al/la usuarix que ingrese su número de cuenta.
	printf("Escribe tu número de cuenta con 9 carcateres: ");
	//Se lee el número de cuenta.
	fgets(cAccountNumber, 10, stdin);
	
	//Se le pide al/la usuarix que ingrese la primera calificación.
	printf("Escribe la primera calificación: ");
	//Se lee el valor de la primera calificación.
	scanf("%f", &fQualification1);
	
	//Se le pide al/la usuarix que ingrese la segunda calificación.
	printf("Escribe la segunda calificación: ");
	//Se lee el valor de la segunda calificación.
	scanf("%f", &fQualification2);
	
	//Se le pide al/la usuarix que ingrese la tercera calificación.
	printf("Escribe la tercera calificación: ");
	//Se lee el valor de la tercera calificación.
	scanf("%f", &fQualification3);
	
	//Se le pide al/la usuarix que ingrese la cuarta calificación.
	printf("Escribe la cuarta calificación: ");
	//Se lee el valor de la cuarta calificación.
	scanf("%f", &fQualification4);
	
	//Se le pide al/la usuarix que ingrese la quinta calificación.
	printf("Escribe la quinta calificación: ");
	//Se lee el valor de la quinta calificación.
	scanf("%f", &fQualification5);
	
	//Se realiza la suma de las calificaciones.
	fSumQualifications = fQualification1 + fQualification2 + fQualification3 + fQualification4 + fQualification5;
	//Se obtiene el promedio de las calificaciones.
	fResult = fSumQualifications / keNumDivisor;
	
	//Se imprime el procedio y el número de cuenta del/la alumnx.
	printf("Tu número de cuenta es: %s\nY tu promedio es: %f", cAccountNumber, fResult);
} //Fin del programa.
