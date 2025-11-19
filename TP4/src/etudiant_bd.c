#include <stdio.h>
#include <string.h>
#include "fichier.h"

#define NOMBRE_ETUDIANTS 5

typedef struct {
    char nom[50];
    char prenom[50];
    char adresse[100];
    int note1;
    int note2;
} Etudiant;

int main() {
    Etudiant etudiants[NOMBRE_ETUDIANTS];
    char ligne[300]; 
    char fichier_nom[] = "etudiant.txt";

    for (int i = 0; i < NOMBRE_ETUDIANTS; i++) {
        printf("\nEntrez les détails de l'étudiant.e %d :\n", i + 1);

        printf("Nom : ");
        scanf(" %49[^\n]", etudiants[i].nom);

        printf("Prénom : ");
        scanf(" %49[^\n]", etudiants[i].prenom);

        printf("Adresse : ");
        getchar(); 
        scanf(" %99[^\n]", etudiants[i].adresse);

        printf("Note 1 : ");
        scanf("%d", &etudiants[i].note1);

        printf("Note 2 : ");
        scanf("%d", &etudiants[i].note2);
    }

    FILE *f = fopen(fichier_nom, "w");
    if (f == NULL) {
        printf("Erreur : impossible d'ouvrir le fichier %s pour écriture.\n", fichier_nom);
        return 1;
    }

    for (int i = 0; i < NOMBRE_ETUDIANTS; i++) {
        fprintf(f, "%s, %s, %s, %d, %d\n",
                etudiants[i].nom,
                etudiants[i].prenom,
                etudiants[i].adresse,
                etudiants[i].note1,
                etudiants[i].note2);
    }

    fclose(f);
    printf("\nLes détails des étudiants ont été enregistrés dans le fichier %s.\n", fichier_nom);

    return 0;
}
