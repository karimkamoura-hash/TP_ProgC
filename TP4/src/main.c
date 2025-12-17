include <stdio.h>
#include "operator.h"

int main()
{
    int num1, num2;
    char op;
    int result = 0;

    printf("Entrez num1 : ");
    scanf("%d", &num1);

    printf("Entrez num2 : ");
    scanf("%d", &num2);

    printf("Entrez l'operateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op); 

    switch(op)
    {
        case '+':
            result = somme(num1, num2);
            break;

        case '-':
            result = difference(num1, num2);
            break;

        case '*':
            result = produit(num1, num2);
            break;

        case '/':
            result = quotient(num1, num2);
            break;

        case '%':
            result = modulo(num1, num2);
            break;

        case '&':
            result = et_logique(num1, num2);
            break;

        case '|':
            result = ou_logique(num1, num2);
            break;

        case '~':
            result = negation(num1, num2);
            break;

        default:
            printf("Operateur inconnu !\n");
            return 1;
    }

    printf("Resultat : %d\n", result);

    return 0;
}








