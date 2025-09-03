// Challenge 3 : Somme des N Nombres
#include <stdio.h>

int main() {
    int n, i, somme = 0;

    printf("Entrez un nombre entier : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        somme += i;
    }

    printf("La somme des %d premiers nombres naturels est : %d\n", n, somme);

    return 0;
}
