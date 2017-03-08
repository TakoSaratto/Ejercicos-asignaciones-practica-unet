#include <stdio.h>
void main()
{
	int opcion;
	printf("Ingrese un numero entero: ");
	scanf("%d",&opcion);
	switch(opcion)
	{
		case 1:
			printf("Ha ingresado el numero uno\n");
			break;
		case 2:
			printf("Ha ingresado el numero dos\n");
			break;
		case 3:
			printf("Ha ingresado el numero tres\n");
			break;
		case 4:
			printf("Ha ingresado el numero cuatro\n");
			break;
		case 5:
			printf("Ha ingresado el numero cinco\n");
			break;
		case 6:
			printf("Ha ingresado el numero seis\n");
			break;
		case 7:
			printf("Ha ingresado el numero siete\n");
			break;
		case 8:
			printf("Ha ingresado el numero ocho\n");
			break;
		case 9:
			printf("Ha ingresado el numero nueve\n");
			break;
		defalut:
			printf("Ha ingresado un numero no valido\n");
			break;
	}
}
