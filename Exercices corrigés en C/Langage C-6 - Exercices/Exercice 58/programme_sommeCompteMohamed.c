#include <stdio.h>

int main() {

    float argentGM[20];
    float S;
    int i;

    S = 1000;

    for(i = 0; i < 20; i++){

        S = S  + (S * 0.02);
        argentGM[i] = S;

        printf("Annee : %d\n", i);
        printf("Somme sur le compte de Mohamed : %.2f dh\n\n", argentGM[i]);

    }






    return 0;
}
