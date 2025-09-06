// Challenge 14 : Calculer la Moyenne

#include <stdio.h>
#include <stdlib.h>

int n, i, k, r, j;
float somme;
float moyenne;

int main(){
    printf("Entrez le nombre d'elements: ");
    scanf("%d", &n);
    float T[n];
    somme = 0;
    for (i = 0;i < n;i++){
            printf("entrer la valeur de T[%d]:",i+1);
            scanf("%f",&T[i]);
            somme = somme+T[i];



    }
    moyenne = somme/n;
    printf("la valeur moyenne est %.2f:",moyenne);






    return 0;
}