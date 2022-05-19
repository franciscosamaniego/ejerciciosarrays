#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  int m = atoi(argv[1]);
  srand(time(NULL));
  int n[m];
  for(int i = 0; i < m; i++) {
    int r = rand() % 101;
    n[i] = r;
    printf("%d\n", n[i]);
  }
  return 0;
}
