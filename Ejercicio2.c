// Escribir un programa que lea un entero positivo, n, introducido por el usuario y después muestre en pantalla la suma de todos los enteros desde 1 hasta n. La suma de los primeros enteros positivos puede ser calculada de la siguiente forma:

#include<stdio.h>;

int mains() {
	int number, suma;

	printf("Dame un numero entero(positivo) y te hare un truco de magia");
	scanf_s("%i", &number);

	suma = number * (number + 1) / 2;

	printf("¡Magia! Ahora tu numero es %i", suma);

	return 0;
}