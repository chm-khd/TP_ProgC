#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

void afficherTableau(int tab[], int taille) {
    for (int i = 0; i < taille; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

void triBulles(int tab[], int taille) {
    for (int i = 0; i < taille - 1; i++) {
        for (int j = 0; j < taille - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}

int main() {
    int tableau[TAILLE];

    srand(time(NULL));

    for (int i = 0; i < TAILLE; i++) {
        tableau[i] = rand() % 1000;
    }

    printf("Tableau non trié :\n");
    afficherTableau(tableau, TAILLE);

    triBulles(tableau, TAILLE);

    printf("\nTableau trié par ordre croissant :\n");
    afficherTableau(tableau, TAILLE);

    return 0;
}
