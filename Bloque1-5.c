//Aplicacion de conocimientos

#include<stdio.h>;
#include<math.h>;

int main5() {
	int num1 = 10;
	float num2 = 553.5;

	//Operaciones basicas
	float sum = num2 + num1;

	printf("El valor de la suma es de %f /n", sum);

	float rest = num2 - num1;

	printf("El valor de la resta es de %f /n", rest);

	float mult = num1 * num2;

	printf("El valor de la multiplicacion es de %f /n", mult);

	float divi = num2 / num1;

	printf("El valor de la division es de %f /n", divi);

	double resto = num1 % num1; // Solo se pueden usar enteros

	printf("El valor del resto es de %f /n", resto);

	float power = pow(num2, num1);

	printf("El valor de %f elevado a %i es de %f/n", num2, num1,power);
}