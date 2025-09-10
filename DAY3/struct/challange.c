#include <stdio.h>
#include <stdlib.h>
struct personne{
    char nom[20];
    char prenom[20];
    int age;
};


int main(){
    struct personne boub;

    printf("entrer votre nom:");
    scanf("%s",boub.nom);
    printf("entrer votre prenom:");
    scanf("%s", boub.prenom);
    printf("entrer votre age:");
    scanf("%d",&boub.age);
    printf("le nom est %s :\nle prenom est %s:\nl'age est %d :",boub.nom,boub.prenom,boub.age);

    return 0;


}