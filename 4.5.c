#include <stdio.h>

void main() {
  int cacah,i,n;
  float jumlah, rata;
  float x[100];
    
  jumlah = 0;
  cacah = 0;

  printf("MENGHITUNG NILAI RATA-RATA DARI BILANGAN YANG BERNILAI POSITIF \n");
  printf("Banyak data: ");
  scanf("%d", &n);
  
  for(i = 0; i < n; i++) {
    printf("Data ke -%d:", i + 1);
    scanf("%f", &x[i]);
    if (x[i] > 0) {
      jumlah = jumlah + x[i];
      cacah = cacah + 1;
    }
  }
  rata = jumlah/cacah;
  printf("hasil penjumlahan : %.2f\n", jumlah);
  printf("Rata-rata : %.2f\n", rata);
}
