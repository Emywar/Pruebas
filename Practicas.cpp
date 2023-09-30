#include <stdio.h>
void main(void)
{
	float calificacion;
	printf("Calificacion: ");
	scanf_s("%f", &calificacion);
	if (calificacion >= 0 && calificacion <= 10)
	{
		if (calificacion >= 6)
		{
			printf("Aprobado, felicidades");
		}
		else
		{
			printf("Como te explico :/");
		}
	}
	else
	{
		printf("El valor debe ser entre 0 y 10");
	}
}