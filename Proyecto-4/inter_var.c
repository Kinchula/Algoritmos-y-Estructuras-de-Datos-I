#include <stdio.h>
#include <stdbool.h>
//declaro el prototipo de la función
int intervar(void);

int main(void) {
	intervar();
	return 0;
}

int intervar(void) {
	int x, y, z, zaux;

	printf("Ingresar un valor para x: \n");
	scanf("%d", &x);
	printf("Ingresar un valor para y: \n");
	scanf("%d", &y);

	zaux = z; //guardo el valor de z en una var auxiliar

	//realizo las reasiggnaciones de las variables
	z = x;
	x = y;
	y = zaux;

	//imprimo un mensaje por pantalla delcarando los nuevos valores de las variables.
	printf("Los nuevos valores de las variables son: x = %d , y = %d y z = %d \n", x, y, z);

	return 0;
}
