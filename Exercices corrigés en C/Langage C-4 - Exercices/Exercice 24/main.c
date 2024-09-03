#include <stdio.h>

int main() {

    int nb, i;

    printf("Veuillez entrer un nombre de depart : \n");
    scanf("%d", &nb);

    for(i = nb + 1; i <= nb + 10; i++)
        printf("%d \n", i);



    return 0;
}
