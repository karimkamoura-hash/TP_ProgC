#include <stdio.h>

int main() {
    // Tableau de 10 phrases
    char *phrases[10] = {
        "Bonjour, comment ça va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journée.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent être déroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est intéressante.",
        "Les structures de données sont importantes.",
        "Programmer en C, c'est génial."
    };

    // Phrase à rechercher
    char recherche[] = "La programmation en C est amusante.";

    int trouve = 0; // indicateur si la phrase est trouvée

    // Parcours des phrases
    for (int i = 0; i < 10; i++) {
        int j = 0;
        // Comparaison caractère par caractère
        while (phrases[i][j] != '\0' && recherche[j] != '\0' && phrases[i][j] == recherche[j]) {
            j++;
        }
        // Vérification si fin des deux chaînes
        if (phrases[i][j] == '\0' && recherche[j] == '\0') {
            trouve = 1;
            break;
        }
    }

    // Affichage du résultat
    if (trouve) {
        printf("Phrase trouvée\n");
    } else {
        printf("Phrase non trouvée\n");
    }

    return 0;
}
