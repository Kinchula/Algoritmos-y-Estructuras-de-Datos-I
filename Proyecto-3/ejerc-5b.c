#include <stdio.h>

int main(void) {

    int i, n;

    printf("Ingrersar 400 como valor de i: \n");
    scanf("%d", &i);
    n = 0;
    while (i != 0) {

      printf("o%d: i -> %d\n", n, i);
      i = 0;
      n = n+1;
      printf("o%d: i -> %d\n", n, i);
      
    }

    return 0;
}
