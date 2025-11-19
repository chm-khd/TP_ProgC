#include <stdio.h>

int comparerChaine(const char *s1, const char *s2) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return 0; 
        }
        i++;
    }

    if (s1[i] == '\0' && s2[i] == '\0') {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
   
    char *phrases[10] = {
        "Bonjour, comment ça va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journée.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent être déroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est intéressante.",
        "Les structures de données sont importantes.",
        "Programmer en C, c'est génial."
    };

    char phraseRecherchee[256];

    printf("Entrez la phrase à rechercher :\n");
    fgets(phraseRecherchee, sizeof(phraseRecherchee), stdin);

    int i = 0;
    while (phraseRecherchee[i] != '\0') {
        if (phraseRecherchee[i] == '\n') {
            phraseRecherchee[i] = '\0';
            break;
        }
        i++;
    }

    int trouve = 0;
    for (i = 0; i < 10; i++) {
        if (comparerChaine(phrases[i], phraseRecherchee)) {
            trouve = 1;
            break;
        }
    }

    if (trouve) {
        printf("Phrase trouvée\n");
    } else {
        printf("Phrase non trouvée\n");
    }

    return 0;
}
