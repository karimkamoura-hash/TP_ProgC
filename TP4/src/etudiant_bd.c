#include <stdio.h>
#include <string.h>
#include "etudiant.h"
#include "fichier.h"

int main()
{
    Etudiant tab[5];
    char buffer[500];
    int i;

    printf("=== Saisie des données étudiants ===\n");

    for (i = 0; i < 5; i++)
    {
        printf("\nEntrez les details de l'etudiant %d :\n", i + 1);

        printf("Nom : ");
        scanf(" %[^\n]", tab[i].nom);

        printf("Prenom : ");
        scanf(" %[^\n]", tab[i].prenom);

        printf("Adresse : ");
        scanf(" %[^\n]", tab[i].adresse);

        printf("Note 1 : ");
        scanf("%d", &tab[i].note1);

        printf("Note 2 : ");
        scanf("%d", &tab[i].note2);

        // Construction d’une ligne formatée pour le fichier
        sprintf(
            buffer,
            "Nom : %s | Prenom : %s | Adresse : %s | Note1 : %d | Note2 : %d",
            tab[i].nom,
            tab[i].prenom,
            tab[i].adresse,
            tab[i].note1,
            tab[i].note2
        );

        // écriture dans etudiant.txt
        ecrire_dans_fichier("etudiant.txt", buffer);
    }

    printf("\nLes details des 5 etudiants ont ete enregistres dans le fichier etudiant.txt !\n");

    return 0;
}
