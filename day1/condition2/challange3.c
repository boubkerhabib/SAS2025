// Challenge 3 : Gestion des Congés
#include <stdio.h>

int main() {
    int accordes, utilises, statut, restants;

    printf("Entrez le nombre total de jours accordes : ");
    scanf("%d", &accordes);

    printf("Entrez le nombre de jours utilises : ");
    scanf("%d", &utilises);

    printf("Statut de l'employe (0=temps partiel, 1=temps plein) : ");
    scanf("%d", &statut);

    if (statut == 1) {
        restants = accordes - utilises;
    } else {
        restants = (accordes / 2) - utilises;
    }

    if (restants < 0) {
        printf(" Alerte : Les jours utilises depassent le quota autorise !\n");
    } else {
        printf("Jours restants : %d\n", restants);
    }

    return 0;
}
