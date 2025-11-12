#include <stdio.h>

int main() {
    char str1[] = "Hello";      
    char str2[] = " World!";   
    char copie[100];           
    char concat[200];         
    int i, j;

    int longueur = 0;
    while (str1[longueur] != '\0') {
        longueur++;
    }
    printf("Longueur de '%s' : %d\n", str1, longueur);

    i = 0;
    while (str1[i] != '\0') {
        copie[i] = str1[i];
        i++;
    }
    copie[i] = '\0'; 
    printf("Copie de str1 : %s\n", copie);

    i = 0;
    while (str1[i] != '\0') {
        concat[i] = str1[i];
        i++;
    }

  
    j = 0;
    while (str2[j] != '\0') {
        concat[i] = str2[j];
        i++;
        j++;
    }
    concat[i] = '\0'; 

    printf("Concaténation de str1 et str2 : %s\n", concat);

    return 0;
}
