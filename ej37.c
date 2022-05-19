#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int n = rand() % 2;
  if(n == 1) {
    printf("Cara\n");
  } else {
    printf("Ceca\n");
  }
  return 0;
}
