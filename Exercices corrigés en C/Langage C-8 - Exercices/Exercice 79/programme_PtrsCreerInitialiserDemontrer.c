#include <stdio.h>

int main(){

    int x = 5;
    //int *p = &x;
    int *p;

    p = &x;

    printf("La valeur de x est : %d\n", x);

    printf("Adresse de x est : %p\n", p);
    // OU
    printf("Adresse de x est : %p\n\n", &x);
    printf("La valeur de p est : %p\n", p);
    printf("Adresse de p est : %p\n", &p);
    printf("Valeur sur laquelle pointe p est : %d\n", *p);







    return 0;
}
