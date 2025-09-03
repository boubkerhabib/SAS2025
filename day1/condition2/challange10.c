// Challenge 10 : Plan de Retraite avec Épargne
#include <stdio.h>

int main() {
    int age, cotisation;
    float epargne, bonus = 0;

    printf("Entrez votre age : ");
    scanf("%d", &age);

    printf("Entrez vos annees de cotisation : ");
    scanf("%d", &cotisation);

    printf("Entrez le montant total epargne (€) : ");
    scanf("%f", &epargne);

    // Calcul du bonus (5% pour chaque tranche de 10 000€ au-dessus de 50 000)
    if (epargne > 50000) {
        int tranches = (int)((epargne - 50000) / 10000);
        bonus = epargne * 0.05 * tranches;
    }

    if (age >= 65 && cotisation >= 30 && epargne >= 100000) {
        printf("Plan de retraite : Complet avec pension elevee\n");
    } else if (age >= 65 && cotisation >= 20 && epargne >= 50000) {
        printf("Plan de retraite : Partiel avec pension moyenne\n");
    } else if (age < 65) {
        printf("Plan de retraite : Epargne non encore disponible\n");
    } else {
        printf("Plan de retraite : Non eligible aux conditions minimales\n");
    }

    if (bonus > 0) {
        printf("Bonus d'epargne attribue : %.2f €\n", bonus);
    }

    return 0;
}
