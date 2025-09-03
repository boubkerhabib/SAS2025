//Challenge 2 : Conversion de la température//
#include <stdio.h>

int main() {
    float C, K;

    printf("Entrez la temperature en Celsius : ");
    scanf("%f", &C);

    K = C + 273.15;
    printf("Temperature en Kelvin : %.2f K\n", K);

    return 0;
}

