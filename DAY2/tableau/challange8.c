// Challenge 8 : Inversion d'un Tableau

#include <stdio.h>

int main() {
    int n, i;

    // Demander la taille du tableau
    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);

    int original[n], copie[n];

    // Saisie des éléments du tableau original
    printf("Entrez les %d elements :\n", n);
    for ( i = 0; i < n; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &original[i]);
    }

    // Copie des éléments dans le second tableau
    for (i = 0; i < n; i++) {
        copie[n-i-1] = original[i];
    }
    for (i = 0; i < n; i++) {
        printf("%d :\n",copie[i]);
    }




    printf("\n");
    return 0;
}