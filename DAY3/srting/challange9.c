// Challenge 9 : Suppression des Espaces:
#include <stdio.h>
#include <string.h>

char T[20];
char D[20];
char F[20];
char K;





int main() {
    int i,x,t,j;
    printf("entrer : ");
    scanf("%[^\n]", T);
    t = 0;
    for (i = 0;i <strlen(T);i++){
            if (T[i] != ' '){
                D[t] = T[i];
                t++;
            }
    }
    printf("%s:\n", D);
    return 0;
}