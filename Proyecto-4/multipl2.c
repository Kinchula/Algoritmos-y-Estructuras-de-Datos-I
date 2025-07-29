#include <stdio.h>
#include <stdbool.h>

/*

{Pre: x = X, y = Y, z = Z}
x, y, z := y, y + x + z, y + x
{Post: x = Y, y = Y + X + Z, z = Y + X}

xaux = x
yaux = y
zaux = z

x = yaux
y = xaux + yaux + zaux
z = yaux + xaux

*/

int varReass2(void);

int main(void) {

	varReass2();

	return 0;
}

int varReass2(void) {
    int x, y, z, xaux, yaux, zaux; //defino las variables enteras y sus auxiliares

    printf("Ingrese un valor entero para x: \n");
    scanf("%d", &x);
    printf("Ingrese un valor entero para y: \n");
    scanf("%d", &y);
    printf("Ingrese un valor entero para z: \n");
    scanf("%d", &z);
  	//guardo los valores ingresados de las variables en unas auxiliares
  	xaux = x;
  	yaux = y,
  	zaux = z;
  	//realizo la reasignación
  	x = yaux;
  	y = yaux + xaux + zaux;
  	z = yaux + xaux;

  	printf("Los nuevos valores de las variables son: x = %d, y = %d y z = %d /n", x, y, z);

    return 0;
}
