//Challenge 3 : Conversion de la distance//
#include <stdio.h>

int main() {
    float km, yards;

    printf("Entrez la distance en kilometres : ");
    scanf("%f", &km);

    yards = km * 1093.61;
    printf("Distance en yards : %.2f yards\n", yards);

    return 0;
}

