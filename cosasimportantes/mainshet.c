#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

//Segunda semana de la carrera, a punto de joder mi cerebro haciendo un programa del pais de las maravillas y eso
//Es tarea, asi que ¡A darle!
//P.D.: Si muero, quemen todas mis cosas y todo lo que tenga que ver conmigo, huehuehuehuehuehue
//El programa funciona bien cuando se cumplen las condiciones que le propongo, pero cuando intenta arrojar la cantidad de dias todo se va al carajo
//lo dejare hasta aqui, me basto con que funcionaran 2 de 3 cosas que lo mande a hacer
//Voy a trabajar en mi siguiente programa, hasta la vista baby
//P.D.: 314 lineas COMPLETAMENTE INUTILES!

int main()
{
	int enero; int febrero; int marzo; int abril; int mayo; int junio; int julio; int agosto; int septiembre; int octubre; int noviembre; int diciembre;
	enero=0; febrero=31; marzo=61; abril=92; mayo=122; junio=153; julio=183; agosto=214; septiembre=245; octubre=275; noviembre=306; diciembre=337;
	int anioent;
	anioent=368;
	int dia;
	dia=0;
	int mes;
	mes=0;
	int anio;
	anio=0;
	int mesout;
	mesout=0;
	int anioout;
	anioout=0;
	int diaout;
	diaout=0;
	int totalout;
	totalout=0;
	int totalout1;
	totalout1=0;
	int totalout2;
	totalout2=0;
	int diaact;
	diaact=0;
	int mesact;
	mesact=0;
	int anioact;
	anioact=0;
	int totalout3;
	totalout3=0;
	printf("Bienvenido al calculador de no-cumpleaños del pais de las maravillas!");
	printf("\nPor favor, introduce tu fecha de cumpleaños separada por comas\n");
	printf("\nLuego de introducir la primera fecha, introduce la fecha actual de la misma manera");
	printf("\n");
	scanf("%d,%d,%d", &dia, &mes, &anio); scanf("%d,%d,%d", &diaact, &mesact, &anioact);
	
	switch (mes)
	{
		case 1 :
		totalout=dia+enero;
		totalout1=anioact-anio;
		totalout2=totalout1*anioent;
		totalout3=totalout+totalout2-totalout1;
		if (diaact==dia && mesact==mes)
		{
			printf("Hoy no es tu no-cumpleaños, mala suerte conejo!");
		}
		else 
		{
			if (anio>9999)
			{
					printf("Tramposo! nadie es tan viejo!");
			}
			else
			{
			printf("La cantidad de no-cumpleaños que cumples hoy es %d", &totalout3);
			}
		}
		break;
		case 2 :
		totalout=dia+febrero;
		totalout1=anioact-anio;
		totalout2=totalout1*anioent;
		totalout3=totalout+totalout2-totalout1;
		if (diaact==dia && mesact==mes)
		{
			printf("Hoy no es tu no-cumpleaños, mala suerte conejo!");
		}
		else 
		{
			if (anio>9999)
			{
					printf("Tramposo! nadie es tan viejo!");
			}
			else
			{
			printf("La cantidad de no-cumpleaños que cumples hoy es %d", totalout3);
			}
		}
		break;
		case 3 :
		totalout=dia+marzo;
		totalout1=anioact-anio;
		totalout2=totalout1*anioent;
		totalout3=totalout+totalout2-totalout1;
		if (diaact==dia && mesact==mes)
		{
			printf("Hoy no es tu no-cumpleaños, mala suerte conejo!");
		}
		else 
		{
			if (anio>9999)
			{
					printf("Tramposo! nadie es tan viejo!");
			}
			else
			{
			printf("La cantidad de no-cumpleaños que cumples hoy es %d", totalout3);
			}
		}
		break;
		case 4 :
		totalout=dia+abril;
		totalout1=anioact-anio;
		totalout2=totalout1*anioent;
		totalout3=totalout+totalout2-totalout1;
		if (diaact==dia && mesact==mes)
		{
			printf("Hoy no es tu no-cumpleaños, mala suerte conejo!");
		}
		else 
		{
			if (anio>9999)
			{
					printf("Tramposo! nadie es tan viejo!");
			}
			else
			{
			printf("La cantidad de no-cumpleaños que cumples hoy es %d", totalout3);
			}
		}
		break;
		case 5 :
		totalout=dia+mayo;
		totalout1=anioact-anio;
		totalout2=totalout1*anioent;
		totalout3=totalout+totalout2-totalout1;
		if (diaact==dia && mesact==mes)
		{
			printf("Hoy no es tu no-cumpleaños, mala suerte conejo!");
		}
		else 
		{
			if (anio>9999)
			{
					printf("Tramposo! nadie es tan viejo!");
			}
			else
			{
			printf("La cantidad de no-cumpleaños que cumples hoy es %d", totalout3);
			}
		}
		break;
		case 6 :
		totalout=dia+junio;
		totalout1=anioact-anio;
		totalout2=totalout1*anioent;
		totalout3=totalout+totalout2-totalout1;
		if (diaact==dia && mesact==mes)
		{
			printf("Hoy no es tu no-cumpleaños, mala suerte conejo!");
		}
		else 
		{
			if (anio>9999)
			{
					printf("Tramposo! nadie es tan viejo!");
			}
			else
			{
			printf("La cantidad de no-cumpleaños que cumples hoy es %d", totalout3);
			}
		}
		break;
		case 7 :
		totalout=dia+julio;
		totalout1=anioact-anio;
		totalout2=totalout1*anioent;
		totalout3=totalout+totalout2-totalout1;
		if (diaact==dia && mesact==mes)
		{
			printf("Hoy no es tu no-cumpleaños, mala suerte conejo!");
		}
		else 
		{
			if (anio>9999)
			{
					printf("Tramposo! nadie es tan viejo!");
			}
			else
			{
			printf("La cantidad de no-cumpleaños que cumples hoy es %d", totalout3);
			}
		}
		break;
		case 8 :
		totalout=dia+agosto;
		totalout1=anioact-anio;
		totalout2=totalout1*anioent;
		totalout3=totalout+totalout2-totalout1;
		if (diaact==dia && mesact==mes)
		{
			printf("Hoy no es tu no-cumpleaños, mala suerte conejo!");
		}
		else 
		{
			if (anio>9999)
			{
					printf("Tramposo! nadie es tan viejo!");
			}
			else
			{
			printf("La cantidad de no-cumpleaños que cumples hoy es %d", totalout3);
			}
		}
		break;
		case 9 :
		totalout=dia+septiembre;
		totalout1=anioact-anio;
		totalout2=totalout1*anioent;
		totalout3=totalout+totalout2-totalout1;
		if (diaact==dia && mesact==mes)
		{
			printf("Hoy no es tu no-cumpleaños, mala suerte conejo!");
		}
		else 
		{
			if (anio>9999)
			{
					printf("Tramposo! nadie es tan viejo!");
			}
			else
			{
			printf("La cantidad de no-cumpleaños que cumples hoy es %d", totalout3);
			}
		}
		break;
		case 10 :
		totalout=dia+octubre;
		totalout1=anioact-anio;
		totalout2=totalout1*anioent;
		totalout3=totalout+totalout2-totalout1;
		if (diaact==dia && mesact==mes)
		{
			printf("Hoy no es tu no cumpleaños, mala suerte conejo!");
		}
		else 
		{
			if (anio>9999)
			{
					printf("Tramposo! nadie es tan viejo!");
			}
			else
			{
			printf("La cantidad de no-cumpleaños que cumples hoy es %d", totalout3);
			}
		}
		break;
		case 11 :
		totalout=dia+noviembre;
		totalout1=anioact-anio;
		totalout2=totalout1*anioent;
		totalout3=totalout+totalout2-totalout1;
		if (diaact==dia && mesact==mes)
		{
			printf("Hoy no es tu no cumpleaños, mala suerte conejo!");
		}
		else 
		{
			if (anio>9999)
			{
					printf("Tramposo! nadie es tan viejo!");
			}
			else
			{
			printf("La cantidad de no-cumpleaños que cumples hoy es %d", totalout3);
			}
		}
		break;
		case 12 :
		totalout=dia+diciembre;
		totalout1=anioact-anio;
		totalout2=totalout1*anioent;
		totalout3=totalout+totalout2-totalout1;
		if (diaact==dia && mesact==mes)
		{
			printf("Hoy no es tu no cumpleaños, mala suerte conejo!");
		}
		else 
		{
			if (anio>9999)
			{
					printf("Tramposo! nadie es tan viejo!");
			}
			else
			{
			printf("La cantidad de no-cumpleaños que cumples hoy es %d", totalout3);
			}
		}
		
	}
	
	
	
	
	
	
	
	return 0;
}
