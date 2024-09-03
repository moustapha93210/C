#include <stdio.h>

int main() {

    int nb1, nb2;

    printf("Donner nb1 : ");
    scanf("%d", &nb1);

    printf("Donner nb2 : ");
    scanf("%d", &nb2);

    if( (nb1 > 0 && nb2 > 0) || (nb1 < 0 && nb2 < 0))
        printf("%d et %d ont le meme signe.", nb1, nb2);
    else
        printf("%d et %d n'ont pas le meme signe.", nb1, nb2);

    return 0;
}
