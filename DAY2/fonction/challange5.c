// Challenge 5 : Fonction de Factorielle:

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int t, i, j, f, r, d,n;
int facto(){
    j = 1;
    for (i = 1;i <= n;i++){
        j = j*i;
    }
    return j;

}

int main() {
    printf("Entrer un nombre: ");
    scanf("%d", &n);
    facto(n);
    printf("%d! = %d:",n,j);



    return 0;
}
