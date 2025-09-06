// Challenge 6 : Fonction de Fibonacci:
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int t, i, j, f, r, d,n;
int facto(){
        i = 0;
        j = 1;
        for (i=1;i<=n;i++){
            r = j+i;
            i = j;
            j = r;
            return i;
            

}

int main(){
    printf("Entrer un nombre: ");
    scanf("%d", &n);
    facto(n);
    printf("%d:",i);

    return 0;

}
