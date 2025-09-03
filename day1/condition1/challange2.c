//hallenge 2 : Voyelle ou Non//
#include <stdio.h>

int main() {
    char c;

    printf("Entrez un caractere : ");
    scanf(" %c", &c);  // espace avant %c pour éviter les bugs avec Entrée

    switch (c) {
        case 'a': case 'A':
        case 'e': case 'E':
        case 'i': case 'I':
        case 'o': case 'O':
        case 'u': case 'U':
        case 'y': case 'Y':
            printf("%c est une voyelle.\n", c);
            break;
        default:
            printf("%c n'est pas une voyelle.\n", c);
    }

    return 0;
}
