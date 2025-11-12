#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    printf("a = %d, b = %d\n\n", a, b);

    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    printf("a == b : %d\n", a == b ? 1 : 0);
    printf("a > b  : %d\n", a > b  ? 1 : 0);

    return 0;
}
