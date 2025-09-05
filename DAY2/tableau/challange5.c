// Challenge 5 : Trouver le Minimum
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
    min = T[0];
    for (i = 0;i < j;i++){
            printf("T[%d] = %d:\n",i+1,T[i]);
            if (min > T[i]){
                min = T[i];

            }


    }
    printf("le minimon in tableau est %d:",min);
