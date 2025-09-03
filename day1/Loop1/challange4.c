// Challenge 4 : Affichage des N Premiers Nombres Impairs
#include <stdio.h>

int main() {
    int n, i, count = 0;

    printf("Entrez un nombre entier : ");
    scanf("%d", &n);

    printf("Les %d premiers nombres impairs : ", n);
    for (i = 1; count < n; i += 2) {
        printf("%d ", i);
        count++;
    }
    printf("\n");

    return 0;
}
