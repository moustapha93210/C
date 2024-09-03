#include <stdio.h>

int main() {

    int T, sec, min, h, reste;

    printf("Veuillez entrer un temps (Ce temps sera exprimer en secondes) : ");
    scanf("%d", &T);

    h = T / 3600;
    reste = T % 3600;
    min = reste / 60;
    sec = reste % 60;

    printf("T = %d secondes => %d heures %d minutes %d secondes", T, h, min, sec);



    return 0;
}
