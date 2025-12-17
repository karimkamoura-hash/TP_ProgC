#include <stdio.h>
#include "fichier.h"

void ecrire_dans_fichier(const char *nom_de_fichier, const char *message)
{
    FILE *fp = fopen(nom_de_fichier, "a");

    if (!fp)
    {
        printf("Erreur ouverture fichier !\n");
        return;
    }

    fprintf(fp, "%s\n", message);
    fclose(fp);
}










