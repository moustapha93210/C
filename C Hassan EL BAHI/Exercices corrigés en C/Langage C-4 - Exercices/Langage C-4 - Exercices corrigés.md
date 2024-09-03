
# Exercice #24

Écrire un programme qui demande un nombre de départ, et qui ensuite affiche les dix nombres suivants ne utilisant la boucle `for`. Par exemple, si l'utilisateur entre le nombre 33, le programme affichera les nombres 34 à 43.

``` C
#include <stdio.h>  
  
int main() {  
  
    int nb, i;  
  
    printf("Veuillez entrer un nombre de depart : \n");  
    scanf("%d", &nb);  
  
    for(i = nb + 1; i <= nb + 10; i++)  
        printf("%d \n", i);  
      
  
  
    return 0;  
}
```


# Exercice #25

Écrire un programme qui demande un nombre de départ, et qui ensuite affiche les dix nombres suivants en utilisant les boucles `while` et `do ... while ...`.
Par exemple, si l'utilisateur entre le nombre 33, le programme affichera les nombres 34 a 43.

``` C
#include <stdio.h>  
  
int main() {  
  
    int N, i;  
  
    printf("veuillez saisir un nombre : \n");  
    scanf("%d", &N);  
  
    //BOUCLE WHILE  
    i = N + 1;  
  
    while( i <= N + 10 ){  
  
        printf("%d\n", i);  
        i++;  
    }  
  
    //BOUCLE DO ... WHILE  
    i = N + 1;  
  
    do {  
  
        printf("\n%d\n", i);  
        i++;  
  
    } while( i <= N + 10 );  
  
  
    return 0;  
}
```


# Exercice #26

Écrire un programme qui calcule et affiche la somme :
$$
S = 1/1 + 1/2 + 1/3 + ... + 1/n
$$


``` C
#include <stdio.h>  
  
int main() {  
  
    int n;  
    float i, S;  
  
    printf("Veuillez entrer un nombre : \n");  
    scanf("%d", &n);  
  
  
  
    for(i = 1; i <= n; i++){  
  
        S = S + 1/i;  
  
    }  
  
    printf("La somme est egal a : %.2f\n", S);  
  
  
    return 0;  
}
```


# Exercice #27

``` C
#include <stdio.h>  
#include <math.h>  
  
int main() {  
  
    int n;  
    float S, i;  
  
    printf("Veuillez saisir la valeur de N : \n");  
    scanf("%d", &n);  
  
    S = 0;  
    for(i = 0; i <= n; i++){  
  
        S = S + pow(10, i);  
    }  
  
    printf("\nLa somme est : %.2f", S);  
  
  
  
    return 0;  
}
```


# Exercice #28

Écrire un programme qui demande un nombre positif non nul de départ, et qui calcule sa factorielle.
Par exemple, la factorielle de 6, notée 6!, vaut 1 x 2 x 3 x 4 x 5 x6.

``` C
#include <stdio.h>  
  
int main(){  
  
    int n;  
    float f, i;  
  
    printf("Veuillez saisir un nombre n : \n");  
    scanf("%d", &n);  
  
  
    if(n < 0)  
        printf("Veuillez entrer un nombre positif");  
    else {  
        if (n == 0)  
            printf("La factorielle est : 1");  
        else {  
  
            f = 1;  
            for (i = 1; i <= n; i++)  
                f = f * i;  
            printf("La factorielle de %d est : %.2f", n, f);  
        }  
    }  
  
  
    return 0;  
}
```


# Exercice #29

Écrire un programme qui demande à l'utilisateur de taper un entier n, puis qui calcule la somme des carrées de n premiers entiers impairs.
Par exemple, si n = 5 le résultat est :
$$
1^2 + 3^2 + 5^2 + 7^2+ 9^2 = 165
$$

``` C
#include <stdio.h>  
#include <math.h>  
  
int main() {  
  
    int n, S, i, j;  
    //float S, i;  
  
  
    printf("Veuillez saisir un nombre : \n");  
    scanf("%d", &n);  
  
    S = 0;  
    j = 1;  
    for(i = 1; i <= n; i++){  
  
        S = S + pow(j, 2);  
        j = j + 2;  
    }  
  
    printf("La somme est : %d", S);  
  
  
  
  
    return 0;  
}
```


# Exercice #30

Écrire un programme qui affiche les diviseurs d'un entier positif n non nul.

``` C
#include <stdio.h>  
  
int main() {  
  
    int N, i;  
      
    do{  
        printf("Veuillez saisir la valeur de N : \n");  
        scanf("%d", &N);  
    }while(N <= 0);  
  
    for(i = 1; i <= N; i++){  
        if(N % i == 0)  
            printf("%d est un diviseur de %d\n", i, n);  
    }  
  
  
  
    return 0;  
}
```


# Exercice #31

À la naissance de Amal, son grand-père Ali, lui ouvre un compte bancaire. Ensuite, à chaque anniversaire, le grand père de Amal verse sur son compte 500dh, auxquels il ajoute le triple de l'âge de Amal.
Par exemple, lorsqu'elle a quatre ans, il lui verse 512dh. Écrire un programme qui permette de déterminer quelle somme aura Amal lors de son nième anniversaire.

``` C
#include <stdio.h>  
  
int main() {  
  
    int age, i;  
    float S;  
  
    printf("Veuillez entre un age : \n");  
    scanf("%d", &age);  
  
    S = 0;  
    for(i = 1; i <= age; i++)  
        S = S + (500 + i * 3);  
        /*  
        S = S + 500 + 1 * 3        S = S + 500 + 2 * 3        S = S + 500 + 3 * 3        ...        S = S + 500 + age * 3        */    printf("Le compte d'Amal a son %dieme aniversaire est : %.2fdh", age, S);  
  
  
    return 0;  
}
```


# Exercice #32

La population de la ville de Marrakech est 1 000 000 d'habitants et elle augmente de 50 000 habitants par an. Celle de la ville d'Agadir est de 500 000 habitants et elle augmente de 8% par an. Écrire un programme permettant de déterminer dans combien d'années la population de la ville d'Agadir dépassera celle de la ville de Marrakech.

``` C

```


# Exercice #33

Écrire un programme qui demande à l'utilisateur de taper un entier n et qui calcule Un définie par :
		U0 = 6
		Un = 4Un-1 + 10

``` C
#include <stdio.h>  
  
int main(){  
  
    int n, i, U;  
  
    printf("Veuillez entrer la valeur de n : \n");  
    scanf("%d", &n);  
  
    U = 6;  
  
    for(i = 1; i <= n; i++)  
        U = 4 * U + 10;  
    printf("U%d = %d", n, U);  
  
  
    return 0;  
}
```


# Exercice #34

Écrire un programme qui demande à l'utilisateur de taper un entier n, supérieur à 2, jusqu'à ce que la réponse convienne, puis qui calcule et affiche tous les termes de la suite de Fibonacci, inférieurs ou égaux à n.
La suite de Fibonacci est définie comme suite :
		U0 = 0
		U1 = 1
		Un+2 = Un+1 + Un

``` C
#include <stdio.h>  
  
int main(){  
  
    int n, i, U, Up, Upp;  
  
    do {  
        printf("Veuillez saisir une valeur n superieur a 2 : \n");  
        scanf("%d", &n);  
  
    }while(n < 2);  
  
    Upp = 0;  
    Up = 1;  
  
    printf("Les termes de la suite de Fibonacci sont : \n");  
    printf("U0 = %d\n", Upp);  
    printf("U1 = %d\n", Up);  
  
    for(i = 2; i <= n; ++i){  
  
        U = Upp + Up;  
  
        printf("U%d = %d\n", i, U);  
  
        Upp = Up;  
        Up = U;  
    }  
  
  
    return 0;  
}
```


# Exercice #35

Écrire un programme qui détermine si un nombre est premier ou non (rappel : un nombre premier n'est divisible que par 1 et par lui-même).

**NB** : À partir du moment où l'on trouve un reste nul c'est que le nombre est divisible par un autre nombre que 1 et lui même donc il n'est pas premier. Aussi Dans le programme, nous utilisons une boucle pour tester si le nombre est divisible par un nombre autre que 1 et lui-même (en commençant par 2 et allant jusqu'à la moitié du nombre, car aucun nombre n'est divisible par un autre nombre plus grand que la moitié de lui-même, à l'exception de lui-même).

``` C
#include <stdio.h>  
  
int main(){  
  
    int N, i, estPremier;  
  
    printf("Veuillez entrer un nombre : \n");  
    scanf("%d", &N);  
  
    estPremier = 1;  
  
    for(i = 2; i <= N / 2; i++){  
  
        if(N % i == 0) {  
            estPremier = 0;  
            break;  
        }  
    }  
  
    if(estPremier == 1)  
        printf("%d est un nombre premier.", N);  
    else  
        printf("%d est un nombre non premier.", N);  
  
  
  
    return 0;  
}
```


# Exercice #36

Écrire un programme qui affiche la table de multiplication pour les nombres de 1 à 10.

``` C
#include <stdio.h>  
  
int main(){  
  
    int i, j;  
  
    printf("x*y\t|\t");  
  
    for(i = 1; i <= 10; i++)  
        printf("%d\t", i);  
  
    printf("\n");  
  
    for(i = 1; i <=15; i++)  
        printf("------");  
  
    printf("\n");  
  
    for(i = 1; i <= 10; i++){  
        printf("%d\t|\t", i);  
  
        for(j = 1; j <= 10; j++)  
            printf("%d\t", i*j);  
        printf("\n");  
  
    }
  
  
  
  
    return 0;  
}
```


# Exercice #37

Ce jeu est très simple. L'ordinateur tire un nombre au hasard entre 1 et 30 et vous avez cinq essais pour le trouver. Après chaque tentative, l'ordinateur vous dira si le nombre que vous avez proposé est trop grand, trop petit ou si vous avez le bon nombre.

``` C
#include <stdio.h>  
#include <stdlib.h>  
#include <time.h>  
  
int main() {  
  
    int nombreAleatoire = 0;  
    int nombreTentatives = 0;  
    int nombreEntre;  
    int estCorrect = 0;  
  
    const int MAX = 30, MIN = 1;  
  
    srand(time(NULL));  
  
    nombreAleatoire = (rand() % (MAX - MIN + 1)) + MIN;  
  
    printf("L'ordinateur a choisi un nombre entre 1 et 30. A vous de jouer.\n");  
  
  
    do {  
        nombreTentatives ++;  
  
        printf("Quel est ce nombre  ? : \n");  
        scanf("%d", &nombreEntre);  
  
        if(nombreAleatoire > nombreEntre)  
            printf("C'est plus !\n");  
        else if(nombreAleatoire < nombreEntre)  
            printf("C'est moins !\n");  
        else {  
            estCorrect = 1;  
            break;  
        }  
  
    }while(nombreTentatives < 5);  
  
    if(estCorrect == 1)  
        printf("Bravo ! vous avez trouve %d en %d essais", nombreAleatoire, nombreTentatives);  
    else  
        printf("Oups ! vous avez depasse les 5 tentatives autorisees.");  
  
  
  
    return 0;  
}
```


# Exercice #38

Écrire un programme qui utilise un menu pouvant effectuer les opération suivantes : somme, soustraction, multiplication, division, le reste d'une division entière et puissance.
Après avoir choisi l'opération, le programme doit demander à l'utilisateur d'entrer les deux termes de l'opération, puis le programme affiche le résultat.
Le programme doit également demander à l'utilisateur s'il souhaite démarrer une autre opération ou quitter le programme.

``` C
#include <stdio.h>  
#include <math.h>  
  
int main(){  
  
    char reponse;  
    float A, B;  
    int operation;  
  
    do {  
        printf("----- Calculatrice : MENU -----.\n\n");  
  
        printf("1.\tAddition\n");  
        printf("2.\tSoustraction\n");  
        printf("3.\tMultiplication\n");  
        printf("4.\tDivsion\n");  
        printf("5.\tReste d'une division entiere\n");  
        printf("6.\tPuissance\n\n");  
  
        printf("Quel calcul veux-tu effectuer ? : \n");  
        scanf("%d", &operation);  
  
        printf("Saisir le premier terme : \n");  
        scanf("%f", &A);  
  
        printf("Saisir le deuxieme terme : \n");  
        scanf("%f", &B);  
  
        switch(operation){  
            case 1:  
                printf("Le resultat est %.2f \n", A + B);  
                break;  
            case 2:  
                printf("Le resultat est %.2f \n", A - B);  
                break;  
            case 3:  
                printf("Le resultat est %.2f \n", A * B);  
                break;  
            case 4:  
                if(B != 0)  
                    printf("Le resultat est %.2f \n", A / B);  
                else  
                    printf("La division par 0 est impossible \n");  
                break;  
            case 5:  
                if(B != 0)  
                    printf("Le resultat est %d \n", (int)A / (int)B);  
                else  
                    printf("Le reste d'une division par 0 est impossible \n");  
                break;  
            case 6:  
                printf("Le resultat est %.2f \n", pow(A, B));  
                break;  
            default:  
                printf("L'operateur est incorrect \n");  
                break;  
        }  
  
        printf("Veux-tu faire un autre calcul (O/N) ? : \n");  
        scanf(" %c", &reponse);  
  
    }while(reponse != 'N');  
  
  
  
    return 0;  
}
```


# Exercice #39

Écrire un programme qui demande à l'utilisateur d'entrer un entier, puis le programme compte et affiche le nombre de chiffres qui composent cet entier.

``` C
#include <stdio.h>  
  
int main(){  
  
    long N, M;  
    int Nbr = 0;  
  
    printf("Veuillez entrer un entier : \n");  
    scanf("%ld", &N);  
  
    M = N;  
  
    do {  
  
        Nbr++;  
  
        N = N / 10;  
  
    }while(N != 0);  
  
    printf("Nombre total des chiffres dans le nombre %ld est : %d\n", M, Nbr);  
  
  
  
  
    return 0;  
}
```


# Exercice #40

Écrire un programme qui demande à l'utilisateur d'entrer un entier, puis le programme trouve et affiche l'inverse de ce nombre.

``` C
#include <stdio.h>  
  
int main(){  
  
    int N, Inverse;  
  
    printf("Veuillez entrer un nombre entier : \n");  
    scanf("%d", &N);  
  
    Inverse = 0;  
  
    do {  
  
        Inverse = (Inverse * 10) + (N % 10);  
        N = N / 10;  
  
    }while(N != 0);  
  
    printf("L'inverse est : %d\n", Inverse);  
  
  
    return 0;  
}
```


# Exercice #41

Écrire un programme qui vérifie si un nombre est un palindrome ou non.
(rappel : Un nombre palindrome est un nombre qui peut se lire indifféremment de gauche à droite ou de droite à gauche, Exemple 161).

``` C
#include <stdio.h>  
  
int main(){  
  
    int N, M, Inverse;  
  
    printf("Veuillez saisir un nombre : \n");  
    scanf("%d", &N);  
  
    Inverse = 0;  
    M = N;  
  
    do {  
  
        Inverse = (Inverse * 10) + (N % 10);  
        N = N / 10;  
  
    } while(N != 0);  
  
  
    if(Inverse == M)  
        printf("%d est un palindrome.\n", M);  
    else  
        printf("%d est non palindrome.\n", M);  
  
  
  
  
    return 0;  
}
```


# Exercice #42

Écrire un programme permettant de prendre un nombre L de lignes et un nombre C de colonnes, puis de réaliser un "rectangle d'étoiles" de L lignes par C colonnes.

``` C
#include <stdio.h>  
  
int main(){  
  
    int L, C, i, j;  
  
    printf("Veuillez saisir le nombre de lignes : \n");  
    scanf("%d",&L);  
  
    printf("Veuillez saisir le nombre de colones : \n");  
    scanf("%d", &C);  
  
    for(i = 1; i <= L; i++){  
        for(j = 1; j <= C; j++){  
            printf("* ");  
        }  
        printf("\n");  
    }  
  
  
  
    return 0;  
}
```


# Exercice #43

Écrire un programme permettant de prendre un nombre L de lignes, puis de réaliser un "triangle d'étoile".

``` C
#include <stdio.h>  
  
int main(){  
  
    int L, i, j;  
  
    printf("Veuillez entrer le nombre de lignes : \n");  
    scanf("%d", &L);  
  
    for(i = 1; i <= L; i++){  
        for(j = 1; j <= i; j++){  
            printf("* ");  
        }  
        printf("\n");  
    }  
  
  
  
    return 0;  
}
```


# Exercice #44

Écrire un programme permettant de prendre un nombre L de lignes et un nombre C de colonnes, puis de réaliser un "cadre d'étoiles" de L lignes par C colonnes.

``` C
#include <stdio.h>  
  
int main(){  
  
    int L, C;  
    int i, j;  
  
    recCadreL:  
    printf("Veuillez saisir un nomber de lignes : \n");  
    scanf("%d", &L);  
  
    printf("Veuillez saisir un nomber de colonnes : \n");  
    scanf("%d", &C);  
  
    for(i = 1; i <= L; i++){  
  
        for(j = 1; j <= C; j++){  
  
            if(i == 1 || i == L || j == 1 || j == C)  
                printf("* ");  
            else  
                printf("  ");  
  
        }  
  
        printf("\n");  
  
  
    }  
  
    /*  
    for(i = 1; i <= C - 1; i++){  
        printf("* ");  
        for(j = 1; j <= i; j++){  
            printf("*");  
        }  
    }    */  
  
  
    return 0;  
}
```


# Exercice #45

Écrire un programme permettant à l'utilisateur d'entrer la longueur d'un côté L d'un carré puis le programme dessine la forme siuvante (L = 5) :
$$
\begin{array}{cccccc} * & * & * & * & * \\ * & * & \ & * & * \\ * & \ & * & \ & * \\ * & * & \ & * & * \\ * & * & * & * & * \\ \end{array}
$$
``` C
#include <stdio.h>  
  
int main(){  
  
    int L;  
    int i, j;  
  
  
    printf("Veuillez entrer un nombres de lignes : \n");  
    scanf("%d", &L);  
  
  
    for(i = 1; i <= L; i++){  
  
        for(j = 1; j <= L; j++){  
  
            if(i == 1 || i == L || j == 1 || j == L || i == j || j == (L - i) + 1)  
                printf(" * ");  
            else  
                printf("   ");  
  
        }  
  
        printf("\n");  
  
    }  
  
  
  
  
    return 0;  
}
```


# Exercice #46

Écrire un programme permettant de prendre un nombre L, puis de réaliser un "losange d'étoile" de la longueur L dans chaque côté.

``` C
#include <stdio.h>  
  
int main(){  
  
    int L;  
    int i, j;  
  
    recLosL:  
    printf("Veuillez saisir le nombre de ligne : \n");  
    scanf("%d", &L);  
  
    for(i = 1; i <= L; i++){  
  
        for(j = 1; j <= L - i; j++){  
  
            printf("   ");  
  
        }  
  
        for(j = 1; j <= L ; j++){  
  
            printf("* ");  
  
        }  
  
        printf("\n");  
  
    }  
  
  
  
  
  
    return 0;  
}
```


# Exercice #47

Écrire un programme permettant de prendre un nombre L de lignes, puis de réaliser le triangle suivant (L=5)

$$
\begin{array}{c}
\ \ \ \ \ \ * \\
\ \ \ \ \ * \ \ * \\
\ \ \ \ * \ \ \ \ \ \ \ \ * \\
\ \ \ * \ \ \ \ \ \ \ \ \ \ \ \ * \\
\ \ \ * \ * \ * \ * \ * \\
\end{array}
$$

``` C
#include <stdio.h>  
  
int main(){  
  
    int L;  
    int i, j;  
  
    recTriL:  
    printf("Veuillez saisir le nombres de lignes : \n");  
    scanf("%d", &L);  
  
    for(i = 1; i <= L; i++){  
  
        for(j = 1; j <= L - i; j++){  
  
            printf("   ");  
  
        }  
  
        for(j = 1; j <= (2 * i - 1); j++){  
  
            if(i == L || j == 1 || j == (2 * i - 1) )  
                printf(" * ");  
            else  
                printf("   ");  
  
        }  
  
    }  
  
  
  
    return 0;  
}
```


# Exercice #48

Écrire un programme permettant de prendre un nombre C de colonnes, puis de réaliser la forme suivante (C = 4) :
$$
\begin{array}{c} \ \ \ \ \ \ * \\ \ \ \ \ \ * \ * \\ \ \ \ \ * \ * \ * \\ \ \ * \ * \ * \ * \\ * \ * \ * \ * \ * \\ \end{array}
$$

``` C
#include <stdio.h>  
  
int main(){  
  
    int C;  
    int i, j, P;  
  
    recTriC:  
    printf("Veuillez saisir le nombres de colones : \n");  
    scanf("%d", &C);  
  
    P = 1;  
  
    for(i = 1; i <= (C * 2 - 1); i++){  
  
        for(j = 1; j <= P; j++){  
  
            printf(" * ");  
  
        }  
  
        if(i < C)  
            P++;  
        else  
            P--;  
  
        printf("\n");  
  
    }  
  
  
    return 0;  
}
```


