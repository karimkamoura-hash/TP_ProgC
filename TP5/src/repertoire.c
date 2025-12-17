#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <sys/stat.h>
#include "repertoire.h"

void lire_dossier_recursif(const char *nom_repertoire)
{
    DIR *dir;
    struct dirent *entree;

    dir = opendir(nom_repertoire);
    if (!dir)
    {
        perror("Impossible d’ouvrir le répertoire");
        return;
    }

    while ((entree = readdir(dir)) != NULL)
    {
        // Ignorer . et ..
        if (strcmp(entree->d_name, ".") == 0 || strcmp(entree->d_name, "..") == 0)
            continue;

        // Construire chemin complet
        char chemin[1024];
        snprintf(chemin, sizeof(chemin), "%s/%s", nom_repertoire, entree->d_name);

        // Vérifier si c'est un répertoire
        struct stat st;
        if (stat(chemin, &st) == 0 && S_ISDIR(st.st_mode))
        {
            printf("[D] %s\n", chemin);
            // Appel récursif pour le sous-répertoire
            lire_dossier_recursif(chemin);
        }
        else
        {
            printf("[F] %s\n", chemin);
        }
    }

    closedir(dir);
}
