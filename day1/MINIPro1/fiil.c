#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int prix[100], quantite[100];
char titre[100][50], teur[100][50];
int boub = 0; // nombre de livres enregistrés

// Fonction 1 : Ajouter un livre
void joute() {
    printf("\tTitre : ");
    scanf(" %[^\n]", titre[boub]);
    printf("\tAuteur : ");
    scanf(" %[^\n]", teur[boub]);
    printf("\tPrix : ");
    scanf("%d", &prix[boub]);
    printf("\tQuantite : ");
    scanf("%d", &quantite[boub]);
    boub++;
    printf(" il ajoute livre :!\n");
}

// Fonction 2 : Afficher tous les livres
void afficha() {
    if (boub == 0) {
        printf("n'est pas livre en stock.\n");
        return;
    }
    printf("\n========== Liste des livres ==========\n");
    for (int i = 0; i < boub; i++) {
        printf("_____________________________________________________\n");
        printf("|  %d  | %s | %s | %d DH | Qte: %d | \n", i+1, titre[i], teur[i], prix[i], quantite[i]);
        printf("_____________________________________________________\n");

    }
}

// Rechercher un livre
void recherche() {
    char rech[50];
    printf("Titre à rechercher : ");
    scanf(" %[^\n]", rech);
    for (int i = 0; i < boub; i++) {
        if (strcmp(titre[i], rech) == 0) {
            printf("Trouve :| %s | %s | %d DH | Qte: %d |\n", titre[i], teur[i], prix[i], quantite[i]);
            return;
        }
    }
    printf("\n");
}

// Mettre à jour la quantité
void quantete() {
    char rech[50];
    printf("Titre de livre: ");
    scanf(" %[^\n]", rech);
    for (int i = 0; i < boub; i++) {
        if (strcmp(titre[i], rech) == 0) {
            printf("Nouvelle quantité : ");
            scanf("%d", &quantite[i]);
            printf("Quantité apris mise à jour :\n");
            return;
        }
    }
    printf("Livre introuvable.\n");
}

// Fonction 5 : Supprimer un livre
void supprimer() {
    char rech[50];
    printf("Titre du livre à supprimer : ");
    scanf(" %[^\n]", rech);
    for (int i = 0; i < boub; i++) {
        if (strcmp(titre[i], rech) == 0) {
            for (int j = i; j < boub-1; j++) {
                strcpy(titre[j], titre[j+1]);
                strcpy(teur[j], teur[j+1]);
                prix[j] = prix[j+1];
                quantite[j] = quantite[j+1];
            }
            boub--;
            printf("Livre supprimé:\n");
            return;
        }
    }
    printf("Livre introuvable.\n");
}

// Total des livres
void total_livre() {
    int tot , i;
    tot = 0;
    for (i = 0;i<boub;i++) {
        tot += quantite[i];
    }
    printf("Nombre total de livres en stock : %d\n", tot);
}

//quitter
void quite() {
    printf("voila:\n\t!\n siri tn3si:");
}

int main() {
    int i;
    do {
        printf("\n\t\t====================== MENU =======================\n");
        printf("\t\tSystème de Gestion de Stock dans une Librairie:     \n");



        printf("\t\t___________________________________________________\n");
        printf("\t\t| 1 | Ajouter un livre au stock:                  |\n");
        printf("\t\t___________________________________________________\n");
        printf("\t\t| 2 | Afficher tous les livres disponible:        |\n");
        printf("\t\t___________________________________________________\n");
        printf("\t\t| 3 | Rechercher un livre par son titre:          |\n");
        printf("\t\t___________________________________________________\n");
        printf("\t\t| 4 | Mettre à jour la quantité d'un livre:       |\n");
        printf("\t\t___________________________________________________\n");
        printf("\t\t| 5 | Supprimer un livre du stock:                |\n");
        printf("\t\t___________________________________________________\n");
        printf("\t\t| 6 | Afficher le nombre total de livres en stock:|\n");
        printf("\t\t___________________________________________________\n");
        printf("\t\t| 6 | Quitter le system:                          |\n");
        printf("\t\t___________________________________________________\n\n");

        printf("------> ");
        scanf("%d", &i);

        switch (i) {
            case 1: joute();
                    break;
            case 2: afficha();
                    break;
            case 3: recherche();
                    break;
            case 4: quantete();
                    break;
            case 5: supprimer();
                    break;
            case 6: total_livre();
                    break;
            case 0: quite();
                    break;
            default: printf("Erour!\n");

        }
    } while (i != 0);

    return 0;
}

