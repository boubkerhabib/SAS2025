// Challenge 10 : Trouver un Sous-String:#include <stdio.h>
#include <string.h>

int main() {
    char p[100];
    char t[50];
    printf("entrer votre paraghraph:")
    scanf(" %[^\n]", p); 
    
    printf("entrer votre parti: ");
    scanf(" %[^\n]", t);
    if (strstr(p, t) != NULL) {
        printf("oui!\n");
    } else {
        printf("non:\n");
    }

    return 0;
}