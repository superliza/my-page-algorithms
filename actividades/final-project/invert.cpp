#include <stdio.h>
 
int main (){
 
    int n = 01101000;
 
 
    int temp1 = ((n%2) * 2) ; //tomamos el ultimo numero y lo multiplicamos por 10
 
    n = n/2;               //guardamos el primer numero
 
    n += temp1;          //sumamos ambos y guardamos en n mismo para no desperdiciar memoria (Empaquetado en n)
 
    printf("%d", n ); //n contiene el numero invertido
 
    getchar();
    return 0;
}
