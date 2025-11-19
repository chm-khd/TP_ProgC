#include <stdio.h>
#include "operator.h"

int main() {
    int num1, num2, resultat;
    char op;

    printf("Entrez num1 : ");
    scanf("%d", &num1);
    printf("Entrez num2 : ");
    scanf("%d", &num2);
    printf("Entrez l'opérateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op); 

    switch(op) {
        case '+':
            resultat = somme(num1, num2);
            printf("Résultat : %d\n", resultat);
            break;
        case '-':
            resultat = difference(num1, num2);
            printf("Résultat : %d\n", resultat);
            break;
        case '*':
            resultat = produit(num1, num2);
            printf("Résultat : %d\n", resultat);
            break;
        case '/':
            resultat = quotient(num1, num2);
            printf("Résultat : %d\n", resultat);
            break;
        case '%':
            resultat = modulo(num1, num2);
            printf("Résultat : %d\n", resultat);
            break;
        case '&':
            resultat = et(num1, num2);
            printf("Résultat : %d\n", resultat);
            break;
        case '|':
            resultat = ou(num1, num2);
            printf("Résultat : %d\n", resultat);
            break;
        case '~':
            resultat = negation(num1);
            printf("Résultat : %d\n", resultat);
            break;
        default:
            printf("Opérateur invalide !\n");
            break;
    }

    return 0;
}

