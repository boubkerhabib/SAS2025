// Challenge 7 : Conversion en Majuscules:
#include <stdio.h>
#include <string.h>
#include <ctype.h>  

int main() {
    char T[100];
    int i;
    printf("Entrer: ");
    scanf("%s", T);   
    for (i = 0; T[i] != '\0'; i++) {
        T[i] = toupper(T[i]);
    }
    printf("rusltat: %s\n", T);

    return 0;
}