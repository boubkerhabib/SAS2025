//Challenge 1 : Affichage Informations//
#include <stdio.h>

int main() {
    char nom[50], prenom[50], sexe[10], email[50];
    int age;

    printf("Entrez votre nom : ");
    scanf("%s", nom);

    printf("Entrez votre prenom : ");
    scanf("%s", prenom);

    printf("Entrez votre age : ");
    scanf("%d", &age);

    printf("Entrez votre sexe : ");
    scanf("%s", sexe);

    printf("Entrez votre email : ");
    scanf("%s", email);

    printf("\n--- Vos Informations ---\n");
    printf("Nom      : %s\n", nom);
    printf("Prenom   : %s\n", prenom);
    printf("Age      : %d\n", age);
    printf("Sexe     : %s\n", sexe);
    printf("Email    : %s\n", email);

    return 0;
}


