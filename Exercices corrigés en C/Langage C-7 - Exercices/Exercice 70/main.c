#include <stdio.h>

// Définition de la fonction qui mettre au cube le réel saisie par l'utilisateur
int cube(int N){

    return N * N * N;

}

int main(){

    int N;

    // Saisie et lecture du réel entrer par l'utilisateur
    printf("Veuillez entrer un nombre : \n");
    scanf("%d", &N);

    // Appel de la fonction cube(int N)
    printf("Le cube de %d est : %d", N, cube(N));




    return 0;
}
