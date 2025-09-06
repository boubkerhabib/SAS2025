// Challenge 2 : pyramide d'étoile:
#include <stdio.h>
int x, i, j, u, t;
int main() {
    int x;
    printf("Entrer le nombre : ");
    scanf("%d", &x);
    for (int i = 1; i <= x; i++) {
        int n = 2 * i - 1;   
        for (int t = 0; t < x - i; t++) {
            printf(" ");
        }
        for (u = 0; u < n; u++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
