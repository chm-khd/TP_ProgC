#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

typedef struct {
    unsigned char R;
    unsigned char G;
    unsigned char B;
    unsigned char A;
} Couleur;

typedef struct {
    Couleur couleur;
    int compteur;
} CouleurDistincte;

int couleursEgales(Couleur c1, Couleur c2) {
    return (c1.R == c2.R) && (c1.G == c2.G) && (c1.B == c2.B) && (c1.A == c2.A);
}

void afficherCouleur(Couleur c) {
    printf("%02x %02x %02x %02x", c.R, c.G, c.B, c.A);
}

int main() {
    Couleur tableau[TAILLE];
    CouleurDistincte distinctes[TAILLE];
    int nbDistinctes = 0;

    srand(time(NULL));

    for (int i = 0; i < TAILLE; i++) {
        tableau[i].R = rand() % 256;
        tableau[i].G = rand() % 256;
        tableau[i].B = rand() % 256;
        tableau[i].A = rand() % 256;
    }

    for (int i = 0; i < TAILLE; i++) {
        int trouve = 0;
        for (int j = 0; j < nbDistinctes; j++) {
            if (couleursEgales(tableau[i], distinctes[j].couleur)) {
                distinctes[j].compteur++;
                trouve = 1;
                break;
            }
        }
        if (!trouve) {
            distinctes[nbDistinctes].couleur = tableau[i];
            distinctes[nbDistinctes].compteur = 1;
            nbDistinctes++;
        }
    }

    printf("Couleurs distinctes et occurrences :\n");
    for (int i = 0; i < nbDistinctes; i++) {
        afficherCouleur(distinctes[i].couleur);
        printf(" : %d\n", distinctes[i].compteur);
    }

    return 0;
}


