// Challenge 5 : Calcul de la Puissance
#include <stdio.h>

int main() {
    int base, exposant, i;
    long long resultat = 1;

    printf("Entrez la base : ");
    scanf("%d", &base);

    printf("Entrez l'exposant : ");
    scanf("%d", &exposant);

    for (i = 1; i <= exposant; i++) {
        resultat *= base;
    }

    printf("%d^%d = %lld\n", base, exposant, resultat);

    return 0;
}
