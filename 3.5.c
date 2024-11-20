#include <stdio.h>

void proses(int i);

void main() {
  int i;
  printf("\n i ?");
  scanf("%d", &i);
  proses(i);
  printf("\n i=%d", i);
}

void proses(j)
int j;
{
  printf("j=%d", j);
  j * = 2;
  printf("\n j=%d", j);
  return;
}
