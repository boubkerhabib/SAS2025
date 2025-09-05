// Challenge 4 : Trouver le Maximum

#include <stdio.h>

int x,y,z,i,j,r,h,u;
int max;


int main(){
    printf("entrer n:");
    scanf("%d",&j);
    int T[j];

    for (i = 0;i < j;i++){
            printf("entrer T[%d] = :",i+1);
            scanf("%d",&T[i]);

    }
    max = T[0];
    for (i = 0;i < j;i++){
            printf("T[%d] = %d:\n",i+1,T[i]);
            if (max < T[i]){
                max = T[i];

            }


    }
    printf("le maximon in tableau est %d:",max);
}
