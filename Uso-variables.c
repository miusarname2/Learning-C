//Bloque 1.3 uso de variables

#include<stdio.h>

int main() {

	int number; //Esto es un numero entero en C
	int numberT = 2;
	float floatante = 5.5;
	char firstLetter = 'O';

	number = 5;

	//Opcion base
	//printf("El valor de la primera varible es %i\n", number);
	//printf("El valor de la segunda varible es de %i", numberT);
	//printf("El valor de la variable flotante es de %f", floatante);
	//printf("La primera letra de mi nombre es %c", firstLetter);

	//Opcion Pro
	printf("El valor de la primera variable es: %i. El valor de la segunda variable es %i. El valor de la variable flotante es de %f. La primera letra de mi nombre es %c", number, numberT, floatante, firstLetter);

	return 0;

}
