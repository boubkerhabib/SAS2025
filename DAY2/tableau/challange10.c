// Challenge 11 : Remplacer un Élément
#include <stdio.h>

int main() {
    int n, i, k, r;

    // Demander la taille du tableau
    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);

    int original[n];
    printf("entrer la valeur de x:");
    scanf("%d",&k);

    // Saisie des éléments du tableau original
    printf("Entrez les %d elements :\n", n);
    for ( i = 0; i < n; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &original[i]);
    }

    // Copie des éléments dans le second tableau
    for (i = 0; i < n; i++) {
            if (original[i] == k){
                printf("oui:");
                printf("entre nouvil valeur :");
                scanf("%d",&r);
                original[i] = r;
            }else{
                printf("non:");
                break;
            }

    }
    for (i = 0;i<n;i++){
        printf("T[%d] = %d :\n",i+1,original[i]);
    }




    printf("\n");
    return 0;
}
