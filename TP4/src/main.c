#include <stdio.h>
#include <string.h>
#include "fichier.h"

int main() {
    int choix;
    char nom_fichier[256];
    char message[1024];

    while (1) {
        printf("\nQue souhaitez-vous faire ?\n");
        printf("1. Lire un fichier\n");
        printf("2. Écrire dans un fichier\n");
        printf("3. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);
        getchar(); 

        if (choix == 1) {
            printf("Entrez le nom du fichier à lire : ");
            fgets(nom_fichier, sizeof(nom_fichier), stdin);
            nom_fichier[strcspn(nom_fichier, "\n")] = 0; 
            lire_fichier(nom_fichier);
        } else if (choix == 2) {
            printf("Entrez le nom du fichier dans lequel vous souhaitez écrire : ");
            fgets(nom_fichier, sizeof(nom_fichier), stdin);
            nom_fichier[strcspn(nom_fichier, "\n")] = 0; 
            
            printf("Entrez le message à écrire : ");
            fgets(message, sizeof(message), stdin);
            message[strcspn(message, "\n")] = 0; 

            ecrire_dans_fichier(nom_fichier, message);
        } else if (choix == 3) {
            printf("Programme terminé.\n");
            break;
        } else {
            printf("Choix invalide !\n");
        }
    }

    return 0;
}

