// Challenge 9 : Calcul du Salaire avec Primes
#include <stdio.h>

int main() {
    float salaireBase, salaireTotal, tauxHoraire, heuresSupp, prime;
    int poste;

    printf("Entrez le salaire de base (€) : ");
    scanf("%f", &salaireBase);

    printf("Entrez le nombre d'heures supplementaires : ");
    scanf("%f", &heuresSupp);

    printf("Entrez le type de poste (1=junior, 2=senior) : ");
    scanf("%d", &poste);

    // Calcul du taux horaire (on suppose 160h/mois)
    tauxHoraire = salaireBase / 160;
    salaireTotal = salaireBase + (heuresSupp * tauxHoraire * 1.5);

    // Prime selon le poste
    if (poste == 1) prime = salaireBase * 0.10;
    else prime = salaireBase * 0.20;

    salaireTotal += prime;

    printf("Salaire total = %.2f €\n", salaireTotal);

    return 0;
}
