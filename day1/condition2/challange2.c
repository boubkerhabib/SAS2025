// Challenge 2 : Calcul de Prime d'Assurance Auto
#include <stdio.h>

int main() {
    int age, type, accidents;
    float primeBase = 500, prime;  // Exemple de prime de base = 500€

    printf("Entrez votre age : ");
    scanf("%d", &age);

    printf("Entrez le type de voiture (1=sportive, 2=utilitaire, 3=familiale) : ");
    scanf("%d", &type);

    printf("Entrez le nombre d'accidents (5 dernieres annees) : ");
    scanf("%d", &accidents);

    // Ajustement en fonction de l'âge
    if (age < 25) prime = primeBase * 1.5;
    else if (age > 65) prime = primeBase * 1.2;
    else prime = primeBase;

    // Ajustement en fonction du type de voiture
    if (type == 1) prime *= 2;
    else if (type == 2) prime *= 1.2;
    else if (type == 3) prime *= 1.1;

    // Ajustement en fonction des accidents
    if (accidents > 1) prime *= 1.3;

    printf("Votre prime d'assurance = %.2f €\n", prime);

    return 0;
}
