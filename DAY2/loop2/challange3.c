// Challenge 3 : Affichage des Nombres Premiers:

#include <stdio.h>
#include <stdlib.h>

int main() {
    int t, i, j, prime, R;
    R = 0;
    printf("Entrer un nombre: ");
    scanf("%d", &t);

    for (i = 2; i <= t; i++) {
        prime = 1; 
        R = 0;
        for (j = 2; j <= i/2; j++) {
            if (i % j == 0) {
                prime = 0; 
                break;
            }
        }
        if (prime == 1) {
            R++;
            printf("%d ==> %d:\n", R, i);
        }
    }

    return 0;
}