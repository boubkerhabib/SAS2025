//Challenge 6 : Calcul et affichage des résultats//
#include <stdio.h>

int main() {
    float a, b;

    printf("Entrez le premier nombre (a) : ");
    scanf("%f", &a);

    printf("Entrez le deuxieme nombre (b) : ");
    scanf("%f", &b);

    printf("\n--- Resultats ---\n");
    printf("a + b = %.2f\n", a + b);
    printf("a - b = %.2f\n", a - b);
    printf("a * b = %.2f\n", a * b);

    if (b != 0) {
        printf("a / b = %.2f\n", a / b);
    } else {
        printf("a / b = Division impossible (b = 0)\n");
    }

    return 0;
}
