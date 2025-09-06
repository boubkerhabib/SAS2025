// Challenge 5 : Somme des N Nombres:


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int t, i, j, f, r, d,n;

int main() {
    printf("Entrer un nombre: ");
    scanf("%d", &n);
    j = 0;
    for (i=1;i<=n;i++){
        j = j+i;
    }
    printf("1 =+=> %d = %d\n",n,j);


    return 0;
}