#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int n = atoi(argv[1]);
  int m = atoi(argv[2]);
  int numbers[n];
  int freq[m];
  for(int i = 0; i < m; i++) {
    freq[i] = 0;
  }
  for(int i = 0; i < n; i++) {
    numbers[i] = rand() % (m+1);
    printf("%d ", numbers[i]);
    freq[numbers[i]]++;
  }
  printf("\n");
  for(int i = 0; i < m; i++) {
    printf("%d: %d ", i, freq[i]);
  }

  printf("\n");
  return 0;
}
