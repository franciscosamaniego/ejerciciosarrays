#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int i = 0;
  srand(time(NULL));
  while(i < 20) {
    int r = rand() % 100;
    printf("%d ", r);
    i++;
  }
  printf("\n");
  return 0;
}
