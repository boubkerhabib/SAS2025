// Challenge 2 : Factorielle d'un Nombre
#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1;

    printf("Entrez un nombre entier positif : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("La factorielle n'est pas definie pour les nombres negatifs.\n");
    } else {
        for (i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("%d! = %llu\n", n, fact);
    }

    return 0;
}
