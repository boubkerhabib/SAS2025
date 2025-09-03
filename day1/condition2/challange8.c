// Challenge 8 : Plan de Santé
#include <stdio.h>

int main() {
    int age, historique, couverture;

    printf("Entrez votre age : ");
    scanf("%d", &age);

    printf("Entrez l'historique medical (0=aucun, 1=mineur, 2=majeur) : ");
    scanf("%d", &historique);

    printf("Entrez le type de couverture (1=base, 2=etendue) : ");
    scanf("%d", &couverture);

    if (age < 30) {
        printf("Plan recommande : Plan de base\n");
    } else {
        if (historique == 0) {
            printf("Plan recommande : Plan de base\n");
        } else {
            printf("Plan recommande : Plan etendu\n");
            if (historique == 2) {
                printf(" Couverture supplementaire requise pour problemes majeurs.\n");
            }
        }
    }

    return 0;
}
