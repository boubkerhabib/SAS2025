// Challenge 4 : Comparaison de Chaînes:
#include <stdio.h>
#include <string.h>

char T[20];
char D[20];

int main() {
    int i,j;
    printf("entrer : ");
    scanf("%s", T);
    printf("entrer : ");
    scanf("%s", D);
    if (strcmp(T,D) == 0){
        printf("T et D est meme:");
    }else{
        printf("T et D n'est pas meme:");
    }






    return 0;
}