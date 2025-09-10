#include <stdio.h>
#include <stdlib.h>

struct student {
    char nom[20];
    char prenom[20];
    float note[5];
};

int main() {
    int i;
    float somme = 0;
    struct student ahmad;

    printf("Entrer votre nom: ");
    scanf("%s", ahmad.nom);

    printf("Entrer votre prenom: ");
    scanf("%s", ahmad.prenom);

    for (i = 0; i < 5; i++) {
        printf("Entrer la note %d: ", i+1);
        scanf("%f", &ahmad.note[i]);
        somme += ahmad.note[i];
    }

    printf("\nnom: %s\nprenom: %s\nmoyenne: %.2f\n",
           ahmad.nom, ahmad.prenom, somme / 5);

    return 0;
}