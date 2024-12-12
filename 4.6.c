#include <stdio.h>

void main () {
    int i, n, j, temp, k;
    int A[100];

    printf("Bubble sort menaik \n");
    printf("banyak data : ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Data ke-%d: ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("\nSebelum terurut : \n");

    for(i = 0; i < n; i++) {
        printf("%d", A[i]);
        if(i < n - 1) {
            printf(", ");
        } else {
            printf("\n");
        }
    }

    printf("\nSebelum terurut : \n");

    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < (n - 1); j++) {
            if(A[j] > A[j + 1]) {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
        printf("Proses ke-%d : ", i + 1);
        for(k = 0; k < n; k++) {
            printf("%d", A[k]);
            if(k < n - 1) {
                printf(", ");
            } else {
                printf("\n");
            }
        }
    }
    printf("\nSetelah terurut : \n");

    for(i = 0; i < n; i++) {
        printf("%d", A[i]);
        if(i < n - 1) {
            printf(", ");
        } else {
            printf("\n");
        }
    }
}
