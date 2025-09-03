// Challenge 9 : Compteur de Chiffres
#include <stdio.h>

int main() {
    long long n;
    int count = 0;

    printf("Entrez un entier positif : ");
    scanf("%lld", &n);

    if (n == 0) {
        count = 1;
    } else {
        while (n > 0) {
            n /= 10;
            count++;
        }
    }

    printf("Nombre de chiffres = %d\n", count);

    return 0;
}
