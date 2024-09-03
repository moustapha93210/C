#include <stdio.h>

int main() {

    int nb;

    printf("Veuillez entrer un nombre : \n");
    scanf("%d", &nb);

    if( (nb % 2) == 0 )
        printf("%d est pair", nb);
    else
        printf("%d est impair", nb);





    return 0;
}
