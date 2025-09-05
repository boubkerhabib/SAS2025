//Challenge 1 : Initialisation et Affichage:
#include <stdio.h>
#include <string.h>

int x,y,z,i,j,r,h,u;
int T[5] = {1,2,3,4,5};

int main(){
    //printf("entrer n:");
    //scanf("%d",&j);

    for (i = 0;i < 5;i++){
            printf("entrer T[%d] = :",i+1);
            scanf("%d",&T[i]);

    }
    for (i = 0;i < 5;i++){
            printf("T[%d] = %d:\n",i+1,T[i]);

    }







    return 0;

}
