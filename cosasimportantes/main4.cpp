#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

//Cosas que se hicieron aqui: Primero, al dividir cualquier numero de tres cifras entre 100, y arrojarla como entero, dara el primer numero,
//descomponiendo la centena
//Con el simbolo % se obtiene el reciduo de una division
//Este resto se divide entre 10 debido a que el resto siempre tendra 2 cifras en estas divisiones, por lo cual, el resultado seria 3,4, con el metodo anterior ->
//se obtendra el 3
//Siguiendo los procedimientos anteriores, es facil obtener el ultimo numero, que vendria siendo la unidad
// RECORDAR! con alt gr + ? se hace el slash invertido: \\\\


main()
{
	using namespace std;
	int num,d,c,u,aux;
	cout<<"ingrese el numero que desea descomponer"; cin>>num;
	
	aux=num;
	c=num/100;
	num=num%100;
	d=num/10;
	u=num%10;
	
	printf("\nLa centena es %d", &c);
	printf("\nLa decena es %d", &d);
	printf("\nla unidad es %d", &u);
	getch();	
	
	
	
}
