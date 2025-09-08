// Challenge 5 : Inversion de Chaîne:

#include <stdio.h>
#include <string.h>

char T[20];
char D[20];
char F[20];

int main() {
    int i,j,x;
    printf("entrer : ");
    scanf("%s", T);
    for (i = 0;T[i] != '\0';i++);
    x = 0;
    for (j = i-1;j >= 0;j--){
        D[x] = T[j];
        x++;
    }
    printf("inverse : %s\n",D);
    return 0;
}