// Challenge 4 : Évaluation de Performance d'Employé

#include <stdio.h>

int main() {
    int score, anciennete, recompenses;
    float bonus = 0;

    printf("Entrez le score de performance (0-100) : ");
    scanf("%d", &score);

    printf("Entrez l'anciennete (en annees) : ");
    scanf("%d", &anciennete);

    printf("Entrez le nombre de recompenses (0, 1 ou 2+) : ");
    scanf("%d", &recompenses);

    if (recompenses == 1) bonus = 0.10;
    else if (recompenses >= 2) bonus = 0.20;

    printf("Evaluation : ");
    if (score >= 90 && anciennete >= 5) {
        printf("Excellente\n");
    } else if (score >= 75 && anciennete >= 3) {
        printf("Bonne\n");
    } else if (score >= 50 && anciennete < 3) {
        printf("Satisfaisante\n");
    } else {
        printf("Insuffisante\n");
    }

    if (bonus > 0) {
        printf("Bonus attribue : %.0f%%\n", bonus * 100);
    }

    return 0;
}
