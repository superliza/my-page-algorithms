#include<stdio.h>

int main() {
	char cLetter = '0';
	
	printf("Dame una letra: ");
	scanf("%c", &cLetter);
	
	if(cLetter == 'L' || cLetter == 'M' || cLetter == 'X' || cLetter == 'J' || cLetter == 'V') {
		printf("Es un día laboral");
	}
	
}
