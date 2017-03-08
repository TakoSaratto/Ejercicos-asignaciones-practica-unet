#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>


int main() {
	
	int num;
	num=0;

	printf("Escriba el numero que desea revisar (Primo o compuesto)\n");
	scanf("\n%d", &num);
	
	if(num==2);
	{
		printf("\nEl numero es primo");
	}
	if(num%2==0)
	{
		if(num==2)
		{
			printf("\el numero es primo");
		}
		if (num%2==0)
		{
		printf("\nEl numero es compuesto");
		}
	}
	if(num%3==0)
	{
		printf("\nEl numero es compuesto");
	}
	if(num%5==0)
	{
		printf("\nEl numero es compuesto");
	}
	if(num%7==0)
	{
		printf("\nEl numero es compuesto");
	}
	if(num%11==0)
	{
		printf("\nEl numero es compuesto");
	}
	if(num%2!=0)
	{
		printf("\nEl numero es primo");
	}
	if(num%2!=0)
	{
		printf("\nEl numero es primo");
	}
	if(num%3!=0)
	{
		printf("\nEl numero es primo");
	}
	if(num%5!=0)
	{
		printf("\nEl numero es primo");
	}
	if(num%7!=0)
	{
		printf("\nEl numero es primo");
	}
	if(num%11!=0)
	{
		printf("\nEl numero es primo");
	}
	return 0;
	}

