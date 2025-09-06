// Challenge 2 : Fonction de Multiplication:

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int t, i, j, f, r, d,n;
int somme(){
    j = n*r;
    return j;
}

int main() {
    printf("Entrer un nombre: ");
    scanf("%d", &n);
    printf("Entrer un nombre: ");
    scanf("%d", &r);
    somme(n,r);
    printf("%d",j);



    return 0;
}
