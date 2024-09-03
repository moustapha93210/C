#include <stdio.h>

int main() {

    int age, i;
    float S;

    printf("Veuillez entre un age : \n");
    scanf("%d", &age);

    S = 0;
    for(i = 1; i <= age; i++)
        S = S + (500 + i * 3);
        /*
        S = S + 500 + 1 * 3
        S = S + 500 + 2 * 3
        S = S + 500 + 3 * 3
        ...
        S = S + 500 + age * 3
        */
    printf("Le compte d'Amal a son %dieme aniversaire est : %.2fdh", age, S);


    return 0;
}
