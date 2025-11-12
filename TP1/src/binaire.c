#include <stdio.h>

int main() {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    for (int n = 0; n < taille; n++) {
        unsigned int nombre = nombres[n]; 
        printf("Le nombre %d en binaire : ", nombre);

        int debut = 0; 
        for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
            int bit = (nombre >> i) & 1; 
            if (bit) debut = 1;         
            if (debut) printf("%d", bit);
        }

        if (!debut) printf("0"); 
        printf("\n");
    }

    return 0;
}
