#include <stdio.h>

int main() {
    // Nombres d'étudiants
    int nb_etudiants = 5;

    // Tableaux pour noms, prénoms et adresses
    char noms[5][20] = {"Dupont", "Martin", "Bernard", "Petit", "Moreau"};
    char prenoms[5][20] = {"Alice", "Bob", "Clara", "David", "Emma"};
    char adresses[5][50] = {
        "10 rue A, Paris",
        "22 avenue B, Lyon",
        "5 boulevard C, Marseille",
        "12 impasse D, Toulouse",
        "8 rue E, Nantes"
    };

    // Notes dans les deux modules : Programmation C et Système d'exploitation
    float notes_prog[5] = {15.5, 12.0, 18.0, 14.5, 16.0};
    float notes_sys[5]  = {14.0, 13.5, 17.0, 15.0, 16.5};

    // Affichage des informations des étudiants
    printf("Informations des etudiants :\n\n");

    for (int i = 0; i < nb_etudiants; i++) {
        printf("Etudiant %d:\n", i+1);
        printf("Nom : %s\n", noms[i]);
        printf("Prenom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note Programmation C : %.2f\n", notes_prog[i]);
        printf("Note Systeme d'exploitation : %.2f\n", notes_sys[i]);
        printf("-----------------------------\n");
    }

    return 0;
}
