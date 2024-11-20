#include <stdio.h>

void proses(int *i);

void main() {
  int i;
  printf("i = ", i);
  scanf("%d", &i);
  proses(&i);
  printf("i = %d\n", i);
  return;
}

void proses(j)
int *j;
{
  printf("j = %d\n", *j);
  *j* = 2;
  printf("j = %d\n", *j);
  return;
}
