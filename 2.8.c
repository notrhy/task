#include <stdio.h>

void main() {
  int i, batas, jumlah;

  printf("Menjumlahkan 1 + 2 + 3 + ...\n");
  printf("Sampai berapa: ");
  scanf("%d", &batas);
  
  jumlah = 0;
  i = 1;
  while(i < (batas + 1)) {
    jumlah = jumlah + i;
    i = i + 1;
   }
   printf("1 + 2 + 3 + ... + %d = %d", batas, jumlah);
}
