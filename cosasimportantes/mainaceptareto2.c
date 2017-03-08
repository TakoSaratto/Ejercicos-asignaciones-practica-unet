#include <stdio.h>
#include <stdlib.h>

//Segundo ejercicio, esta vez de la llave 13-14
//Ya sabia que era falsa desde que lei 13-14, despues de todo papa es mecanico y, aunque he aprendido poco, nadie se salva de una novatada
//Ahora, vamos a empezar...
//No lo logre al primer dia, pero ya tengo una idea de que voy a hacer
//Por el momento, ire a dormir, 10:01 PM, 27/02/2017
//Escribi todo el codigo, tome algunas cosas de internet y las memorize... PERO AHORA ME SUELTA ERROR ESTA M"$12&%#A!
//Tengo que seguir, reescribire todo el codigo si es necesario...

int main() {
	
	int x,num1,num2,a,i;
	float loops;
	loops=0;
	a=0;
	i=0;
	printf("Debes estar realmente desesperado para venir a pedirme ayuda...\n");
	printf("Aqui sabras si la llave que buscas existe, novato\n");
	printf("Pero primero, ingresa la cantidad de llaves que buscas\n");
	printf("Luego, las llaves que necesitas, ejemplo: 12-13\n");
	printf("Tip: asegurate de presionar enter despues de introducir cada llave\n");
	scanf("%f", &loops);
	
	for (x=0;x<=loops;x++)
	{
		printf("\nAhora introduce la llave");
		printf("\nDebido a limitaciones tecnicas, Solo podras ingresar una llave cada vez que se te pregunte");
		printf("\nLuego, cuando sepas el resultado, introduce otra\n");
		scanf("\n%d,%d", &num1, &num2);
		getch();
		if (num1<num2)
		{
			for (i=0;i<=num1;i++)
			{
				if (num1%i==0)
				a++;
				}
			if (a==2)
			{
				printf("\nNO");
			}
			else
			{
				printf("\nSI");
			}
			}
		else
		{
			for (i=0;i<=num2;i++)
			{
				if (num2%i==0)
				a++;
				}
			if (a==2)
			{
				printf("\nNO");
			}
			else
			{
				printf("\nSI");
			}
		}
		}

	return 0;
}
