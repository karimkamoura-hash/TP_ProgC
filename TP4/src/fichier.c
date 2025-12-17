#include <stdio.h>
#include "fichier.h"

void lire_fichier(const char *nom_de_fichier)
{
    FILE *fp = fopen(nom_de_fichier, "r");
    char c;

    if (fp == NULL)
    {
        printf("Erreur : impossible d'ouvrir le fichier %s\n", nom_de_fichier);
        return;
    }

    printf("Contenu du fichier %s :\n", nom_de_fichier);

    while ((c = fgetc(fp)) != EOF)
        putchar(c);

    printf("\n");
    fclose(fp);
}

void ecrire_dans_fichier(const char *nom_de_fichier, const char *message)
{
    FILE *fp = fopen(nom_de_fichier, "w");

    if (fp == NULL)
    {
        printf("Erreur : impossible d'ouvrir le fichier %s\n", nom_de_fichier);
        return;
    }

    fprintf(fp, "%s", message);
    fclose(fp);

    printf("Le message a ete ecrit dans le fichier %s.\n", nom_de_fichier);
}










