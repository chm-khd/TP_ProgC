#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    // Opérateurs arithmétiques
    printf("a = %d, b = %d\n\n", a, b);
    printf("Addition (a + b)       = %d\n", a + b);
    printf("Soustraction (a - b)   = %d\n", a - b);
    printf("Multiplication (a * b) = %d\n", a * b);
    printf("Division (a / b)       = %d\n", a / b);
    printf("Modulo (a %% b)         = %d\n", a % b);

    // Opérateurs logiques/comparaison
    printf("\nComparaisons logiques :\n");
    printf("a == b : %d\n", a == b);   // 1 si vrai, 0 si faux
    printf("a > b  : %d\n", a > b);    // 1 si vrai, 0 si faux

    return 0;
}
