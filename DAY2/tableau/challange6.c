// Challenge 7 : Tableau en Ordre Croissant:

#include <stdio.h>
#include <string.h>

int x,y,z,i,j,r,h,u;
int max;


int main(){
    printf("entrer n:");
    scanf("%d",&x);
    int T[x];

    for (i = 0;i < x;i++){
            printf("entrer T[%d] = :",i+1);
            scanf("%d",&T[i]);

    }

    for (i = 0;i < x-1;i++){
            for (r = i+1;r < x;r++){
                    if (T[i] < T[r]){
                        max = T[i];
                        T[i] = T[r];
                        T[r] = max;
                    }
                    //printf("%d:\n",max);



            }


    }
    for (i = 0;i < x; i++){
        printf("%d:\n",T[i]);
    }



    //printf("la somme de tableau est %d:",max);






    return 0;

}


