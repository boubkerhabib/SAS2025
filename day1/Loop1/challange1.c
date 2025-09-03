// Challenge 1 : Table de Multiplication
#include <stdio.h>

int main() {
    int n, i;
    printf("Entrez un nombre : ");
    scanf("%d", &n);

    printf("Table de multiplication de %d :\n", n);
    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", n, i, n * i);
    }

    return 0;
}
