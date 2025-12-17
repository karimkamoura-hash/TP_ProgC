#include <stdio.h>
#include <dirent.h>
#include <errno.h>
#include "repertoire.h"

void lire_dossier(char *nom_repertoire)
{
    DIR *dir;
    struct dirent *entree;

    dir = opendir(nom_repertoire);

    if (dir == NULL)
    {
        perror("Impossible d’ouvrir le répertoire");
        return;
    }

    printf("Contenu de %s :\n\n", nom_repertoire);

    while ((entree = readdir(dir)) != NULL)
    {
        printf("%s\n", entree->d_name);
    }

    closedir(dir);
}
