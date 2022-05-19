#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int n = atoi(argv[1]);
  int numbers[n];
  int max = INT_MIN;
  int min = INT_MAX;
  for(int i = 0; i < n; i++) {
    int r = rand() % 101;
    numbers[i] = r;
    printf("%d ", numbers[i]);
    if (numbers[i] > max) {
      max = numbers[i];
    }
    if (numbers[i] < min) {
      min = numbers[i];
    }
  }
  printf("\n");
  printf("Max: %d\n", max);
  printf("Min: %d\n", min);
  return 0;
}
