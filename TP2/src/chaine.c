#include <stdio.h>

int main() {
    char str1[] = "Hello";
    char str2[] = " World!";
    char copie[100];      // Pour copier str1
    char concat[200];     // Pour concaténer str1 et str2
    int i, j;

    /* 1. Calcul de la longueur de str1 */
    int longueur1 = 0;
    while (str1[longueur1] != '\0') {
        longueur1++;
    }
    printf("Longueur de str1 ('%s') = %d\n", str1, longueur1);

    /* 2. Copie de str1 dans copie */
    i = 0;
    while (str1[i] != '\0') {
        copie[i] = str1[i];
        i++;
    }
    copie[i] = '\0';  // Terminer la chaîne
    printf("Copie de str1 = '%s'\n", copie);

    /* 3. Concaténation de str1 et str2 dans concat */
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
    concat[i] = '\0';  // Terminer la chaîne

    printf("Concaténation str1 + str2 = '%s'\n", concat);

    return 0;
}
