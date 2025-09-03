// Challenge 1 : Évaluation d'un Prêt
#include <stdio.h>

int main() {
    float revenu;
    int score, duree;

    printf("Entrez votre revenu annuel (€) : ");
    scanf("%f", &revenu);

    printf("Entrez votre score de credit (sur 1000) : ");
    scanf("%d", &score);

    printf("Entrez la duree du pret (en annees) : ");
    scanf("%d", &duree);

    if (revenu >= 30000 && score >= 700 && duree <= 10) {
        printf("Resultat : Pret eligible \n");
    } else if (revenu >= 30000 && score >= 650 && duree <= 15) {
        printf("Resultat : Pret eligible avec conditions \n");
    } else {
        printf("Resultat : Pret non eligible \n");
    }

    return 0;
}
