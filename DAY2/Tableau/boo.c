#include <stdio.h>

int main() {
    int t[5] = {1, 2, 3, 4, 5};
    
    printf("Contenu du tableau :\n");

    for (int i = 0; i < 5; i++) {
        printf("%d\n", t[i]);
    }

    return 0;
}
