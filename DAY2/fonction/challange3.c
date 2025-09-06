// Challenge 3 : Fonction de Maximum:
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int t, i, j, f, r, d,n;
int somme(){
    j = 0;
    if (n > r){
        j = j;
        return n;
    }
    if (r > n){
        j = r;
        return j;
    }

}

int main() {
    printf("Entrer un nombre: ");
    scanf("%d", &n);
    printf("Entrer un nombre: ");
    scanf("%d", &r);
    somme(n,r);
    printf("le maxemon %d :",j);



    return 0;
}
