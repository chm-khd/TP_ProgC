#include <stdio.h>
#include <string.h>

#define N 5  // Nombre d'étudiants

struct Etudiant {
    char nom[30];
    char prenom[30];
    char adresse[50];
    float note_prog; 
    float note_sys; 
};

int main() {
    struct Etudiant etudiants[N];

    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20, Boulevard Niels Bohr, Lyon");
    etudiants[0].note_prog = 16.5;
    etudiants[0].note_sys = 12.1;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22, Boulevard Niels Bohr, Lyon");
    etudiants[1].note_prog = 14.0;
    etudiants[1].note_sys = 14.1;

    strcpy(etudiants[2].nom, "Bernard");
    strcpy(etudiants[2].prenom, "Claire");
    strcpy(etudiants[2].adresse, "15, Rue Lafayette, Lyon");
    etudiants[2].note_prog = 18.0;
    etudiants[2].note_sys = 16.0;

    strcpy(etudiants[3].nom, "Petit");
    strcpy(etudiants[3].prenom, "David");
    strcpy(etudiants[3].adresse, "10, Rue de Paris, Lyon");
    etudiants[3].note_prog = 10.5;
    etudiants[3].note_sys = 12.5;

    strcpy(etudiants[4].nom, "Moreau");
    strcpy(etudiants[4].prenom, "Emma");
    strcpy(etudiants[4].adresse, "8, Place de la République, Lyon");
    etudiants[4].note_prog = 14.0;
    etudiants[4].note_sys = 13.5;

    for (int i = 0; i < N; i++) {
        printf("Etudiant.e %d :\n", i + 1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Prenom : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note Programmation en C : %.2f\n", etudiants[i].note_prog);
        printf("Note Systeme d'exploitation : %.2f\n", etudiants[i].note_sys);
        printf("-----------------------------\n");
    }

    return 0;
}
