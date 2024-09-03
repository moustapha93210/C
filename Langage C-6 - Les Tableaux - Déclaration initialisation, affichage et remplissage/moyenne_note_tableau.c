#include <stdio.h>

int main() {

    int taille = 10;
    float N[taille];
    float S, M;
    int i;

    for (i = 0; i < taille; i++) {

        printf("Donner la note de l'etudiant num %d : ", i + 1);
        scanf("%f", &N[i]);

    }

    S = 0;

    for (i = 0; i < taille; i++) {

        S = S + N[i];

    }

    M = S / taille;

    printf("La moyenne des notes est de : %.2f", M);

    return 0;

}

/* Ce que j'ai fait

float moyN = ((N[0] + N[1] + N[2] + N[3] + N[4]) / 5);
printf("La moyenne des notes est de %.0f\n", moyN);

for (int i = 0; i < 5; i++) {

    printf("%.0f\n", N[i]);
}
*/