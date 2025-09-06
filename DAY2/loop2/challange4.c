// Challenge 4 : Inversion d'un Entier:
#include <stdio.h>
int main() {
    int n, inve;

    printf("Entrer un entier : ");
    scanf("%d", &n);
    printf("Le nombre inverse est : ");
    while (n > 0) {
        inve = n % 10;
        printf("%d", inve);
        n = n / 10;
    }
    printf("\n");
    return 0;
}
