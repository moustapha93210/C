#include <stdio.h>

// PASSAGE PAR VALEUR
void echange(int x, int y){

    int tmp;

    tmp = x;
    x = y;
    y = tmp;

}

/* PASSAGE PAR RÉFÉRENCE OU PAR ADRESSE
void echange(int *x, int *y){

    int tmp;

    tmp = *x;
    *x = *y;
    *y = tmp;

}
*/

int main(){

    int a = 1;
    int b = 2;

    printf("a = %d, b = %d\n", a, b);

    // PASSAGE PAR VALEUR
    echange(a, b);

    /* PASSAGE PAR RÉFÉRENCE OU PAR ADRESSE
    echange(&a, &b);
    */

    printf("a = %d, b = %d", a, b);




    return 0;
}
