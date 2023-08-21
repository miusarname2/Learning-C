// Ordenamiento metodo burbuja (Sin conocer el algoritmo)
// Intercambiar el valor de dos numeros introducidos por teclado
// Lo que nos propone el metodo es, usar una varible auxiliar/temporal para los valores a intercambiar 

#include<stdio.h>;

int main6() {
	int x , y , temp ;

	printf("Introduce el valor para la variable x:");
	scanf_s("%i", &x);

	printf("Introduce el valor para la variable y:");
	scanf_s("%i", &y);

	temp = x;
	x = y;
	y = temp;

	printf(" Una vez intercambiado quedo asi, donde x es igual a %i , y es igual a %i", x, y);

	return 0;
}
	