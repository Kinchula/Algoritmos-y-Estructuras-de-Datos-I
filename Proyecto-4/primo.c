#include <stdio.h>
#include <stdbool.h>

bool es_primo(int x) {
    
    bool res;
    res = true;

	int i;
    i = 2;
    while (i<=x && res) {
      res = res && (x % i) != 0;
      ++i;
	}
    return res;
  }	

int main(void) {
	int p, x;
	scanf("%d", &x);
	p = es_primo(x);
	printf("%d", p);
	return 0;
}