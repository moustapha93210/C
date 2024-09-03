#include <stdio.h>

int main() {

    int age, i;
    float S;

    debut:
    printf("Veuillez entre un age : \n");
    scanf("%d", &age);

    S = 0;
    i = 0;

    printf("i = %d\n", i);
    printf("S = 0 + (500 + 0 * 3) = %.2f\n\n", S + (500 + 0 * 3));

    for(i = 1; i <= age; i++){
        S = S + (500 + i * 3);
        /*
        S = S + 500 + 1 * 3
        S = S + 500 + 2 * 3
        S = S + 500 + 3 * 3
        ...
        S = S + 500 + age * 3*/

        printf("i = %d\n", i);
        printf("S = %.2f + (500 + %d x 3) = %.2f\n\n", S, i, S);
    }

    printf("A %d ans Amal aura %.2fdh sur son compte.", age, S);






    return 0;
}
