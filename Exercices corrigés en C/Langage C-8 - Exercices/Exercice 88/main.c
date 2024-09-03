#include <stdio.h>

int main() {

    int A[100], B[100];
    int N, M;
    int *PA, *PB;

    // Saisie t lecture de la taille du tableau A choisis par l'utilisateur
    printf("Veuillez saisir la taille du tableau A : \n");
    scanf("%d", &N);


    // Saisie et lecture du remplissage de A
    printf("Veuillez saisir les elements du tableau A : \n");

    for(PA = A; PA < A + N; PA++){

        printf("A[%d] = ", PA - A + 1);
        scanf("%d", PA);
    }


    // Saisie et lecture de la taille du tableau B choisis par l'utilisateur
    printf("\nVeuillez saisir la taille du tableau B : \n");
    scanf("%d", &M);


    // Saisie et lecture du remplissage de B
    printf("Veuillez saisir les elements du tableau B : \n");

    for(PB = B; PB < B + M; PB++){

        printf("B[%d] = ", PB - B + 1);
        scanf("%d", PB);
    }



    // Ajout des éléments B à la fin de A
    for(PA = A + N, PB = B; PB < B + M; PA++, PB++)
        *PA = *PB;

    N = N + M;


    // Affichage du tableau qui contient le tableau A et B
    printf("Apres l'ajout du tableau B a la fin du tableau A voici le nouveau tableau : \n");

    for(PA = A; PA <  A + N; PA++)
        printf("%d ", *PA);


    return 0;
}
