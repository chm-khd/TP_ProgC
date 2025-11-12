#include <stdio.h>

int main() {
    int compteur = 5; 
    int i, j;

    for (i = 1; i <= compteur; i++) {      
        for (j = 1; j <= i; j++) {        
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

