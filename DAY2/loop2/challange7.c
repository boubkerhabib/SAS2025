// Challenge 6 : Facteurs d'un Nombre:

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int t, i, j, f, r, d,n;

int main() {
    do{
        printf("Entrer un nombre: ");
        scanf("%d", &n);
        j = 1;
        for (i=1;i<=n;i++){
            j = n%i;
            if (j == 0){
                printf("%d:\n",i);
            }
        }

    }while(n < 0);


    return 0;
}
