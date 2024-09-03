
# Exercice #24

Écrire un programme qui demande un nombre de départ, et qui ensuite affiche les dix nombres suivants ne utilisant la boucle `for`. Par exemple, si l'utilisateur entre le nombre 33, le programme affichera les nombres 34 à 43.

``` C
#include <stdio.h>  
  
int main() {  
  
    int nb, i;  
  
    printf("Veuillez entrer un nombre de depart : \n");  
    scanf("%d", &nb);   
  
    for(i = nb + 1; i <= (nb + 10); i++){  
        printf("%d \n", i);  
    }  
  
  
    return 0;  
}
```


# Exercice #25

Écrire un programme qui demande un nombre de départ, et qui ensuite affiche les dix nombres suivants en utilisant les boucles `while` et `do ... while ...`.
Par exemple, si l'utilisateur entre le nombre 33, le programme affichera les nombres 34 a 43.

``` C
#include <stdio.h>  
  
int main() {  
  
    int nb, i;  
  
    printf("veuillez entrer un nombre de depart : \n");  
    scanf("%d", &nb);   
  
    //BOUCLE WHILE
    i = nb + 1;  
  
    while( i <= (nb + 10) ){  
  
        printf("%d\n", i);  
        i++;  
    }  

	//BOUCLE DO ... WHILE
    i = nb + 1;  
  
    do {  
  
        printf("\n%d\n", i);  
        i++;  
  
    } while( i <= (nb + 10) ); 
  
  
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
  
    int nb;  
    float i, S;  
  
    printf("Veuillez entrer un nombre : \n");  
    scanf("%d", &nb);  
  
  
  
    for(i = 1; i <= nb; i++){  
  
        S = S + (1/i);  
  
    }  
  
    printf("La somme est egal a : %.2f\n", S);  
  
  
    return 0;  
}
```


# Exercice #27

Écrire un programme qui calcule et affiche la somme :

``` C
#include <stdio.h>  
#include <math.h>  
  
int main() {  
  
    int nb, i, S;  
  
    printf("Veuillez entrer un nombre : \n");  
    scanf("%d", &nb);  
  
    S = 0;  
    for(i = 0; i <= nb; i++){  
  
        S = S + ( pow(10, i) );  
        printf("S = %d + 10^%d = %d\n", S, i, S);  
    }  
  
    printf("\nLa somme est : %d", S);  
  
  
  
    return 0;  
}
```


# Exercice #28

Écrire un programme qui demande un nombre positif non nul de départ, et qui calcule sa factorielle.
Par exemple, la factorielle de 6, notée 6!, vaut 1 x 2 x 3 x 4 x 5 x6.

``` C
#include <stdio.h>  
  
int main() {  
  
    int nb;  
    float i;  
    long double factorielle;  
  
    debut:  
    printf("Veuillez saisir un nombre : \n");  
    scanf("%d", &nb);  
  
  
  
    if(nb > 0){  
  
        factorielle = 1;  
        for(i = 1; i <= nb; i++){  
  
            factorielle = factorielle * i;  
  
            printf("%d! = %.0Lf x %.0f\n", nb, factorielle, i);  
        }  
  
        printf("\n%d! = %.0Lf", nb, factorielle);  
    }  
    else if(nb == 0){  
  
        printf("0! = 1");  
    }  
    else{  
        printf("Veuillez entrer un nombre positif\n\n");  
        goto debut;  
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
  
  
    printf("Veuillez saisir un entier n : \n");  
    scanf("%d", &n);  
  
    S = 0;  
    j = 1;  
    for(i = 1; i <= n; i++){  
  
        S = S + pow(j, 2);  
        j = j + 2;  
  
        printf("j = %d\n", j);  
        printf("S = %d + (%d)^2\n\n", S, j);  
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
  
    int i, n;  
    float calcul;  
  
    printf("Veuillez saisir un entier poisitif non nul : \n");  
    scanf("%d", &n);  
  
    calcul = 0;  
  
    do{  
  
        for(i = 1; i <= n; i++){  
  
            calcul = n % i;  
            //printf("%d // %d = %.0f\n", n, i, calcul);  
            if(calcul == 0)  
                printf("%d est un diviseur de %d\n", i, n);  
  
        }  
  
    }while(n <= 0);  
  
      
    /*float calcul = 18 / 9;  
    float calcul2 = 18 % 9;  
    printf("%f\n", calcul);    printf("%f\n", calcul2);*/  
  
  
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
  
    debut:  
    printf("Veuillez entre un age : \n");  
    scanf("%d", &age);  
  
    S = 0;  
    i = 0;  
  
    printf("i = %d\n", i);  
    printf("S = 0 + (500 + 0 * 3) = %.2f\n\n", S + (500 + 0 * 3));  
  
    for(i = 1; i <= age; i++){  
        S = S + (500 + i * 3);  
        /*  
        S = S + 500 + 1 * 3        S = S + 500 + 2 * 3        S = S + 500 + 3 * 3        ...        S = S + 500 + age * 3*/  
        printf("i = %d\n", i);  
        printf("S = %.2f + (500 + %d x 3) = %.2f\n\n", S, i, S);  
    }  
  
    printf("A %d ans Amal aura %.2fdh sur son compte.", age, S);  
  
  
  
  
  
  
    return 0;  
}
```


# Exercice #32

La population de la ville de Marrakech est 1 000 000 d'habitants et elle augmente de 50 000 habitants par an. Celle de la ville d'Agadir est de 500 000 habitants et elle augmente de 8% par an. Écrire un programme permettant de déterminer dans combien d'années la population de la ville d'Agadir dépassera celle de la ville de Marrakech.

``` C
#include <stdio.h>  
  
int main() {  
  
    float populationMarrakech, populationMarrakech0, populationAgadir, populationAgadir0;  
    int annee, i;  
  
    populationMarrakech = 1000000;  
    populationMarrakech0 = 1000000;  
  
    populationAgadir = 500000;  
    populationAgadir0 = 500000;  
  
    annee = 0;  
    i = 0;  
  
  
    printf("Annee = %d\n", annee);  
    printf("Population d'Agadir = %.2f\n\n", populationAgadir);  
  
    while(populationMarrakech > populationAgadir){  
  
        annee = annee + 1;  
        populationMarrakech = populationMarrakech + 50000;  
        populationAgadir = populationAgadir * 1.08;  
        /*  
        populationAgadir = 500 000 * 1.08 = 540 000;        populationAgadir = 540 000 * 1.08 = 583 200;        populationAgadir = 583 200 * 1.08 = 629 856;  
        ...  
        populationAgadir > populationMarrakech        */  
        printf("Annee = %d\n", annee);  
        printf("Population d'Agadir = %.2f x 1.08 = %.2f\n", populationAgadir0, populationAgadir);  
  
        printf("Annee = %d\n", annee);  
        printf("Population de Marrakech = %.2f + 50 000 = %.2f\n\n", populationMarrakech0, populationMarrakech);  
  
        i++;  
  
        populationAgadir0 = populationAgadir;  
        populationMarrakech0 = populationMarrakech;  
    }  
  
    printf("C'est a la %deme annee que la Population d'Agadir (%.0f habitants) depassera celle de Marrakech (%.0f habitants).", i, populationAgadir, populationMarrakech);  
  
  
    return 0;  
}
```


# Exercice #33

Écrire un programme qui demande à l'utilisateur de taper un entier n et qui calcule Un définie par :
		U0 = 6
		Un = 4Un-1 + 10

``` C
#include <stdio.h>  
  
int main(){  
  
    int N, i, U, U0;  
  
    printf("Veuillez saisir un entier n : \n");  
    scanf("%d", &N);  
  
    U = 6;  
    U0 = 6;  
  
    do {  
  
        for(i = 1; i <= N; i++){  
  
            U = 4 * U + 10;  
  
            printf("U%d = 4 x U%d + 10\n", i, i - 1);  
            printf("U%d = 4 x %d + 10 = %d\n\n", i, U0, U);  
  
            U0 = U;  
  
        }  
  
  
    }while( ( N > 0 || N < 0 ) && i <= N);  
  
  
  
  
  
  
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
  
    int n, Upp, Up, U, i;  
  
    do {  
  
        printf("Veuillez saisir une valeur n superieur a 2 : \n");  
        scanf("%d", &n);  
  
    }while(n < 2);  
  
    Upp = 0;  
    Up = 1;  
  
    printf("U0 = %d\n", Upp);  
    printf("U1 = %d\n\n", Up);  
  
    for(int i = 2; i <= n; ++i){  
  
        U = Upp + Up;  
  
        printf("Iteration %d :\n", i - 1);  
        printf("U%i = %d + %d = %d\n\n", i, Upp, Up, U);  
  
        Upp = Up;  
        Up = U;  
    }  
  
    printf("\nU%d = %d", n, U);  
  
  
    return 0;  
}
```


# Exercice #35

Écrire un programme qui détermine si un nombre est premier ou non (rappel : un nombre premier n'est divisible que par 1 et par lui-même).

**NB** : À partir du moment où l'on trouve un reste nul c'est que le nombre est divisible par un autre nombre que 1 et lui même donc il n'est pas premier. Aussi Dans le programme, nous utilisons une boucle pour tester si le nombre est divisible par un nombre autre que 1 et lui-même (en commençant par 2 et allant jusqu'à la moitié du nombre, car aucun nombre n'est divisible par un autre nombre plus grand que la moitié de lui-même, à l'exception de lui-même).

``` C
#include <stdio.h>  
  
int main(){  
  
    int nb, i;  
    float C;  
  
    printf("Veuillez entrer un nombre : \n");  
    scanf("%d", &nb);  
  
    for(i = 2; i <= nb / 2; i++){  
  
        C = nb % i;  
  
        printf("%d // %i = %.2f\n", nb, i, C);  
  
        if(C == 0) {  
            printf("%d n'est pas un nombre premier. Il a un reste qui est egal a 0, il est divisible par %d, donc il n'est pas premier.", nb, i);  
            break;  
        }  
        else  
            continue;  
    }  
  
    printf("%d est un nombre premier. il n'a aucun reste nul, il est donc divisible que par 1 ou lui meme (%d).", nb, nb);  
  
  
  
  
  
  
    return 0;  
}  
  
  
/*  
    float calcul, calcul2, calcul3, calcul4;  
    calcul = 5 / 4;    calcul2 = 5 % 4;    calcul3 = 5 / 8;    calcul4 = 5 % 8;  
    printf("5 / 5 = %.2f\n", calcul);    printf("5 // 5 = %.2f\n", calcul2);    printf("5 / 1 = %.2f\n", calcul3);    printf("5 // 1 = %.2f\n", calcul4);*/
```


# Exercice #36

Écrire un programme qui affiche la table de multiplication pour les nombres de 1 à 10.

``` C
#include <stdio.h>  
  
int main(){  
  
    int ligne, i, colonne, j, k;  
  
    printf("x * y\t|\t");  
  
    for( i = 1; i <= 10; i++){  
  
        printf("%d\t", i);  
  
    }  
  
    printf("\n");  
  
    for( i = 1; i <= 47; i++){  
  
        char tiret = '-';  
  
        printf("%c ", tiret);  
  
    }  
      
  
    for( i = 1; i <= 10; i++){  
  
        printf("\n%d\t|\t", i);  
  
        for(j = 1; j <= 10; j++){  
            printf("%d\t", i * j);  
        }  
  
  
  
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
  
    int nombreAleatoire = 0, nbTentatives, i, nbChoisis;  
    const int MAX = 30, MIN = 1;  
  
    srand(time(NULL));  
  
    nombreAleatoire = (rand() % (MAX - MIN + 1)) + MIN;  
  
    printf("Bonjour, Je suis l'ordinateur qui jouera avec vous.\n");  
    printf("J'ai choisis un nombre entre 1 et 30, essayez de le trouver, vous avez 5 tentatives.\n\n");  
  
    nbTentatives = 5;  
    i = 5;  
  
    do {  
  
        debut:  
        printf("Quel nombre choisissez-vous ? : \n");  
        scanf("%d", &nbChoisis);  
  
        if( ( nbChoisis > nombreAleatoire ) && ( nbChoisis >= 1 && nbChoisis <= 30 ) ){  
            printf("Plus petit !\n");  
            i = i - 1;  
            printf("Il vous reste %d tentatives\n\n",i);  
  
        }  
        else if( ( nbChoisis < nombreAleatoire ) && ( nbChoisis >= 1 && nbChoisis <= 30 )){  
            printf("Plus grand !\n");  
            i = i - 1;  
            printf("Il vous reste %d tentatives\n\n",i);  
        }  
        else{  
            break;  
        }  
  
  
    }while(i > 0 && ( nbChoisis >= 1 && nbChoisis <= 30 ) );  
  
    if(i > 0 && ( nbChoisis >= 1 && nbChoisis <= 30 ))  
        printf("Bravo ! vous avez trouve le nombre qui etait %d", nombreAleatoire);  
    else if(i == 0 && ( nbChoisis >= 1 && nbChoisis <= 30 ))  
        printf("Vous avez perdu, le nombre qu'il fallais deviner etait %d", nombreAleatoire);  
    else{  
        printf("Erreur, Veuillez choisir un nombre entre 1 et 30 !\n\n");  
        goto debut;  
    }  
  
  
  
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
    int operation;  
    float nb1, nb2;  
  
  
    do {  
  
        printf("Bienvenue dans la calculatrice C-operation.\n\n");  
  
        printf("1.\tAddition\n");  
        printf("2.\tSoustraction\n");  
        printf("3.\tMultiplication\n");  
        printf("4.\tDivsion\n");  
        printf("5.\tReste d'une division\n");  
        printf("6.\tPuissance\n");  
        printf("7.\tQuitter\n\n");  
  
        recOperation:  
        //Lecture et validation de operation  
        printf("Veuillez choisir une operation : \n");  
        if(scanf("%d", &operation) != 1 || operation < 1 || operation > 7 ){  
            printf("Erreur ! Veuillez entrer un chiffre entre 1 et 7.\n\n");  
            while(getchar() != '\n');// Vider le buffer d'entrée  
            goto recOperation;// Recommence la boucle si l'entrée est invalide  
        }  
  
        if(operation == 7){  
            printf("Vous avez choisis de quitter. Aurevoir !\n");  
            break;  
        }  
  
        recNb1:  
        //Lecture et validation de nb1  
        printf("Veuillez choisir le 1er terme : \n");  
        if( scanf("%f", &nb1) != 1 ){  
            printf("Erreur ! Veuillez entrer un nombre valide\n");  
            while(getchar() != '\n');// Vider le buffer d'entrée  
            goto recNb1;// Recommence la boucle si l'entrée est invalide  
        }  
  
        recNb2:  
        //Lecture et validation de nb2  
        printf("Veuillez choisir le 2eme terme : \n");  
        if( scanf("%f", &nb2) != 1 ){  
            printf("Erreur ! Veuillez entrer un nombre valide\n");  
            while(getchar() != '\n');// Vider le buffer d'entrée  
            goto recNb2;// Recommence la boucle si l'entrée est invalide  
        }  
  
  
        switch(operation){  
            case 1:  
                printf("1er terme : %.2f\n", nb1);  
                printf("2eme terme : %.2f\n\n", nb2);  
  
                printf("%.2f + %.2f = %.2f\n\n", nb1, nb2, nb1 + nb2);  
  
                break;  
            case 2:  
                printf("1er terme : %.2f\n", nb1);  
                printf("2eme terme : %.2f\n\n", nb2);  
  
                printf("%.2f - %.2f = %.2f\n\n", nb1, nb2, nb1 - nb2);  
  
                break;  
            case 3:  
                printf("1er terme : %.2f\n", nb1);  
                printf("2eme terme : %.2f\n\n", nb2);  
  
                printf("%.2f x %.2f = %.2f\n\n", nb1, nb2, nb1 * nb2);  
  
                break;  
            case 4:  
                printf("1er terme : %.2f\n", nb1);  
                printf("2eme terme : %.2f\n\n", nb2);  
  
                if(nb2 != 0)  
                    printf("%.2f / %.2f = %.2f\n\n", nb1, nb2, nb1 / nb2);  
                else  
                    printf("La division par 0 est impossible !\n\n");  
  
                break;  
            case 5:  
                printf("1er terme : %d\n", (int)nb1);  
                printf("2eme terme : %d\n\n", (int)nb2);  
  
                if( (int)nb2 != 0 )  
                    printf("%d // %d = %d\n\n", (int)nb1, (int)nb2, (int)nb1 % (int)nb2);  
                else  
                    printf("Le reste d'une division par 0 est impossible !\n\n");  
  
                break;  
            case 6:  
                printf("1er terme : %.2f\n", nb1);  
                printf("2eme terme : %.2f\n\n", nb2);  
  
                printf("(%.2f)^(%.2f) = %.2f\n\n", nb1, nb2, pow(nb1, nb2));  
  
                break;  
            default:  
                printf("Erreur ! L'operateur est incorrect.\n");  
                printf("Veuillez choisir un chiffre entre 1 et 7\n\n");  
                break;  
  
        }  
  
        do {  
            printf("Souhaitez vous faire un autre calcul ? : \n");  
            scanf(" %c", &reponse); // Lecture du choix de reponse  
  
            while(getchar() != '\n');// Vider le buffer d'entrée  
  
            if(reponse != 'o' && reponse != 'O' && reponse != 'n' && reponse != 'N'){  
                printf("Erreur ! Veuillez entrer 'n' ou 'N' pour non et 'o' 'O' pour oui.\n");  
            }  
        } while(reponse != 'o' && reponse != 'O' && reponse != 'n' && reponse != 'N');  
  
  
    } while( reponse == 'o' || reponse == 'O' );  
  
  
    printf("\nMerci d'avoir utilise le programme !");  
  
  
    return 0;  
}
```


# Exercice #39

Écrire un programme qui demande à l'utilisateur d'entrer un entier, puis le programme compte et affiche le nombre de chiffres qui composent cet entier.

``` C
#include <stdio.h>  
  
int main(){  
  
    long n, n0;  
    int nbr, i, C;  
  
    printf("Veuillez entrer un entier : \n");  
    scanf("%ld", &n);  
  
    nbr = 1;  
    n0 = n;  
  
    for(i = 1; i <= n; i++){  
  
  
  
        printf("Iteration numero %d\n", i);  
        printf("n = %ld\n", n);  
        printf("%ld / 10 = %d\n\n", n, C);  
  
        C = n / 10;  
  
        if(C != 0){  
            nbr++;  
            n = C;  
        }  
  
    }  
  
    printf("Iteration numero %d\n", i);  
    printf("n = %ld\n", n);  
    printf("%ld / 10 = %d\n\n", n, C);  
  
    printf("Le nombre total de chiffres dans le nombre %ld est de : %d\n", n0, nbr);  
  
  
  
  
  
    return 0;  
}
```


# Exercice #40

Écrire un programme qui demande à l'utilisateur d'entrer un entier, puis le programme trouve et affiche l'inverse de ce nombre.

``` C
#include <stdio.h>  
  
int main(){  
  
    int N, N0, Finverse, inverse, inverse0;  
  
    printf("Veuillez entrer un nombre entier : \n");  
    scanf("%d", &N);  
  
    inverse0 = 0;  
    inverse = 0;  
  
    N0 = N;  
  
    printf("Inverse = 0\n");  
  
    do {  
  
        inverse = (inverse * 10) + (N % 10);  
  
        printf("Inverse = (%d x 10) + (%d // 10) \n", inverse, N);  
        printf("Inverse = %d\n\n", inverse);  
  
        N = N / 10;  
  
        printf("N = %d / 10\n", N0);  
        printf("N = %d\n\n", N);  
  
    }while(N != 0);  
  
    printf("Nombre initial : %d\n", N0);  
    printf("Nombre inverse : %d\n", inverse);  
  
  
    return 0;  
}
```


# Exercice #41

Écrire un programme qui vérifie si un nombre est un palindrome ou non.
(rappel : Un nombre palindrome est un nombre qui peut se lire indifféremment de gauche à droite ou de droite à gauche, Exemple 161).

``` C
#include <stdio.h>  
  
int main(){  
  
    int n, n0, inverse;  
  
    printf("Veuillez choisir un nombre : \n");  
    scanf("%d", &n);  
  
    n0 = n;  
    inverse = 0;  
  
  
    do {  
  
        inverse = (inverse * 10) + (n % 10);  
        n = n / 10;  
  
        printf("n = %d\n", n);  
        printf("inverse = %d\n\n",inverse);  
  
    } while(n != 0);  
  
    printf("n = %d\n", n0);  
    printf("inverse = %d\n",inverse);  
  
    if(inverse == n0)  
        printf("%d est un palindrome.\n", n0);  
    else  
        printf("%d n'est pas un palindrome.\n", n0);  
  
  
  
  
  
    return 0;  
}
```


# Exercice #42

Écrire un programme permettant de prendre un nombre L de lignes et un nombre C de colonnes, puis de réaliser un "rectangle d'étoiles" de L lignes par C colonnes

``` C
#include <stdio.h>  
  
int main(){  
  
    int L, C, i, j;  
  
    recLrec:  
    printf("Veuillez entrer le nombre de lignes de votre rectangle d'etoile : \n");  
    if( scanf("%d",&L) != 1 ){  
        printf("Erreur ! Veuillez entrer un nombres.\n");  
        while(getchar() != '\n');// Vider le buffer d'entrée  
        goto recLrec;// Recommence la boucle si l'entrée est invalide  
    }  
  
    recCrec:  
    printf("Veuillez entrer le nombre de colones de votre rectangle d'etoile : \n");  
    if( scanf("%d", &C) != 1 ){  
        printf("Erreur ! Veuillez entrer un nombre.\n");  
        while(getchar() != '\n');  
        goto recCrec;  
    }  
  
    printf("Voici votre rectangle d'etoile : \n");  
  
    for(i = 1; i <= L; i++){  
  
        printf("\n* ");  
  
        for(j = 1; j <= C - 1; j++){  
  
            printf("* ");  
  
        }  
  
    }
  
  
  
    return 0;  
}
```


# Exercice #43

Écrire un programme permettant de prendre un nombre L de lignes, puis de réaliser un "triangle d'étoile".

``` C
#include <stdio.h>  
  
int main(){  
  
    int L, etoile, i, j;  
  
    recTriL:  
    printf("Veuillez entrer le nombre de lignes de votre triangle d'etoile : \n");  
    if( scanf("%d", &L) != 1 ){  
        printf("Erreur ! Veuillez entrer un nombre.\n");  
        while(getchar() != '\n');// Vider le buffer d'entrée  
        goto recTriL;// Recommence la boucle si l'entrée est invalide  
    }  
  
    printf("Voici votre triangle d'etoile : \n");  
  
    for(i = 1; i <= L; i++){  
  
        printf("\n* ");  
  
        for(j = 1; j <= i - 1; j++){  
  
            printf("* ");  
  
        }  
    }  
  
  
  
    return 0;  
}
```


# Exercice #44

Écrire un programme permettant de prendre un nombre L de lignes et un nombre C de colonnes, puis de réaliser un "cadre d'étoiles" de L lignes par C colonnes.

``` C
#include <stdio.h>  
  
int main(){  
  
    int L, C,i, j;  
  
    recCadreL:  
    printf("Veuillez saisir un nomber de lignes pour votre cadre d'etoile : \n");  
    if( scanf("%d", &L) != 1 ){  
        printf("Erreur ! Veuillez entrer un nombre entier.\n");  
        while(getchar() != '\n');// Vider le buffer d'entrée  
        goto recCadreL;// Recommence la boucle si l'entrée est invalide  
    }  
  
    printf("Veuillez saisir un nomber de colonnes pour votre cadre d'etoile : \n");  
    if( scanf("%d", &C) != 1 ){  
        printf("Erreur ! Veuillez entrer un nombre entier.\n");  
        while(getchar() != '\n');// Vider le buffer d'entrée  
        goto recCadreL;// Recommence la boucle si l'entrée est invalide  
    }  
  
    for(i = 1; i <= L; i++){  
  
        printf("\n* ");  
  
  
        for(j = 1; j <= C - 1; j++){  
  
  
            if(i == 1)  
                printf(" * ");  
            else if(i == L)  
                printf(" * ");  
            else if( j == (C - 1) )  
                printf(" * ");  
            else  
                printf("   ");  
  
  
        }  
  
  
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
  
    int L, C;  
    int i, j;  
  
    recCarL:  
    printf("Veuillez entrer un nombres de lignes pour votre carree d'etoile : \n");  
    if( scanf("%d", &L) != 1 ){  
        printf("Erreur ! Veuillez entrer un nombre entier.\n");  
        while(getchar() != '\n');// Vider le buffer d'entrée  
        goto recCarL;// Recommence la boucle si l''entrée est invalide  
    }  
  
  
    for(i = 1; i <= L; i++){  
  
        printf("\n* ");  
  
        for(j = 1; j <= L - 1; j++){  
  
            if(i == 1)  
                printf(" * ");  
            else if(i == L)  
                printf(" * ");  
            else if(j == 0)  
                printf(" * ");  
            else if(j == L - 1)  
                printf(" * ");  
            else if(i - 1 == j)  
                printf(" * ");  
            else if(j == ( L - 1 ) - i + 1)  
                printf(" * ");  
            else  
                printf("   ");  
        }  
  
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
    printf("Veuillez entrer un nombre de ligne pour votre losange d'etoile : \n");  
    if( scanf("%d", &L) !=1 || L <= 0 ){  
        printf("Erreur ! Veuillez entrer un nombre entier.\n");  
        while(getchar() != '\n');// Vider le buffer d'entrée  
        goto recLosL;// Recommence la boucle en cas de saisie incorrect  
    }  
  
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
    printf("Veuillez entrer le nombres de lignes de votre triangle d'etoile : \n");  
    if( scanf("%d", &L) != 1 ){  
        printf("Erreur ! Veuillez entrer un nombre entier.\n");  
        while(getchar() != '\n');// Vider le buffer d'entrée  
        goto recTriL; // Recommence la bouche si l'entrée est invalide  
    }  
  
    for(i = 1; i <= L; i++){  
  
        printf("\n");  
  
        for(j = 1; j <= L - i; j++){  
  
                printf("   ");  
  
        }  
  
        for(j = 1; j <= (2 * i - 1); j++){  
  
            if(i == L)  
                printf(" * ");  
            else if(j == 1)  
                printf(" * ");  
            else if( j == (2 * i - 1) )  
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
    printf("Veuillez entrer le nombres de colones de votre triangle d'etoile : \n");  
    if( scanf("%d", &C) != 1 ){  
        printf("Erreur ! Veuillez entrer un nombre entier.\n");  
        while(getchar() != '\n');// Vider le buffer d'entrée  
        goto recTriC; // Recommence la bouche si l'entrée est invalide  
    }  
  
    P = 1;  
  
    for(i = 1; i <= (C * 2 - 1); i++){  
  
        printf("\n");  
  
  
        for(j = 1; j <= P; j++){  
  
            printf(" * ");  
  
        }  
  
        if(i < C)  
            P++;  
        else  
            P--;  
  
    }  
  
  
    return 0;  
}
```


