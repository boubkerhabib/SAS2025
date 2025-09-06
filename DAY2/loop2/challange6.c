// Challenge 6 : Factorial:
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
            j = j*i;
        }

    }while(n < 0);
    printf("%d! = %d\n",n,j);


    return 0;
}
