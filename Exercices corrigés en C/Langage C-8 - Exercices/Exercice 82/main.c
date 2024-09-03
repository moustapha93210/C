#include <stdio.h>



int main(){

    int n;
    int *p = &n;
    int i;

    do {

        printf("Veuillez entrer un nombre : \n");
        scanf("%d", p);

    }while(*p <= 0);

    printf("Les diviseurs de %d sont : ", *p);
    for(i = 1; i <= *p; i++){

        if(*p % i == 0)
            printf("%d ", i);

    }






    return 0;
}
