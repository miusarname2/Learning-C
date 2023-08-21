// Escribir un programa que pregunte al usuario por el número de horas trabajadas y el coste por hora. Después debe mostrar por pantalla la paga que le corresponde

#include<stdio.h>;

int main7() {
	float hTrabajadas, costeHora, total;

	printf("Cuantas horas trabajaste? :");
	scanf_s("%f", &hTrabajadas);
	printf("Cuanto cuesta la hora 7w7? :");
	scanf_s("%f", &costeHora);

	total = costeHora * hTrabajadas;

	printf("Trabajaste %f,y ganaste %f.", hTrabajadas, total);

	return 0;
}