#include <stdio.h>
#include <stdlib.h>
#include "operator.h"

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        printf("Utilisation : ./calcule operateur nombre1 nombre2\n");
        printf("Exemple : ./calcule + 10 5\n");
        return 1;
    }

    char op = argv[1][0];

    int num1 = atoi(argv[2]);
    int num2 = 0;

    // Si ce n'est pas une negation, il faut deux nombres
    if (op != '~')
    {
        if (argc < 4)
        {
            printf("Erreur : deux nombres requis pour cet operateur.\n");
            return 1;
        }
        num2 = atoi(argv[3]);
    }

    int result;

    switch(op)
    {
        case '+': result = somme(num1, num2); break;
        case '-': result = difference(num1, num2); break;
        case '*': result = produit(num1, num2); break;
        case '/': result = quotient(num1, num2); break;
        case '%': result = modulo(num1, num2); break;
        case '&': result = et_logique(num1, num2); break;
        case '|': result = ou_logique(num1, num2); break;
        case '~': result = negation(num1, 0); break;

        default:
            printf("Operateur inconnu : %c\n", op);
            return 1;
    }

    printf("Resultat : %d\n", result);

    return 0;
}
