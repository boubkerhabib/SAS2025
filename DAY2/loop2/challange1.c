// Challenge 1 : Table de Multiplication Inversée:

#include <stdio.h>
#include <stdlib.h>

int main() {
    int t, i, j, prime, R;
    R = 0;
    printf("Entrer un nombre: ");
    scanf("%d", &t);

    for (i = 0; i <= 10; i++) {
            printf("%d*%d = %d:\n",t,i,t*i);
    }

    return 0;
}
