
# Exercice #49

Écrire un programme qui déclare, remplisse et affiche un tableau de 10 entiers en les mettant tous à zéro.

``` C
#include <stdio.h>  
  
int main(){  
  
    int T[10];  
    int i;  
  
    for(i = 0; i < 10; i++){  
  
        T[i] = 0;  
  
    }  
  
    for(i = 0; i < 10; i++){  
  
        printf("T[%d] = %d \n", i + 1, T[i]);  
  
    }  
  
  
  
    return 0;  
}
```


# Exercice #50

Écrire un programme qui déclare, remplisse et affiche un tableau contenant les six voyelles de l'alphabet français.

``` C
#include <stdio.h>  
  
int main(){  
  
    char T[6];  
    int i;  
  
    T[0] = 'A';  
    T[1] = 'E';  
    T[2] = 'O';  
    T[3] = 'U';  
    T[4] = 'I';  
    T[5] = 'Y';  
  
    for(i = 0; i < 6; i++){  
  
        printf("%c \n", T[i]);  
  
    }  
  
  
    return 0;  
}
```


# Exercice #51

Écrire un programme qui demande à l'utilisateur de saisir 10 réels stockés dans un tableau, puis le programme calcule et affiche la somme, le produit et la moyenne des éléments du tableau

``` C
#include <stdio.h>  
  
int main(){  
  
    float reel, T[10], S, P, M;  
    int i, j;  
  
    printf("Veuillez saisir les elements du tableau : \n");  
  
    // Saisir 10 réels et les stockes dans un tableau  
    for(i = 0; i < 10; i++){  
  
        printf("T[%d] = ", i + 1);  
        scanf("%f", &T[i]);  
  
    }  
  
    S = 0;  
    P = 1;  
  
    for(i = 0; i < 10; i++){  
  
        S = S + T[i];  
        P = P * T[i];  
  
    }  
  
    M = S / 10;  
  
    printf("La somme est : %.2f\n", S);  
    printf("Le produit est : %.2f\n", P);  
    printf("La moyenne est : %.2f\n", M);  
  
  
  
    return 0;  
}


```


# Exercice #52

Écrire un programme qui effectue le produit scalaire de deux vecteurs de même taille (3 éléments) représentés par des tableaux à une dimension.

$$
U \cdot V = U_1 \times V_1 + U_2 \times V_2 + U_3 \times V_3
$$

``` C
#include <stdio.h>  
  
int main(){  
  
    float U[3], V[3], P;  
    int i;  
  
  
    for(i = 0; i < 3; i++){  
  
        printf("U[%d] = ", i+1);  
        scanf("%f", &U[i]);  
  
        printf("V[%d] = ", i+1);  
        scanf("%f", &V[i]);  
  
        printf("\n");  
  
    }  
  
    //P = U[0] * V[0] + U[1] * V[1] + U[2] * V[2]  
    P = 0;  
    for(i = 0; i < 3; i++){  
  
        P = P + U[i] * V[i];  
  
    }  
  
    printf("Le Produit scalaire des deux vecteurs est : %.2f", P);  
  
  
  
  
    return 0;  
}
```


# Exercice #53

Écrire un programme qui demande à l'utilisateur de saisir 10 entiers qu'on stocke dans un tableau T. Ensuite, le programme détermine et affiche le minimum des éléments du tableau T.

``` C
#include <stdio.h>  
  
int main(){  
  
    int T[10];  
    int i, min;  
  
    for(i = 0; i < 10; i++){  
  
        printf("T[%d] = ", i + 1);  
        scanf("%d", &T[i]);  
  
  
    }  
  
    min = T[0];  
  
    for(i = 0; i < 10; i++){  
  
        if(min > T[i]){  
  
            min = T[i];  
  
        }  
  
  
  
    }  
  
    printf("Le minimum des elements du tableau est : %d", min);  
  
  
  
  
  
    return 0;  
}
```


# Exercice #54

Écrire un programme qui demande à l'utilisateur de saisir 10 entiers qu'on stocke dans un tableau T. Ensuite, le programme détermine et affiche le maximum des éléments du tableau T.

``` C
#include <stdio.h>  
  
int main(){  
  
    int T[10];  
    int i, max;  
  
    for(i = 0; i < 10; i++){  
  
        printf("T[%d] = ", i + 1);  
        scanf("%d", &T[i]);  
  
  
    }  
  
    max = T[0];  
  
    for(i = 0; i < 10; i++){  
  
        if(max < T[i]){  
  
            max = T[i];  
  
        }  
  
  
  
    }  
  
    printf("Le maximum des elements du tableau est : %d", max);  
  
  
  
  
  
    return 0;  
}
```


# Exercice #55

Écrire un programme qui demande à l'utilisateur de saisir 10 entiers qu'on stocke dans un tableau T. Ensuite on redemande à l'utilisateur de saisir un entier n. L'objectif étant de chercher l'existence du nombre n dans T, le résultat va s'afficher comme suit :

- Si n se trouve dans T : "n se trouve dans le tableau".
- Si n ne se trouve pas dans T : "n ne se trouve pas dans le tableau".

``` C
#include <stdio.h>  
  
int main(){  
  
    int T[10];  
    int i, n, x;  
  
    printf("Veuillez saisir les elements du tableau : \n");  
  
    for(i = 0; i < 10; i++){  
  
        printf("T[%d] = ", i + 1);  
        scanf("%d", &T[i]);  
  
    }  
  
    printf("\nVeuillez saisir la valeur de n : \n");  
    scanf("%d", &n);  
  
    x = 0;  
  
    for(i = 0; i < 10; i++){  
  
        if(n == T[i]){  
  
            x++;  
  
        }  
  
    }  
  
    if(x == 0)  
        printf("%d ne se trouve pas dans le tableau.\n", n);  
    else  
        printf("%d se trouve dans le tableau.", n);  
  
  
  
  
  
  
  
    return 0;  
}
```


# Exercice #56

Écrire un programme qui demande à l'utilisateur de saisir 50 entiers qu'on stocke dans un tableau T. Ensuite on redemande à l'utilisateur de saisir un entier n. Le programme ensuite va calculer le nombre d'occurrence de n dans T.

``` C
#include <stdio.h>  
  
int main(){  
  
    int T[10];  
    int i, n, x;  
  
    printf("Veuillez saisir les elements du tableau : \n");  
  
    for(i = 0; i < 10; i++){  
  
        printf("T[%d] = ", i + 1);  
        scanf("%d", &T[i]);  
  
    }  
  
    printf("\nVeuillez saisir la valeur de n : \n");  
    scanf("%d", &n);  
  
    x = 0;  
  
    for(i = 0; i < 10; i++){  
  
        if(T[i] == n){  
  
            x++;  
  
        }  
  
    }  
  
    printf("Le nombre d'occurrence de %d dans le tableau T est : %d\n", n, x);  
  
  
  
  
  
    return 0;  
}
```


# Exercice #57

Écrire un programme permettant, à l'utilisateur de saisir les notes d'une class (10 étudiants). Le programme, une fois la saisie terminée, renvoie le nombre de ces notes supérieur à la moyenne de la classe.

``` C
#include <stdio.h>  
  
int main(){  
  
    float N[10];  
    float S, M;  
    int i, nbr;  
  
    printf("Veuillez saisir les notes : \n");  
    S = 0;  
    for(i = 0; i < 10; i++){  
  
        printf("T[%d] = ", i + 1);  
        scanf("%f", &N[i]);  
  
        S = S + N[i];  
    }  
  
    M = S / 10;  
    nbr = 0;  
  
    for(i = 0; i < 10; i++){  
  
        if(N[i] > M)  
            nbr = nbr + 1;  
  
    }  
  
    printf("Moyenne de la classe : %.2f/20\n", M);  
    printf("Nombre de notes superieur a la moyenne de la classe : %d\n", nbr);  
  
  
  
  
    return 0;  
}
```


# Exercice #58

Pour sa naissance, la grand-mère de Mohamed place un somme de 1000dh sur son compte épargne rémunéré au taux de 2% (chaque année le compte est augmenté de 2%). Écrire un programme permettant d'afficher un tableau sur 20 ans associant à chaque anniversaire de Mohamed la somme acquise sur son compte.

``` C
#include <stdio.h>  
  
int main() {  
  
    float S;  
    float C[20];  
    int i;  
  
    S = 1000;  
  
    for(i = 0; i < 20; i++){  
  
        S = S + S * 0.02;  
        C[i] = S;  
  
    }  
  
    for(i = 0; i < 20; i++){  
  
        printf("A l'anniversaire %d la somme du compte de Mohamed est : %.2f DH\n", i + 1, C[i]);  
  
    }  
  
  
  
    return 0;  
}
```


# Exercice #59

Écrire un programme qui renverse un tableau (Taille 6). Celui-ci doit prendre comme entrée un tableau et renvoyer le tableau de même taille ayant les valeurs dans l'ordre inverse.


``` C
#include <stdio.h>  
  
int main(){  
  
  
    int TE[6], TS[6];  
    int i;  
  
  
    printf("Veuillez saisir les elements du tableau initial : \n");  
    for(i = 0; i < 6; i++){  
  
        printf("TE[%d] = ", i);  
        scanf("%d", &TE[i]);  
  
    }  
  
    for(i = 0; i < 6; i++){  
  
        TS[5-i] = TE[i];  
  
    }  
  
    printf("Les elements du tableau inversee sont  : \n");  
  
    for(i = 0; i < 6; i++){  
  
        printf("TS[%d] = %d  \n", i, TS[i]);  
  
    }  
  
  
  
    return 0;  
}
```


# Exercice #60

Écrire un programme qui permet de créer et d'afficher le tableau des N premiers nombres premiers. N est un nombre entier saisi par l'utilisateur.

``` C
#include <stdio.h>  
  
int main(){  
  
    int N, i;  
  
    recn:  
    printf("Veuillez saisir un nombre entier : \n");  
    scanf("%d", &N);
  
    int T[N];  
    int compteur, x, estPremier;  
  
    compteur = 0;  
    x = 2;  
  
    do{  
        estPremier = 0;  
  
        for(i = 2; i <= x / 2; i++){  
  
            if(x % i == 0){  
  
                estPremier = 1;  
  
                printf("%d // %d = %d\n", x, i, x % i);  
                break;  
  
            }  
  
        }  
  
        if(estPremier == 0){  
  
            T[compteur] = x;  
            compteur++;  
  
        }  
  
        x++;  
    }while(compteur < N);  
  
    printf("Les %d premiers nombres premiers sont : \n", N);  
  
    for(i = 0; i < N; i++)  
        printf("%d\n", T[i]);  
  
  
  
    return 0;  
}
```


# Exercice #61

Écrire un programme qui demande à l'utilisateur de saisir 10 entiers qu'on stocke dans un tableau T. Ensuite, le programme détermine et affiche le premier et le deuxième plus grand élément du tableau. (S'aider de l'exercice 35 pour le faire)

``` C
#include <stdio.h>  
  
int main(){  
  
    int T[10];  
    int i, Max1, Max2;  
  
    printf("Veuillez saisir les elements du tableau : \n");  
  
    for(i = 0;i < 10; i++){  
  
        recNb:  
        printf("T[%d] = ", i + 1);  
        scanf("%d", &T[i]);  
  
    }  
  
    Max1 = T[0];  
    Max2 = T[0];  
  
    for(i = 1; i < 10; i++){  
  
        if(T[i] > Max1){  
  
            Max2 = Max1;  
            Max1 = T[i];  
  
        }  
        else if(T[i] > Max2 && T[i] < Max1){  
  
            Max2 = T[i];  
  
        }  
  
    }  
  
    printf("Le 1er plus grand element du tableau T : %d\n", Max1);  
    printf("Le 2eme plus grand element du tableau T : %d\n", Max2);  
  
  
  
  
  
    return 0;  
}
```


# Exercice #62

Écrire un programme qui permet d'insérer un élément dans un tableau à un position spécifiée. Le programme doit également afficher un message d'erreur si la position d'insertion n'est pas valide.

``` C
#include <stdio.h>  
  
int main(){  
  
    int T[100];  
    int i, Taille, pos, N;  
  
    recTaille:  
    printf("Veuillez selectionner la taille de votre tableau : \n");  
    scanf("%d", &Taille);  
  
  
    printf("Veuillez saisir les elements du tableau : \n");  
    for(i = 0; i < Taille; i++){  
  
  
        printf("T[%d] = ", i + 1);  
        scanf("%d", &T[i]);  
  
    }  
  
  
    printf("Entrer la valeur de l'element que vous voulez inserer dans le tableau : \n");  
    scanf("%d", &N);  
  
  
    printf("Entrer la position de l'element que vous voulez inserer dans le tableau : \n");  
    scanf("%d", &pos);  
  
    if(pos <= 0 || pos > Taille + 1)  
        printf("Position invalide ! Veuillez saisir une position entre 1 et %d", Taille);  
    else{  
  
        for(i = Taille; i >= pos; i--){  
  
            T[i] = T[i - 1];  
  
            printf("T[%d] = %d\n", i, T[i]);  
  
        }  
          
  
        T[pos - 1] = N;  
        Taille++;  
          
  
        printf("Les elements de tableau apres insertion sont : \n");  
  
        for(i = 0; i < Taille; i++){  
  
            printf("T[%d] = %d\n", i + 1, T[i]);  
  
        }  
  
    }  
  
  
    return 0;  
}
```


# Exercice #63

Écrire un programme qui permet de supprimer un élément dans un tableau à une position spécifiée. Le programme doit également afficher un message d'erreur si la position d'insertion n'est pas valide.

``` C
#include <stdio.h>  
  
int main(){  
  
    int T[100];  
    int i, Taille, pos;  
  
  
    // Choisir la taille du tableau  
    printf("Veuillez choisir la taille de votre tableau : \n");  
    scanf("%d", &Taille);  
  
  
    // Remplir le tableau T[Taille]  
    printf("Veuillez remplir votre tableau : \n");  
    for(i = 0; i < Taille; i++){  
  
        printf("T[%d] = ", i + 1);  
        scanf("%d", &T[i]);  
  
    }  
  
  
    // Choisir l'element que l'on veut supprimer  
    printf("Veuillez choisir la position de l'element que vous voulez supprimer : \n");  
    scanf("%d", &pos);  
  
    if(pos <= 0 || pos > Taille){  
        printf("Position invalide ! Veuillez entrer une position comprise entre 1 et %d", Taille);  
    }  
    else{  
  
        // Suppression de l'élément à la position choisie  
        for(i = pos; i <= Taille - 1; i++){  
  
            T[i - 1] = T[i];// Décaler les éléments à gauche  
  
        }  
  
        Taille--;// Réduire la taille du tableau  
  
        // Affichage du tableau après suppression        printf("Les elements du tableau apres la suppression sont : \n");  
        for(i = 0; i < Taille; i++){  
  
            printf("%d\t", T[i]);  
  
        }  
  
  
    }  
  
  
  
  
  
  
    return 0;  
}
```


# Exercice #64

Écrire un programme qui demande à l'utilisateur de remplir un tableau de 8 entiers, puis le programme détermine et affiche les éléments uniques du tableau.

``` C
#include <stdio.h>  
  
int main(){  
  
    int T[8], Frq[8];  
    int i, j, compteur;  
  
    printf("Veuillez saisir les elements du tableau : \n");  
  
    // Remplissage du Tableau T[8]  
    for(i = 0; i < 8; i++){  
  
        printf("T[%d] = ", i + 1);  
        scanf("%d", &T[i]);  
  
    }  
  
  
    //Remplissage du tableau Frq[8]  
    for(i = 0; i < 8; i++){  
  
        Frq[i] = -1;  
  
    }  
  
  
    //Compare les éléments du tableau pour trouver les éléments unique  
    for(i = 0; i < 8; i++) {  
  
        compteur = 1;  
  
        for(j = i + 1; j < 8; j++){  
  
            if(T[i] == T[j]){  
  
                compteur++;  
                Frq[j] = 0;  
  
            }  
        }  
  
        if (Frq[i] != 0)  
            Frq[i] = compteur;  
  
    }  
  
  
  
    // Affichage des éléments uniques du tableau  
    printf("Les elements unique du tableau sont : \n");  
  
    for(i = 0; i < 8; i++) {  
  
        if (Frq[i] == 1)  
            printf("%d , ", T[i]);  
  
    }  
  
  
    return 0;  
}
```


# Exercice #65

Écrire un programme qui demande à l'utilisateur de remplir un tableau de 8 entiers, puis le programme détermine et affiche les éléments qui ne sont pas unique dans le tableau.

``` C
#include <stdio.h>  
  
int main(){  
  
    int T[8], Frq[8];  
    int i, j, compteur;  
  
  
    // Remplissage du tableau T[8]  
    printf("Veuillez saisir les elements du tableau : \n");  
  
    for(i = 0; i < 8; i++){  
  
        printf("T[%d] = ", i + 1);  
        scanf("%d", &T[i]);  
  
    }  
  
  
    // Remplissage du tableau Frq[8]  
    for(i = 0; i < 8; i++){  
  
        Frq[i] = -1;  
  
    }  
  
  
    // Comparaison des éléments du tableau T[8] pour trouver les éléments Non-Unique  
    for(i = 0; i < 8; i++){  
          
        compteur = 1;  
  
        for(j = i+1; j < 8; j++){  
            if(T[i] == T[j]){  
                compteur++;  
                Frq[j] = 0;  
            }  
        }  
        if(Frq[i] != 0)  
            Frq[i] = compteur;  
    }  
  
      
    // Affichage des éléments Non Unique du tableau T[8]  
    printf("\nLes elements qui ne sont pas unique du tableau T sont : \n");  
      
    for(i = 0; i < 8; i++){  
  
        if(Frq[i] >= 2)  
            printf( "%d ", T[i]);  
  
    }  
  
  
  
  
  
  
    return 0;  
}
```


# Exercice #66

Écrire un programme qui demande à l'utilisateur d'entrer des éléments dans un tableau, puis le programme place les éléments pairs et impairs dans deux tableau séparés.

``` C
#include <stdio.h>  
  
int main(){  
  
    int T[100], P[100], I[100];  
    int Taille, i, Icmp, Pcmp;  
  
  
    // Saisie de la taille du tableau T  
    printf("Veuillez saisir la taille du tableau : \n");  
    scanf("%d", &Taille);  
  
  
    // Remplissage du tableau T  
    printf("Veuillez saisir les elements du tableau : \n");  
  
    for(i = 0; i < Taille; i++){  
  
        printf("T[%d] = ", i+1);  
        scanf("%d", &T[i]);  
    }  
  
    // Mettre les éléments pair dans le tableau P et les éléments impairs dans I  
    Pcmp = 0;  
    Icmp = 0;  
  
    for(i = 0; i < Taille; i++){  
  
        // Pair  
        if(T[i] % 2 == 0){  
  
            P[Pcmp] = T[i];  
            Pcmp++;  
  
        }  
        // Impair  
        else {  
  
            I[Icmp] = T[i];  
            Icmp++;  
  
        }  
  
    }  
  
    // Affichage des éléments pair du tableau T  
    printf("Les elements pairs du tableau sont : \n");  
  
    for(i = 0; i < Pcmp; i++)  
        printf("%d ", P[i]);  
  
  
    // Affichage des éléments impair du tableau T  
    printf("Les elements impairs du tableau sont : \n");  
  
    for(i = 0; i < Icmp; i++)  
        printf("%d ", I[i]);  
  
  
    return 0;  
}
```


# Exercice #67

Écrire un programme qui demande à l'utilisateur de taper 8 entiers qui seront stockés dans un tableau. Le programme doit tirer le tableau par ordre croissant et doit afficher le tableau.

``` C
#include <stdio.h>  
  
int main(){  
  
    int T[8];  
    int i, j, tmp;  
  
  
  
    // Saisir les éléments du tableau  
    printf("Veuillez saisir les elements du tableau : \n");  
  
    for(i = 0; i < 8; i++){  
        printf("T[%d] = ", i+1);  
        scanf("%d",&T[i]);  
    }  
  
  
    // Comparaison des éléments du tableau pour les placer dans l'odre croissant  
    for(i = 0; i < 8; i++){  
  
        for(j = i+1; j < 8; j++){  
  
            if(T[i] > T[j]){  
  
                tmp = T[i];  
                T[i] = T[j];  
                T[j] = tmp;  
  
            }  
        }  
    }  
  
  
    // Affichage du tableau dans l'odre croissant  
    printf("Les elements du tableau par ordre croissant : \n");  
  
    for(i = 0; i < 8;i++){  
  
        printf("%d ", T[i]);  
  
    }  
  
  
  
  
  
    return 0;  
}
```


# Exercice #68

Écrire un programme qui demande à l'utilisateur de taper 8 entiers qui seront stockés dans un tableau. Le programme doit tirer le tableau par ordre décroissant et doit afficher le tableau.


``` C
#include <stdio.h>  
  
int main(){  
  
    int T[8];  
    int i, j, tmp;  
  
  
    // Saisir les éléments du tableau T  
    printf("Veuillez saisir les elements du tableau : \n");  
  
    for(i = 0; i < 8; i++){  
        printf("T[%d] = ", i+1);  
        scanf("%d", &T[i]);  
    }  
  
  
    // Comparer les éléments du tableau T et les ranger dans l'ordre croissant  
    for(i = 0; i < 8; i++){  
  
        for(j = i+1; j < 8; j++){  
  
            if(T[i] < T[j]){  
  
                tmp = T[i];  
                T[i] = T[j];  
                T[j] = tmp;  
  
            }  
        }  
    }  
  
  
    // Afficher le tableau T ranger dans l'odre décroissant  
    printf("Les elements du tableau par odre decroissant : \n");  
  
    for(i = 0; i < 8; i++){  
  
        printf("%d ", T[i]);  
  
    }  
  
  
  
    return 0;  
}
```
