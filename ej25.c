#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  double n = atoi(argv[1]);
  double numero = 2;
  if(n >= 0) {
    for(int i = 0; i <= n; n--) {
      int pot = pow(numero, n);
      printf("%d\n", pot);
    }
  } else           printf("Elegi un numero mayor o igual a cero\n");
  return 0;
}
