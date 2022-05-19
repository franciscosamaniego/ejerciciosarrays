#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int naturales[n];
  for(int i = 1; i < n; i++) {
    naturales[i-1] = i;
    printf("%d ", naturales[i-1]);
  }
  printf("\n");
  return 0;
}
