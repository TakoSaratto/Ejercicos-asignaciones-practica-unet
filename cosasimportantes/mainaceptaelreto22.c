#include <stdio.h>
#include <stdlib.h>

//Tercera re-escritura del ejercicio 2 de Acepta El Reto!, esta vez, lo hare sin pedir la cantidad de llaves, solamente con ifs y eso
//Rezemos porque esta vez funcione, gracias al cielo aun es temprano, 08:22 am, 28/02/2017
//Nada funciono, tarde 10 minutos escribiendo el programa, pero aun asi, no funciono
//Este ejercicio me jodera en un futuro, estoy seguro, ahora, hare algo que el profesor dio en la clase, a ver si eso si corre

int main() 
{
	int num1, num2, r, x;
	num1=0; num2=0;
	printf("Ahora enfrenta tus miedos, novato");
	printf("\nIntroduce la llave que deseas verificar,separada por comas");
	printf("\nSi la llave existe, el programa respondera SI, si no existe, NO\n");
	scanf("\n%d", &num1);
	scanf("\n%d", &num2);
	
	if(num1<num2);
	{
		for (x=0;x<num1;x++)
		{
			if(num1%x==0);
			r++;
		}
		if(r==2)
		{
			printf("\nNO");
		}
		else
		{
			if (r>=3);
			printf("\nSI");
		}
	}
	if (num1>num2);
	{
		for (x=0;x<num2;x++)
		{
			if(num2%x==0);
			r++;
		}
		if(r==2)
		{
			printf("\nNO");
		}
		else
		{
			if (r>=3);
			printf("\nSI");
		}
	}
	return 0;
}
