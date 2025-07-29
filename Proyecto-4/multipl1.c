#include <stdio.h>
#include <stdbool.h>

/*
{Pre: x = X, y = Y}
x, y := x + 1, x + y
{Post: x = X + 1, y = X + Y}

xaux = x
yaux = y

x = xaux + 1
y = xaux + y
*/

//declaro el prototipo de la función
int varReass1(void);

int main(void) {

	varReass1();

	return 0;
}

int varReass1(void) {

	int x, y, xaux, yaux; //declaro las variables enteras y sus auxiliares

	printf("Ingrese un valor entero para x: \n");
	scanf("%d", &x);
	printf("Ingrese un valor entero para y: \n");
	scanf("%d", &y);
	//guardo los valores ingresados de las variables en unas auxiliares
	xaux = x;
	yaux = y;

	//realizo la reasignación
	x = xaux + 1;
	y = xaux + yaux;

	printf("Los nuevos valores de las variables son: x = %d, y = %d /n", x, y);

	return 0;
}
