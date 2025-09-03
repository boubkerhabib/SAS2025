//Challenge 3 : Somme de Deux Valeurs
#include <stdio.h>

int main() {
    int a, b, somme;

    printf("Entrez le premier nombre : ");
    scanf("%d", &a);

    printf("Entrez le deuxieme nombre : ");
    scanf("%d", &b);

    somme = a + b;

    if (a == b)
        printf("Les nombres sont identiques. Resultat = %d\n", 3 * somme);
    else
        printf("Somme = %d\n", somme);

    return 0;
}
