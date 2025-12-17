#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>
#include "repertoire.h"

#define MAX_PATH 1024

typedef struct pile {
    char **elements;
    int taille;
    int capacite;
} pile;

// Fonctions pour gérer une pile dynamique
void init_pile(pile *p) {
    p->capacite = 10;
    p->taille = 0;
    p->elements = malloc(sizeof(char*) * p->capacite);
}

void push(pile *p, const char *chemin) {
    if (p->taille >= p->capacite) {
        p->capacite *= 2;
        p->elements = realloc(p->elements, sizeof(char*) * p->capacite);
    }
    p->elements[p->taille] = strdup(chemin);
    p->taille++;
}

char* pop(pile *p) {
    if (p->taille == 0) return NULL;
    p->taille--;
    return p->elements[p->taille];
}

void free_pile(pile *p) {
    for (int i = 0; i < p->taille; i++)
        free(p->elements[i]);
    free(p->elements);
}

// Fonction principale itérative
void lire_dossier_iteratif(const char *nom_repertoire) {
    pile p;
    init_pile(&p);
    push(&p, nom_repertoire);

    while (p.taille > 0) {
        char *chemin_actuel = pop(&p);
        DIR *dir = opendir(chemin_actuel);
        if (!dir) {
            perror("Impossible d’ouvrir le répertoire");
            free(chemin_actuel);
            continue;
        }

        struct dirent *entree;
        while ((entree = readdir(dir)) != NULL) {
            if (strcmp(entree->d_name, ".") == 0 || strcmp(entree->d_name, "..") == 0)
                continue;

            char chemin_complet[MAX_PATH];
            snprintf(chemin_complet, sizeof(chemin_complet), "%s/%s", chemin_actuel, entree->d_name);

            struct stat st;
            if (stat(chemin_complet, &st) == 0 && S_ISDIR(st.st_mode)) {
                printf("[D] %s\n", chemin_complet);
                push(&p, chemin_complet);
            } else {
                printf("[F] %s\n", chemin_complet);
            }
        }

        closedir(dir);
        free(chemin_actuel);
    }

    free_pile(&p);
}

