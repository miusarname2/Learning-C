// uso de Macros,& operacion con variables

#include<stdio.h>;

#define PI 3.1416

int main3() {

	float constante;

	constante = PI;

	printf("El valor de la constante es de %f", constante);

	return 0;
}

int main4() {
	int variableToAssing;

	printf("Introduce el valor a la variable:");
	scanf_s("%i", &variableToAssing);
	printf("El valor de la varible definida es de %i", variableToAssing);

	return 0;
}