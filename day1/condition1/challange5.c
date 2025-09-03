// Challenge 5 : Conversion d'Année
#include <stdio.h>

int main() {
    int choix;
    int annee;
    long resultat;

    printf("Entrez le nombre d'annees : ");
    scanf("%d", &annee);

    printf("\n--- Menu de Conversion ---\n");
    printf("1. Convertir en mois\n");
    printf("2. Convertir en jours\n");
    printf("3. Convertir en heures\n");
    printf("4. Convertir en minutes\n");
    printf("5. Convertir en secondes\n");
    printf("Votre choix : ");
    scanf("%d", &choix);

    switch (choix) {
        case 1:
            resultat = annee * 12;
            printf("%d annees = %ld mois\n", annee, resultat);
            break;
        case 2:
            resultat = annee * 365;
            printf("%d annees = %ld jours\n", annee, resultat);
            break;
        case 3:
            resultat = annee * 365 * 24;
            printf("%d annees = %ld heures\n", annee, resultat);
            break;
        case 4:
            resultat = annee * 365 * 24 * 60;
            printf("%d annees = %ld minutes\n", annee, resultat);
            break;
        case 5:
            resultat = (long)annee * 365 * 24 * 60 * 60;
            printf("%d annees = %ld secondes\n", annee, resultat);
            break;
        default:
            printf("Choix invalide.\n");
    }

    return 0;
}
