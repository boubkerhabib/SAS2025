// Challenge 6 : Compte des Occurrences d'un Caractère:

#include <stdio.h>
#include <string.h>

char T[20];
char D[20];
char F[20];
char K;

int main() {
    int i,x,t,j;
    t = 0;
    printf("entrer : ");
    scanf("%[^\n]", T);
    printf("entrer caracteir :");
    scanf(" %c", &K);
    for (i = 0;i < strlen(T);i++){
        if (T[i] == K){
            t++;
        }
    }
    if (t == 0){
        printf("k n'est pas in T:");
    }else if (t > 0){
        printf("%c est in %s:%d",K,T,t);
    }







    return 0;
}