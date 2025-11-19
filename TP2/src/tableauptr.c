#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 11  // Taille des tableaux

int main() {
    int tabInt[TAILLE];
    float tabFloat[TAILLE];

    int *pInt = tabInt;     
    float *pFloat = tabFloat; 

    srand(time(NULL)); 

    for (int i = 0; i < TAILLE; i++) {
        *(pInt + i) = rand() % 200;                    
        *(pFloat + i) = (float)(rand() % 1000) / 100; 
    }

    printf("Tableau d'entiers (avant) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", *(pInt + i));
    }

    printf("\n\nTableau de floats (avant) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%.2f ", *(pFloat + i));
    }
    printf("\n\n");

    for (int i = 0; i < TAILLE; i++) {
        if (i % 2 == 0) { 
            *(pInt + i) *= 3;
            *(pFloat + i) *= 3;
        }
    }

    printf("Tableau d'entiers (apres) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", *(pInt + i));
    }

    printf("\n\nTableau de floats (apres) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%.2f ", *(pFloat + i));
    }
    printf("\n");

    return 0;
}
