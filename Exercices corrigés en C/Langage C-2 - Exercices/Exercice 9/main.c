#include <stdio.h>

int main() {

    int T, H, M, S, R;

    printf("Veuillez entrer un temps (Ce temps sera exprimer en secondes) : ");
    scanf("%d", &T);

    H = T / 3600;
    R = T % 3600;
    M = R / 60;
    S = R % 60;

    printf("%dH : %dm : %ds", H, M, S);



    return 0;
}