// Challenge 12 : Afficher les Éléments Paire

#include <stdio.h>

int main() {

    int n, i, k, r, t;

    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);

    int original[n];

    printf("Entrez les %d elements :\n", n);

    for ( i = 0; i < n; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &original[i]);
    }

    for (i = 0; i < n; i++) {
            t = original[i]%2;
            if (t == 1){
                printf("le nombre aipair: %d\n", original[i]);
            }
    }
    
    printf("\n");
    return 0;
}