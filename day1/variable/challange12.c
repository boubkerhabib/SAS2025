//Challenge 12 : Nombre entier à quatre chiffres en ordre inverse//
#include <stdio.h>

int main() {
    int nombre;
    int d1, d2, d3, d4;

    printf("Entrez un nombre entier a 4 chiffres : ");
    scanf("%d", &nombre);

    // Extraction des chiffres
    d1 = nombre % 10;        // dernier chiffre
    d2 = (nombre / 10) % 10; // 3ème chiffre
    d3 = (nombre / 100) % 10; // 2ème chiffre
    d4 = (nombre / 1000) % 10; // 1er chiffre

    printf("Nombre inverse : %d%d%d%d\n", d1, d2, d3, d4);

    return 0;
}
