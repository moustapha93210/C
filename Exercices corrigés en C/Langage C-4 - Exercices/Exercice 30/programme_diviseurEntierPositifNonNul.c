#include <stdio.h>

int main() {

    int i, n;
    float calcul;

    printf("Veuillez saisir un entier poisitif non nul : \n");
    scanf("%d", &n);

    calcul = 0;

    do{

        for(i = 1; i <= n; i++){

            calcul = n % i;
            //printf("%d // %d = %.0f\n", n, i, calcul);
            if(calcul == 0)
                printf("%d est un diviseur de %d\n", i, n);

        }

    }while(n <= 0);


    /*float calcul = 18 / 9;
    float calcul2 = 18 % 9;

    printf("%f\n", calcul);
    printf("%f\n", calcul2);*/



    return 0;
}
