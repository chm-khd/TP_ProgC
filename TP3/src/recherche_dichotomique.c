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

int rechercheDichotomique(int tab[], int taille, int valeur) {
    int gauche = 0;
    int droite = taille - 1;

    while (gauche <= droite) {
        int milieu = gauche + (droite - gauche) / 2;

        if (tab[milieu] == valeur) {
            return 1; 
        } else if (tab[milieu] < valeur) {
            gauche = milieu + 1;
        } else {
            droite = milieu - 1;
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

    triBulles(tableau, TAILLE);

    printf("Tableau trié :\n");
    afficherTableau(tableau, TAILLE);

    printf("\nEntrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &entierRecherche);

    if (rechercheDichotomique(tableau, TAILLE, entierRecherche)) {
        printf("Résultat : entier présent\n");
    } else {
        printf("Résultat : entier absent\n");
    }

    return 0;
}
