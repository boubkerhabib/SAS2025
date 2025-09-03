//Challenge 7 : Moyenne pondérée de trois nombres//
#include <stdio.h>

int main() {
    float n1, n2, n3, moyenne;

    printf("Entrez le premier nombre : ");
    scanf("%f", &n1);

    printf("Entrez le deuxieme nombre : ");
    scanf("%f", &n2);

    printf("Entrez le troisieme nombre : ");
    scanf("%f", &n3);

    moyenne = (n1 * 2 + n2 * 3 + n3 * 5) / 10;

    printf("\nMoyenne ponderee = %.2f\n", moyenne);

    return 0;
}
