#include <stdio.h>

void main() {
  int i, batas, jumlah;

  printf("Menjumlahkan 1 + 2 + 3 + ...\n");
  printf("Sampai berapa?\n");
  scanf("%d", &batas);

  jumlah = 0;
  for(i = 1; i < (batas + 1); i++) {
    jumlah = jumlah + i;
  }
  printf("1 + 2 + 3 + ... %d = %d", batas, jumlah);
}
