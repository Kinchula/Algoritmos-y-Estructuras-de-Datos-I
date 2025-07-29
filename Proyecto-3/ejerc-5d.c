#include <stdio.h>
#include <stdbool.h>
// programa que determina si el número ingresado es primo
int main(void){

    int i, x, res, n;

    printf("Ingrese un valor para x: \n");
    scanf("%d", &x); /*x=5*/
    printf("Ingrese un valor para i: \n");
    scanf("%d", &i); /*i=0*/
    printf("Ingrese 0 como representación del bool False para res\n");
    scanf("%d", &res);

    bool resaux = res; //el valor de res es 0, equivalente a false en bool
    resaux = true; //reasigno el valor de al variable resaux

    i = 2;
    n = 0;
    while (i<x && resaux) {

      resaux = resaux && (x % i) != 0;
      i = i + 1;

      printf("estado %d\n", n);
      printf("x -> %d\n",x);
      printf("i -> %d\n",i);
      printf("res -> %d\n",resaux);

      n= n +1;
    }
    return 0;
  }

/*
Ingrese un valor para x:
5
Ingrese un valor para i:
0
estado 3
5
3
1
estado 4
5
4
1
estado 5
5
5
1


3) Ejecutá los programas con otros estados iniciales para deducir qué hace cada uno.

*/
