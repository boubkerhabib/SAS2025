//Challenge 9 : Vérification d'Alphabet
#include <stdio.h>

int main() {
    char c;

    printf("Entrez un caractere : ");
    scanf(" %c", &c); // le " " avant %c permet d'éviter les problèmes avec Entrée

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        printf("%c est un alphabet.\n", c);
        if (c >= 'a' && c <= 'z')
            printf("C'est une lettre minuscule.\n");
        else
            printf("C'est une lettre majuscule.\n");
    } else {
        printf("%c n'est pas un alphabet.\n", c);
    }

    return 0;
}
