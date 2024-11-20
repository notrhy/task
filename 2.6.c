#include <stdio.h>

void main () {
    char nilai;

    printf ("\n Nilai?");
    scanf ("%c", &nilai);

    switch (nilai) {
        case ('A'):
        printf ("baik seklai");
        break;
        case ('B'):
        printf ("baik");
        break;
        case ('C'):
        printf ("cukup");
        break;
        case ('D'):
        printf ("kurang");
        break;
        default:
        printf ("kurang sekali");
        break;
    }
}
