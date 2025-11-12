#include <stdio.h>

int main() {
    int n = 7; 
    int u0 = 0, u1 = 1, un; 

    printf("Suite de Fibonacci jusqu'à U%d : ", n);

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d", u0);
        } else if (i == 1) {
            printf(", %d", u1);
        } else {
            un = u0 + u1;
            printf(", %d", un);
            u0 = u1;
            u1 = un;
        }
    }

    printf("\n");

    return 0;
}
