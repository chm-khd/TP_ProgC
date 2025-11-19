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

int rechercherEntier(int tab[], int taille, int valeur) {
    for (int i = 0; i < taille; i++) {
        if (tab[i] == valeur) {
            return 1; 
        }
    }
    return 0; 
}

int main() {
    int tableau[TAILLE];
    int entierRecherche;

    srand(time(NULL));

    for (int i = 0; i < TAILLE; i++) {
        tableau[i] = rand() % 1000;
    }

    printf("Tableau :\n");
    afficherTableau(tableau, TAILLE);

    printf("\nEntrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &entierRecherche);

    if (rechercherEntier(tableau, TAILLE, entierRecherche)) {
        printf("Résultat : entier présent\n");
    } else {
        printf("Résultat : entier absent\n");
    }

    return 0;
}
