#include <stdio.h>
#include <string.h>

struct eqoupe {
    int id;
    char nom[64];
    char prenom[64];
    int numerotony;
    char poste[64];
    int age;
    int buts;
    char statut[64];
};

struct eqoupe J[100] = {
    {1, "Mohamed", "Ahmed",   1, "GAR",   24,  50, "TIT"},
    {2, "Ali",     "Hassan",  2, "DEFE", 22,  10, "TIT"},
    {3, "Omar",    "Said",    3, "DEFE", 25,   5, "REMP"},
    {4, "Youssef", "Amine",   4, "MIL",    21,  15, "TIT"},
    {5, "Karim",   "Nabil",   5, "ATT", 28,  30, "REMP"},
    {6, "Hicham",  "Faouzi",  6, "MIL",    20,   7, "TIT"},
    {7, "Rachid",  "Fahmi",   7, "DEFE", 27,  12, "TIT"},
    {8, "Adil",    "Badr",    8, "MIL",    23,  18, "TIT"},
    {9, "Ismail",  "Taleb",   9, "ATT", 26,  40, "REMP"},
    {10,"Hamza",   "Lotfi",  10, "GAR",   29,   0, "REMP"},

    {11,"Yassin",  "Jamal",  11, "ATT", 24,  22, "TIT"},
    {12,"Soufiane","Othman", 12, "MIL",    21,  10, "REMP"},
    {13,"Anas",    "Idriss", 13, "DEFE", 23,   3, "TIT"},
    {14,"Mounir",  "Salim",  14, "MIL",    20,   6, "TIT"},
    {15,"Walid",   "Rami",   15, "DEFE", 25,   2, "REMP"},
    {16,"Tariq",   "Fouad",  16, "ATT", 27,  28, "TIT"},
    {17,"Amine",   "Hadi",   17, "MIL",    22,   9, "TIT"},
    {18,"Saad",    "Latif",  18, "DEFE", 26,   4, "TIT"},
    {19,"Bilal",   "Khalid", 19, "MIL",    24,  11, "REMP"},
    {20,"Nassim",  "Yahya",  20, "ATT", 23,  25, "TIT"}
};

int count = 20;



//AJOPUTER
void Ajouterjoueur() {
    int y;
    printf("entrer number des joueurs: ");
    scanf("%d", &y);
    if (y == 1){
        printf("\n---< ajouter un joueur >---\n");
    }else if (y > 1){
        printf("\n---< ajouter des joueurs >---\n");
    }else{
        return ;
    }

    for (int i = 0; i < y; i++) {

        printf("Entrer votre nom : ");
        scanf("%s", J[count].nom);

        printf("Entrer votre prenom : ");
        scanf("%s", J[count].prenom);

        printf("Entrer age : ");
        scanf("%d", &J[count].age);

        printf("Entrer numero de tony : ");
        scanf("%d", &J[count].numerotony);

        printf("*poste:\n\tGAR --> GARDIEN:\n\tDEFE --> DEFENSEUR:\n\tMIL --> MILIEU\n\tATT --> ATTAQUANT:\n------------> ");
        scanf("%s", J[count].poste);



        printf("Entrer buts : ");
        scanf("%d", &J[count].buts);

        printf("*Entrer statut:\n\tTIT --> TITULAIRE:\n\tREMP --> TREMPLACANT:\n------------> ");

        scanf("%s", J[count].statut);
        printf("\n");

        J[count].id = count + 1;
        count++;
    }
}
//MODIFFIER
void modiffer() {
    if (count == 0) {
        printf("n'est pas joueur.\n");
        return;
    }

    int id, choix;
    printf("Entrer l'ID du joueur à modifier : ");
    scanf("%d", &id);

    int idx = -1;
    for (int i = 0; i < count; i++) {
        if (J[i].id == id) {
            idx = i;
            break;
        }
    }

    if (idx == -1) {
        printf("Joueur non trouvé.\n");
        return;
    }
    printf("\n======= Modifier Joueur %s %s =======\n", J[idx].prenom, J[idx].nom);
    printf("1 --> Modifier le poste:\n");
    printf("2 --> Modifier l'age\n");
    printf("3 --> Modifier le nombre de buts\n");
    printf("Choix: ");
    scanf("%d", &choix);

    switch (choix) {
        case 1:
            printf("Nouveau poste: ");
            scanf("%s", J[idx].poste);
            break;
        case 2:
            printf("Nouvel age: ");
            scanf("%d", &J[idx].age);
            break;
        case 3:
            printf("Nouveau nombre de buts: ");
            scanf("%d", &J[idx].buts);
            break;
        case 4:
            printf("Nouveau nombre de tony: ");
            scanf("%d", &J[idx].numerotony);
            break;
        case 5:
            printf("Nouveau nombre de buts: ");
            scanf("%s", J[idx].statut);
            break;
        default:
            printf("Choix invalide!\n");
    }

    printf(" Joueur modifié!\n");
}



//SUPPRMIER
void supprmier() {
    if (count == 0) {
        printf("n'est pas joueur!\n");
    }
    int id;
    printf("Entrer l'ID du joueur à supprimer : ");
    scanf("%d", &id);
    int idn = -1;
    for (int i=0; i < count;i++){
        if (J[i].id == id){
            idn = i;
            break;


        }
    }
    if (idn == -1){
        printf("ce id ne trouve pas!");
        return ;
    }
    for (int i = idn;i<count-1;i++){
        J[i] = J[i+1];
    }
    count--;

    printf(" Joueur supprimé!\n");
}
//affiche
void affich() {
    if (count == 0) {
        printf("n'est pas joueur!\n");
    } else {
        int choix;
        printf("\t1 ---> nom:\n\t2 ---> age:\n\t3 ---> numero de tony:\n\t------------> ");
        scanf("%d",&choix);
        switch(choix){
            case 1: struct eqoupe temj;
                    for (int i = 0; i < count - 1; i++) {
                        for (int j = 0; j < count - i - 1; j++) {
                            if (strcmp(J[j].nom, J[j + 1].nom) > 0) {
                                temj = J[j];
                                J[j] = J[j + 1];
                                J[j + 1] = temj;
                            }
                        }
                    }

                    for (int i = 0; i < count; i++) {
                        printf("========== Liste des joueurs triés par Nom ==========\n");

                        printf("ID = %d\n", J[i].id);
                        printf("\tNom     : %s\n", J[i].nom);
                        printf("\tPrenom  : %s\n", J[i].prenom);
                        printf("\tAge     : %d\n", J[i].age);
                        printf("\tPoste   : %s\n", J[i].poste);
                        printf("\tButs    : %d\n", J[i].buts);
                        printf("------------------------------------------------------------------------\n");
                    }
                    break;


            case 2 :struct eqoupe temp;
                    for (int i = 0; i < count - 1; i++) {
                        for (int j = 0; j < count - i - 1; j++) {
                            if (J[j].age > J[j + 1].age) {
                                temp = J[j];
                                J[j] = J[j + 1];
                                J[j + 1] = temp;
                            }
                        }
                    }
                    printf("\n========== Liste des joueurs triés par Age ==========\n");
                    for (int i = 0; i < count; i++) {
                        printf("------------------------------------------------------------------------\n");
                        printf("ID = %d\n", J[i].id);
                        printf("\tNom     : %s\n", J[i].nom);
                        printf("\tPrenom  : %s\n", J[i].prenom);
                        printf("\tAge     : %d\n", J[i].age);
                        printf("\tPoste   : %s\n", J[i].poste);
                        printf("\tButs    : %d\n", J[i].buts);
                        printf("------------------------------------------------------------------------\n");
                    }
                    break;
            case 3 :struct eqoupe temk;
                    for (int i = 0; i < count - 1; i++) {
                        for (int j = 0; j < count - i - 1; j++) {
                            if (J[j].numerotony > J[j + 1].numerotony) {
                                temk = J[j];
                                J[j] = J[j + 1];
                                J[j + 1] = temk;
                            }
                        }
                    }
                    printf("\n========== Liste des joueurs triés par But ==========\n");
                    for (int i = 0; i < count; i++) {
                        printf("------------------------------------------------------------------------\n");
                        printf("ID = %d\n", J[i].id);
                        printf("\tNom     : %s\n", J[i].nom);
                        printf("\tPrenom  : %s\n", J[i].prenom);
                        printf("\tAge     : %d\n", J[i].age);
                        printf("\tPoste   : %s\n", J[i].poste);
                        printf("\tButs    : %d\n", J[i].buts);
                        printf("------------------------------------------------------------------------\n");
                    }

            default : printf("erour");
                      break;
        }
    }
}

//rechirch
void rechercher() {
    if (count == 0) {
        printf("n'est pas joueur!\n");
        return;
    }

    int choix;
    printf("Rechercher par :\n1. ID\n2. Nom\nChoix: ");
    scanf("%d", &choix);

    if (choix == 1) {
        int id;
        printf("Entrer l'ID du joueur : ");
        scanf("%d", &id);

        int trouve = 0;
        for (int i = 0; i < count; i++) {
            if (J[i].id == id) {
                printf("\n\n");
                printf("------------------------------------------------------------------------\n");
                printf("ID = %d\n", J[i].id);
                printf("\tNom     : %s\n", J[i].nom);
                printf("\tPrenom  : %s\n", J[i].prenom);
                printf("\tAge     : %d\n", J[i].age);
                printf("\tPoste   : %s\n", J[i].poste);
                printf("\tButs    : %d\n", J[i].buts);
                printf("------------------------------------------------------------------------\n");
                trouve = 1;
                break;
            }
        }
        if (trouve != 0){
                printf("Joueur non trouvé.\n");
        }

    } else if (choix == 2) {
        char nom[64];
        printf("Entrer le nom du joueur : ");
        scanf("%s", nom);

        int trouve = 0;
        for (int i = 0; i < count; i++) {
            if (strcmp(J[i].nom, nom) == 0) {
                printf("------------------------------------------------------------------------\n");
                printf("ID = %d\n", J[i].id);
                printf("\tNom     : %s\n", J[i].nom);
                printf("\tPrenom  : %s\n", J[i].prenom);
                printf("\tAge     : %d\n", J[i].age);
                printf("\tPoste   : %s\n", J[i].poste);
                printf("\tButs    : %d\n", J[i].buts);
                printf("------------------------------------------------------------------------\n");
                trouve = 1;
            }
        }
        if (trouve != 0){
                printf("Aucun joueur avec ce nom.\n");
        }

    } else {
        printf("Choix invalide.\n");
    }
}
//statistuque
void statustique() {
    if (count == 0) {
        printf("n'est pas joueur!\n");
        return;
    }

    int totalAge = 0;
    int maxButs = 0, idxMaxButs = 0;
    int idxPlusJeune = 0, idxPlusVieux = 0;

    for (int i = 0; i < count; i++) {
        totalAge += J[i].age;

        if (J[i].buts > maxButs) {
            maxButs = J[i].buts;
            idxMaxButs = i;
        }

        if (J[i].age < J[idxPlusJeune].age) {
            idxPlusJeune = i;
        }

        if (J[i].age > J[idxPlusVieux].age) {
            idxPlusVieux = i;
        }
    }

    printf("\n===== Statistiques de equipe =====\n");
    printf("\tNombre total de joueurs : %d\n", count);
    printf("\tAge moyen : %.2f\n", (float)totalAge / count);

    printf("\nMeilleur buteur :\n\t %s %s | Buts : %d\n",
           J[idxMaxButs].prenom, J[idxMaxButs].nom, J[idxMaxButs].buts);

    printf("Joueur le plus jeune :\n\t %s %s | Age : %d\n",
           J[idxPlusJeune].prenom, J[idxPlusJeune].nom, J[idxPlusJeune].age);

    printf("Joueur le plus âgé :\n\t %s %s | Age : %d\n",
           J[idxPlusVieux].prenom, J[idxPlusVieux].nom, J[idxPlusVieux].age);
}

//QUITTER
void quitt() {
    printf("Quitter le programme!\n");
}

int main() {
    int n;
    do {
        printf("\n\t\t====================== MENU =======================\n");
        printf("\t\t| ##Systeme de Gestion de une equipe de Football: |\n");
        printf("\t\t_\n");
        printf("\t\t| 1 | Ajouter joueur:                             |\n");
        printf("\t\t_\n");
        printf("\t\t| 2 | Afficher joueurs:                           |\n");
        printf("\t\t_\n");
        printf("\t\t| 3 | Modifier joueur:                            |\n");
        printf("\t\t_\n");
        printf("\t\t| 4 | Supprimer joueur:                           |\n");
        printf("\t\t_\n");
        printf("\t\t| 5 | Rechercher joueur:                          |\n");
        printf("\t\t_\n");
        printf("\t\t| 6 | Statistiques:                               |\n");
        printf("\t\t_\n");
        printf("\t\t| 0 | Quitter le system:                          |\n");
        printf("\t\t_\n\n");
        printf("----------> ");
        scanf("%d", &n);

        switch (n) {
            case 1: Ajouterjoueur(); break;
            case 2: affich(); break;
            case 3: modiffer(); break;
            case 4: supprmier(); break;
            case 5: rechercher(); break;
            case 6: statustique(); break;
            case 0: quitt(); break;
            default: printf("Choix invalide !\n");
        }

    } while (n != 0);

    return 0;
}
