#include <stdio.h>

int main() {

    char noms[5][20] = {"Dupont", "Martin", "Bernard", "Petit", "Moreau"};
    char prenoms[5][20] = {"Alice", "Bob", "Claire", "David", "Emma"};
    char adresses[5][50] = {
        "10 rue de Paris",
        "25 avenue Victor Hugo",
        "3 boulevard Saint-Germain",
        "15 rue Lafayette",
        "8 place de la République"
    };

    float notes_prog[5] = {15.5, 12.0, 18.0, 10.5, 14.0}; 
    float notes_sys[5] = {14.0, 11.5, 16.0, 12.5, 13.5};  

    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d:\n", i + 1);
        printf("Nom : %s\n", noms[i]);
        printf("Prenom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note Programmation en C : %.2f\n", notes_prog[i]);
        printf("Note Systeme d'exploitation : %.2f\n", notes_sys[i]);
        printf("---------------------------\n");
    }

    return 0;
}
