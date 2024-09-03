#include <stdio.h>

int main() {

    int n;
    int *p = &n;


    printf("Veuillez saisir un nombre : \n");
    scanf("%d", &n);

    if(*p % 2 == 0)
        printf("%d est un nombre pair\n", *p);
    else
        printf("%d est un nombre impair\n", *p);



    return 0;
}
