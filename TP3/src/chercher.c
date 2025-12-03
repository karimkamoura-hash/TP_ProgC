#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {
    int tab[TAILLE];
    int i, valeur, trouve = 0;

    // Initialisation de la graine pour les nombres aléatoires
    srand(time(NULL));

    // Remplissage du tableau avec des valeurs aléatoires entre -50 et 100
    for (i = 0; i < TAILLE; i++) {
        tab[i] = (rand() % 151) - 50; // valeurs entre -50 et 100
    }

    // Affichage du tableau
    printf("Tableau :\n");
    for (i = 0; i < TAILLE; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    // Demander à l'utilisateur l'entier à chercher
    printf("\nEntrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &valeur);

    // Recherche de l'entier dans le tableau
    for (i = 0; i < TAILLE; i++) {
        if (tab[i] == valeur) {
            trouve = 1;
            break;
        }
    }

    // Affichage du résultat
    if (trouve) {
        printf("Résultat : entier présent\n");
    } else {
        printf("Résultat : entier absent\n");
    }

    return 0;
}
