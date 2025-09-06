// Challenge 7 : Suite de Fibonacci:
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int t, i, j, f, r, d,n;

int main() {
    do{
        printf("Entrer un nombre: ");
        scanf("%d", &n);
        i = 0;
        j = 1;
        for (i=1;i<=n;i++){
            printf("%d:\n",i);
            r = j+i;
            i = j;
            j = r;




        }

    }while(n < 0);


    return 0;
}
