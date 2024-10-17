#include <stdio.h>
#include <string.h>

int main() {

    char M[20];
    char R[20];
    int n;
    

    printf("Veuillez saisir une chaine : ");
    gets(M);

    strcpy(R, M);

    strrev(R);

    n = strcmp(M, R);

    if(n == 0)
        printf("La chaine est palindromique");
    else
        printf("La chaine n'est pas un palindrome");



    return 0;
}
