// Challenge 5 : Planification de Voyage
#include <stdio.h>

int main() {
    float budget;
    int destination, personnes;

    printf("Entrez votre budget (€) : ");
    scanf("%f", &budget);

    printf("Entrez la destination (1=plage, 2=montagne, 3=ville) : ");
    scanf("%d", &destination);

    printf("Entrez le nombre de personnes : ");
    scanf("%d", &personnes);

    // Niveau du voyage
    if (budget >= 1000)
        printf("Voyage haut de gamme \n");
    else if (budget >= 500)
        printf("Voyage moyen \n");
    else
        printf("Voyage economique \n");

    // Destination recommandée
    if (destination == 1 && budget >= 1000 && personnes > 2)
        printf("Destination recommandee : Plage \n");
    else if (destination == 2 && budget >= 500 && personnes <= 2)
        printf("Destination recommandee : Montagne \n");
    else
        printf("Destination recommandee : Ville \n");

    return 0;
}
