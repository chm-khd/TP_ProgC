#include <stdio.h>
#include <stdlib.h>
#include "operator.h"

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage : %s <operateur> <num1> [num2]\n", argv[0]);
        return 1;
    }

    char op = argv[1][0];
    int num1 = atoi(argv[2]);
    int num2 = 0;

    if (op != '~') {
        if (argc < 4) {
            printf("Erreur : deux nombres requis pour cet opérateur.\n");
            return 1;
        }
        num2 = atoi(argv[3]);
    }

    int resultat;

    switch(op) {
        case '+':
            resultat = somme(num1, num2);
            break;
        case '-':
            resultat = difference(num1, num2);
            break;
        case '*':
            resultat = produit(num1, num2);
            break;
        case '/':
            resultat = quotient(num1, num2);
            break;
        case '%':
            resultat = modulo(num1, num2);
            break;
        case '&':
            resultat = et(num1, num2);
            break;
        case '|':
            resultat = ou(num1, num2);
            break;
        case '~':
            resultat = negation(num1);
            break;
        default:
            printf("Opérateur invalide !\n");
            return 1;
    }

    printf("Résultat : %d\n", resultat);
    return 0;
}
