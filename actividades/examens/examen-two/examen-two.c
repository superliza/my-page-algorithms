/*
	Name: Examen 2
	Copyright: 2019
	Author: Elizabeth Guerrero Torres
	Date: 04/12/19 20:26
	Description: Dadas las letras “L”, “M”, “X”, “J”, “V” u otra letra, mostrar en pantalla a qué día de la semana pertenecen e indicar si es un día laboral o fin de 
	semana.
	
	PSEUDOCÓDIGO
		0. Inicio
		1. Inicializar variable:
			1.1 cLetter ? ‘0’
		2. Imprimir “Dame una letra en mayúscula.”
		3. Leer cLetter.
		4. SI(cLetter == ‘L’ || cLetter == ‘M’ || cLetter == ‘X’ || cLetter == ‘J’ || cLetter == ‘V’) entonces
			4.1 Imprimir “Es un día laboral.”
		5. Si no
			5.1 Imprimir “Es un fin de semana.”
		6. Caso(cLetter)
			6.1 caso “L”:
				6.1.1 Imprimir “Lunes”
				6.1.2 Fin caso “L”.
			6.2 caso “M”:
				6.2.1 Imprimir “Martes”
				6.2.2 Fin caso “M”.
			6.3 caso “X”:
				6.3.1 Imprimir “Miércoles”
				6.3.2 Fin caso “X”
			6.4 caso “J”:
				6.4.1 Imprimir “Jueves”
				6.4.2 Fin caso “J”.
			6.5 caso “V”:
				6.5.1 Imprimir “Viernes”
				6.5.2 Fin caso “V”.
			6.6 default
				6.6.1 Imprimir “Fin de semana.”
				6.6.2 Fin default.
			7. Fin Caso.
			8. Fin.
*/

//Biblioteca al preprocesador.
#include<stdio.h>

//Inicio del programa.
int main() {
	//Inicicalización de la variable de entrada.
	char cLetter = 'o';
	
	//Imprimir en pantalla el mensaje para que el usuario introduza una letra.
	printf("Dame una letra mayúscula: ");
	//Leer la letra que puso el usuaio.
	scanf("%c", &cLetter);
	
	//Si la letra que ingresó el usuario es igual a 'L', 'M', 'X', 'J' o 'V', entonces:
	if(cLetter == 'L' || cLetter == 'M' || cLetter == 'X' || cLetter == 'J' || cLetter == 'V') {
		//... imprimir que es un día laboral.
		printf("Es un día laboral: ");
		// si no...
	} else {
		//imprimir que es fin de semana.
		printf("Es un fin de semana.\n");
	} // Fin de la sentencia if-else.
	
	//Inicia la sentencia switch
	switch(cLetter) { //En caso de que la letra sea igual a los siguientes casos...
		case 'L':
			//... se imprimen los siguientes mensaje.
			printf("Lunes");
		break;
		case 'M':
			printf("Martes");
		break;
		case 'X':
			printf("Miércoles");
		break;
		case 'J':
			printf("Jueves");
		break;
		case 'V':
			printf("Viernes");
		// y en caso de que no ingrese ninguna de las anteriores...
		default:
			//Se imprime que es fin de semana.
			printf("Fin de semana.");
		break;
	} //Fin de la sentencia switch.
} //Fin del programa.
