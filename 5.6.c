#include <stdio.h>

struct segitiga {
    int alas;
    int tinggi;
    float luas;
}

segitiga;
void nilai_segitiga(sgt)
struct segitiga *sgt; {
    (*sgt).alas = 1.3;
    (*sgt).tinggi = 4;
    (*sgt).luas = 0.5 * (*sgt).alas * (*sgt).tinggi;
}

void main() {
    struct segitiga sg;
    nilai_segitiga(&sg);
    printf("\nAlas = %d \n", sg.alas);
    printf("Tinggi = %d\n", sg.tinggi);
    printf("Luas = %f\n", sg.luas);
}
