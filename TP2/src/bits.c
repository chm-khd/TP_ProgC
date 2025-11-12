#include <stdio.h>

int main() {
    unsigned int d = 0x00101008;
    int taille = sizeof(unsigned int) * 8; 

    int bit4  = taille - 4;   
    int bit20 = taille - 20;  

    int b4  = (d >> bit4) & 1;
    int b20 = (d >> bit20) & 1;

    if (b4 == 1 && b20 == 1)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
