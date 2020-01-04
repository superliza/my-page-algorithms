/*
	Name: Dulces de la fiesta
	Copyright: 2019
	Author: Elizabeth Guerrero Torres
	Date: 15/12/19 20:03
	Description: Calcular cu�ntos dulces se consumieron en una fiesta y el gasto del consumo, tomando en cuenta un precio de $12.
	
	PSEUDOC�DIGO
		0.	Inicio
		1.	Inicializar variables:
			1.1	eCandyLeftOver <- 0
			1.2	eTotalCandy <- 0
			1.3	eTotalCandyPurchased <- 0
			1.4	eTotalConsuption <- 0
		2.	Inicializar constante:
			2.1	keCandyPrice <- 12
		3.	Imprimir "�Cu�ntos dulces compraste? "
		4.	Leer eTotalCandyPurchased.
		5.	Imprimir "�Cu�ntos dulces sobraron?"
		6.	Leer eCandyLeftOver.
		7.	Calcular eTotalCandy <- eTotalCandyPurchased - eCandyLeftOver
		8.	Calcular eTotalConsuption <- eTotalCandy * keCandyPrice
		9.	Imprimir "El total de los dulces consumidos es ", eTotalCandy "y el gasto del consumo es ", eTotalConsuption
		10.	Fin

*/

//Biblioteca al preprocesador para funciones de entrada y salida principalmente.
#include<stdio.h> //standard input-output header

//Inicio del programa
int main() {
	//Inicializar variables
	int eCandyLeftOver = 0; //variable que almacena los dulces que sobraron
	int eTotalCandy = 0; //variable que almacena el total de los dulces que se consumieron
	int eTotalCandyPurchased = 0; //variables que almacena los dulces que se compraron
	int eTotalConsuption = 0; //variable que almacena el total del consumo en pesos.
	
	//Se inicializa la constante
	const int keCandyPrice = 12; //constante del precio de los dulces
	
	//Se pide al usuario que ingrese el n�mero de dulces que compr�.
	printf("�u�ntos dulces compraste? ");
	//Se guarda el n�mero de dulces que compr�.
	scanf("%i", &eTotalCandyPurchased);
	
	//Se pide al usuario que ingrese los dulces que le sobraron en la fiesta
	printf("�Cu�ntos dulces sobraron? ");
	//Se guarda el n�mero de dulces que le sobraron.
	scanf("%i", &eCandyLeftOver);
	
	//Se realiza la expresi�n para calcular el total de los dulces consumidos.
	eTotalCandy = eTotalCandyPurchased - eCandyLeftOver;
	//Se realiza otra expresi�n para calcular el total del consumo en pesos.
	eTotalConsuption = eTotalCandy * keCandyPrice;
	//Se imprime el consumo de sulces y el gasto.
	printf("El total de los dulces consumidos es %i y el gasto del consumo es %i", eTotalCandy, eTotalConsuption);
} //Fin del programa
