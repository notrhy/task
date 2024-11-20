#include <stdio.h>

void main () {
    int i, batas, jumlah;

    printf("Menjumlahkan 1 + 2 + 3 + ...\n");
    printf("Sampai berapa?\n");
    scanf("%d", &batas);

    jumlah = 0;
    i = 1;
    do {
        jumlah = jumlah + i;
        i = i + 1;
    } while (i<(batas+1));
    printf ("\n 1+2+3+...%d=%d", batas, jumlah);
}
