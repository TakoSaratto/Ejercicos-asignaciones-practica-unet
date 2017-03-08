#include <iostream>
#include <stdio.h>
#include <conio.h>
//La primera vez el ejercicio dio, pero no con un metodo "profesional", lo que quiero saber es si se puede hacer con la funcion if y else, aunque creo
//que se enredaria un poco... aun asi, si fallo voy a subir esto a github, al menos para llevar un registro
int main()
{
	int a;
	int b;
	int c;
	int centena;
	int proceso1;
	printf("Ingrese un numero de 3 cifras");
	scanf("%d", &a);
	proceso1 = a + 1000;
	centena = proceso1 - 1000;
	c = centena;
		if (900 <= c < 1000)
		{
			printf("La centena es 900");
		}
			else
			{
				if (800 <= c < 900)
			{
					printf("La centena es 800");
			}
				else
				{
					if (700 <= c < 800)
				{
						printf("La centena es 700");
				}
					else
					{
						if (600 <= c < 700)
					{
						printf("La centena es 600");
					}
						else
						{
							if (500 <= c < 600)
						{
							printf("La centena es 500");
						}
							else
							{
								if (400 <= c < 500)
							{
								printf("La centena es 400");
							}
								else
								{
									if (300 <= c < 400)
								{
									printf("La centena es 300");
								}
									else
									{
										if (200 <= c < 300)
									{
										printf("La centena es 200");
									}
										else
										{
											if (100 <= c < 200)
										{
											printf("La centena es 100");
										}
											else
											{
												if (99 <= c < 100);
											{
												printf("No hay centena");
											}
										}
									}
								}
							}
						}
					}
				}
		
			}	
		}
	getch();
	
}
