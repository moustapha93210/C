#include <stdio.h>

//Déclaration de la fonction qui permettra d'afficher la table de multiplication de N
void TMultiplication(int N){

    int i;

    printf("La table de multiplication de %d est : \n", N);

    for(i = 0; i <= 10; i++)
        printf("%d x %d = %d\n", N, i, N * i);

}


int main(){

    int N;

    // Saisie et lecture de N
    printf("Veuillez saisir un nombre : \n");
    scanf("%d", &N);


    //Appel de la fonction TMultiplication(int N)
    TMultiplication(N);
    TMultiplication(2);
    TMultiplication(1);
    TMultiplication(9);
    TMultiplication(7);


    return 0;
}
