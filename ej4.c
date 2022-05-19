#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int n = atoi(argv[1]);
  int numbers[n];
  int sum = 0;
  for(int i = 0; i < n; i++) {
    int r = rand() % 100;
    numbers[i] = r;
    sum += numbers[i];
    printf("%d ", numbers[i]);
  }
  printf("\n");
  printf("Promedio: %d\n", sum / n);
  return 0;
}
