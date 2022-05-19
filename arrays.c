//declarar un array, llenarlo con n randoms
//entre 1 y 100
//buscar el maximo

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int numbers[n];
  int max = INT_MIN;
  for(int i = 0; i < n; i++) {
    int r = (rand() % 100) + 1;
    numbers[i] = r;
    printf("%d ", numbers[i]);
    if(numbers[i] > max) {
      max = numbers[i];
    }
  }
  printf("\n");
  printf("max: %d\n", max);
  return 0;
}
