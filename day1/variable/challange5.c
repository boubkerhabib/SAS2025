//Challenge 5 : Affichage Température//

#include <stdio.h>

int main() {
    float C;

    printf("Entrez la temperature en Celsius : ");
    scanf("%f", &C);

    if (C < 0) {
        printf("Etat de l'eau : Solide (glace)\n");
    } else if (C >= 0 && C < 100) {
        printf("Etat de l'eau : Liquide\n");
    } else {
        printf("Etat de l'eau : Gaz (vapeur)\n");
    }

    return 0;
}
