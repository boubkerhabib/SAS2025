// Challenge 3 : Concaténation de Chaînes:

#include <stdio.h>
#include <string.h>

char T[20];
char D[20];
char F[20];

int main() {
    int i,j;
    printf("entrer : ");
    scanf("%s", T);
    printf("entrer : ");
    scanf("%s", D);

    for (i = 0; T[i] != '\0'; i++) {
            F[i] = T[i];

    }
    for (j = 0; D[j] != '\0'; j++) {
            F[j+i] = D[j];

    }
    printf("%s :", F);






    return 0;
}