#include <stdio.h>
#include <string.h>

#define NB_ETUDIANTS 5

// Définition de la structure Etudiant
struct Etudiant {
    char nom[20];
    char prenom[20];
    char adresse[50];
    float note_prog;  // Note en Programmation C
    float note_sys;   // Note en Système d'exploitation
};

int main() {
    // Création d'un tableau de 5 étudiants
    struct Etudiant etudiants[NB_ETUDIANTS];

    // Initialisation des données
    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Alice");
    strcpy(etudiants[0].adresse, "10 rue A, Paris");
    etudiants[0].note_prog = 15.5;
    etudiants[0].note_sys  = 14.0;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Bob");
    strcpy(etudiants[1].adresse, "22 avenue B, Lyon");
    etudiants[1].note_prog = 12.0;
    etudiants[1].note_sys  = 13.5;

    strcpy(etudiants[2].nom, "Bernard");
    strcpy(etudiants[2].prenom, "Clara");
    strcpy(etudiants[2].adresse, "5 boulevard C, Marseille");
    etudiants[2].note_prog = 18.0;
    etudiants[2].note_sys  = 17.0;

    strcpy(etudiants[3].nom, "Petit");
    strcpy(etudiants[3].prenom, "David");
    strcpy(etudiants[3].adresse, "12 impasse D, Toulouse");
    etudiants[3].note_prog = 14.5;
    etudiants[3].note_sys  = 15.0;

    strcpy(etudiants[4].nom, "Moreau");
    strcpy(etudiants[4].prenom, "Emma");
    strcpy(etudiants[4].adresse, "8 rue E, Nantes");
    etudiants[4].note_prog = 16.0;
    etudiants[4].note_sys  = 16.5;

    // Affichage des informations
    printf("Informations des etudiants :\n\n");
    for (int i = 0; i < NB_ETUDIANTS; i++) {
        printf("Etudiant %d:\n", i+1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Prenom : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note Programmation C : %.2f\n", etudiants[i].note_prog);
        printf("Note Systeme d'exploitation : %.2f\n", etudiants[i].note_sys);
        printf("-----------------------------\n");
    }

    return 0;
}
