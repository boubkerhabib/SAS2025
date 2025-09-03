// Challenge 8 : Affichage de la Suite de Fibonacci
#include <stdio.h>

int main() {
    int n, i;
    long long t1 = 0, t2 = 1, suivant;

    printf("Entrez le nombre de termes : ");
    scanf("%d", &n);

    printf("Suite de Fibonacci (%d termes) : ", n);

    for (i = 0; i < n; i++) {
        if (i == 0) {
            printf("%lld ", t1);
            continue;
        }
        if (i == 1) {
            printf("%lld ", t2);
            continue;
        }
        suivant = t1 + t2;
        printf("%lld ", suivant);
        t1 = t2;
        t2 = suivant;
    }
    printf("\n");

    return 0;
}
