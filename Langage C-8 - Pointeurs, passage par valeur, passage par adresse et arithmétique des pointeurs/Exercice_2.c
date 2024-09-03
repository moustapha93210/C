#include <stdio.h>


void maximum(int *x, int *y, int *m){

    if(*x > *y)
        *m = *x;
    else
        *m = *y;

}



int main(){

    int a, b, max;

    printf("Veuillez saisir une valeur : \n");
    scanf("%d", &a);

    printf("Veuillez saisir une deuxième valeur : \n");
    scanf("%d", &b);

    maximum(&a, &b, &max);

    printf("Le Max des deux valeurs est : %d\n", max);



    return 0;
}