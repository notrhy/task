#include <stdio.h>

void main () {
  int x, y, z, hasil1, hasil2, hasil3, hasil4;

  printf("masukan nilai x : ");
  scanf("%d", &x);
  printf("masukan nilai y : ");
  scanf("%d", &y);
  printf("masukan nilai z : ");
  scanf("%d", &z);

  hasil1 = x + y * z;
  hasil2 = (x + y) * z;
  hasil3 = x * y + z;
  hasil4 = (x * y) + z;
  
  printf("\n hasil1 : = %d", hasil1);
  printf("\n hasil2 : = %d", hasil2);
  printf("\n hasil3 : = %d", hasil3);
  printf("\n hasil4 : = %d", hasil4);
}
