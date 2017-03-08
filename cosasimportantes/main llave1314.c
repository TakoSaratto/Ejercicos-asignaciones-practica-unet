#include <stdio.h>
#include <stdlib.h>

//Para ser honesto, esperaba que resolver estos problemas me fueran a llevar mas tiempo
//Pero este lo pude resolver con paula en el laboratorio
//Para ser honesto, una vez que comprendes las cosas basicas, esto se vuelve divertido
//HUEHUEHUEHUEHUEHUEHUEHUEHUE

int main(int argc, char *argv[]) 
{
	int num1, num2, resul;
	printf("Debes de estar muy desesperado como para venir a pedirme ayuda...");
	printf("\nIntroduce la llave de la cual deseas comprobar su existencia, novato");
	printf("\n");
	scanf("%d-%d", &num1, &num2);
	
	if (num1<num2)
	{
		resul=num1%2;
		if (resul==0)
		{
			printf("\nSI");
		}
		else 
		{
			printf("\nNO");
		}
	}
	else
	{
		resul=num2%2;
		if (resul==0)
		{
			printf("\nSI");
		}
		else 
		{
			printf("\nNO");
		}
	}
	
	return 0;
}
