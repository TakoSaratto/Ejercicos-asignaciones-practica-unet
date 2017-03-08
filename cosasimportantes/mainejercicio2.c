#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

//Segunda escritura del programa, sigue mandando error
//Empecé con esto a las 6 de la mañana, son las 8 y no hay progreso, ni con Switch ni con else o for
//Este ejercicio es posible, pero por el momento, algo se escapa de mis manos
//Sospecho ligeramente que la falla esta en el primer for, ya que es un ciclo
//Ahora, escribire el programa de manera que solamente lea una llave, a ver que sucede

int main() {
	
	int keyquant,x,a,r,keyone,keytwo,num1;
	r=0;
	printf("Debes de estar desesperado como para venir a buscar mi ayuda, novato\n");
	printf("\nPrimero, introduce la cantidad de llaves que necesitas\n");
	printf("\nLuego, las llaves, separadas por comas\n");
	scanf("\n%d\n", &keyquant);
	for (x=0;x<=keyquant;x++)
	{
		printf("\nAhora, introduzca la llave que necesita\n");
		scanf("\n%d,%d\n", &keyone, &keytwo);
		if (keyone<keytwo)
		num1=1;
		if (keyone>keytwo);
		num1=2;
		switch (num1)
		{
			case 1:
				for (a=0;a<keyone;a++)
				{
					if (keyone%a==0)
					r++;
				}
				if (r==2)
				{
					printf("\nNO");
				}
				else
				{
					printf("\nSI");
				}
			break;
			case 2:
				for (a=0;a<keytwo;a++)
				{
					if (keyone%a==0)
					r++;
				}
				if (r==2)
				{
					printf("\nNO");
				}
				else
				{
					printf("\nSI");
				}
			break;
		}
	}
	
	return 0;
}
