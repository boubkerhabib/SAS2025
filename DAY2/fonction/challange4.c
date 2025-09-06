// Challenge 4 : Fonction de Minimum:
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int t, i, j, f, r, d,n;
int somme(){
    j = 0;
    if (n > r){
        j = r;
        return j;
    }
    if (r > n){
        j = n;
        return j;
    }

}

int main() {
    printf("Entrer un nombre: ");
    scanf("%d", &n);
    printf("Entrer un nombre: ");
    scanf("%d", &r);
    somme(n,r);
    printf("le minimon %d :",j);



    return 0;
}
