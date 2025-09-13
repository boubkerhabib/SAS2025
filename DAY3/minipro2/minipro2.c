#include <stdio.h>
#include <string.h>

int n, i = 0;

struct contact {
    char nam[100];
    char numero[20];
    char email[100];
};

struct contact user[100];

void ajoute() {
    printf("Entrer votre nom : ");
    scanf("%s", user[i].nam);
    printf("Entrer votre email : ");
    scanf("%s", user[i].email);
    printf("Entrer votre numero : ");
    scanf("%s", user[i].numero);
    i++;
}

void affich() {
    if (i == 0) {
        printf("Aucun contact enregistré.\n");
    } else {
        for (int j = 0; j < i; j++) {
            printf("| %d | Nom : %s | Email : %s | Numero : %s |\n",
                   j + 1, user[j].nam, user[j].email, user[j].numero);
        }
    }
}

void modi() {
    char rech[30], k[30];
    int trouve = 0;
    printf("Entrer le nom à modifier : ");
    scanf("%s", rech);

    for (int j = 0; j < i; j++) {
        if (strcmp(user[j].nam, rech) == 0) {
            printf("Entrer nouveau nom : ");
            scanf("%s", k);
            strcpy(user[j].nam, k);
            trouve = 1;
            printf("Contact modifié avec succès.\n");
            break;
        }
    }

    if (!trouve) {
        printf("Contact non trouvé.\n");
    }
}

void supp() {
    char rech[30];
    int trouve = 0;
    printf("Entrer le nom à supprimer : ");
    scanf("%s", rech);

    for (int j = 0; j < i; j++) {
        if (strcmp(user[j].nam, rech) == 0) {
            for (int y = j; y < i - 1; y++) {
                strcpy(user[y].nam, user[y + 1].nam);
                strcpy(user[y].email, user[y + 1].email);
                strcpy(user[y].numero, user[y + 1].numero);
            }
            i--; // on réduit le compteur
            trouve = 1;
            printf("Contact supprimé avec succès.\n");
            break;
        }
    }

    if (!trouve) {
        printf("Contact non trouvé.\n");
    }
}

void rechr() {
    char rech[30];
    int trouve = 0;
    printf("Entrer le nom à rechercher : ");
    scanf("%s", rech);

    for (int j = 0; j < i; j++) {
        if (strcmp(user[j].nam, rech) == 0) {
            printf("| Nom : %s | Email : %s | Numero : %s |\n",
                   user[j].nam, user[j].email, user[j].numero);
            trouve = 1;
            break;
        }
    }

    if (!trouve) {
        printf("Contact non trouvé.\n");
    }
}

void quitt() {
    printf("Quitter le programme!\n");
}

int main() {
    do {
        printf("\t\t________________________________________\n");
        printf("\t\t|  1  | Ajouter un Contact             |\n");
        printf("\t\t|  2  | Modifier un Contact            |\n");
        printf("\t\t|  3  | Supprimer un Contact           |\n");
        printf("\t\t|  4  | Afficher Tous les Contacts     |\n");
        printf("\t\t|  5  | Rechercher un Contact          |\n");
        printf("\t\t|  0  | Quitter le programme           |\n");
        printf("\t\t________________________________________\n");
        printf("\n--------> ");
        scanf("%d", &n);

        switch (n) {
            case 1: ajoute(); break;
            case 2: modi(); break;
            case 3: supp(); break;
            case 4: affich(); break;
            case 5: rechr(); break;
            case 0: quitt(); break;
            default: printf("Erreur! Choix invalide.\n"); break;
        }
    } while (n != 0);

    return 0;
}