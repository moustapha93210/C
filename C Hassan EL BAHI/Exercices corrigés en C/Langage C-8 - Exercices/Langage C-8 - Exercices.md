
# Exercice #79

Écrire un programme C pour créer, initialiser et démontrer l'utilisation de pointeurs.

``` C
#include <stdio.h>


int main(){

	int x = 5;
	//int *p = &x;
	int *p;
	
	p = &x;
	
	printf("La valeur de x est : %d\n", x);
	
	printf"Adresse de x est : %p\n", p);
	// OU
	printf("Adresse de x est : %p\n", &x);
	printf("La valeur de p est : %p\n", p);
	printf("Adresse de p est : %p\n", &p);
	printf("Valeur sur laquelle pointe p est : %d\n", *p);
	
	return 0;
}
```


# Exercice #80

À l'aide de pointeurs, écrivez un programme qui calcule la somme, le produit, la différence et la division de deux nombre réels.

``` C
#include <stdio.h>  
  
int main() {  
  
    float a, b;  
  
    float *p = &a;  
    float *q;  
    q = &b;  
  
    printf("Veuillez saisir la valeur de a : \n");  
    scanf("%f", &a);  
  
    printf("Veuillez saisir la valeur de b : \n");  
    scanf("%f",q);  
  
  
    printf("A + B = %.2f\n", *p + *q);  
    printf("A x B = %.2f\n", *p * *q);  
    printf("A - B = %.2f\n", *p - *q);  
  
    if(*q != 0)  
        printf("A / B = %.2f\n", *p / *q);  
    else  
        printf("Erreur ! La division par 0 est impossible.\n");  


    return 0;  
}
```


# Exercice #81

À l'aide de pointeurs, écrivez un programme qui vérifie si un nombre est pair ou impair.

``` C
#include <stdio.h>  
  
int main() {  
  
    int a;  
    int *p = &a;  
  
    recA:  
    printf("Veuillez saisir un nombre : \n");  
    if( scanf("%d", &a) != 1 ){  
  
        printf("Erreur ! Veuillez entrer un nombre.\n");  
        while(getchar() != '\n');// Vider le buffer d'entrée  
        goto recA;// Recommence la boucle si la saisie et invalide  
    }  
  
    if(*p % 2 == 0)  
        printf("%d est pair\n", *p);  
    else  
        printf("%d est impair\n", *p);  
  
  
  
  
  
    return 0;  
}
```


# Exercice #82

À l'aide de pointeurs, écrivez un programme qui affiche les diviseurs d'un positifs n non nul.

``` C
#include <stdio.h>  
  
  
  
int main(){  
  
    int n;  
    int *p = &n;  
    int i;  
  
    recEntier:  
    printf("Veuillez saisir un nombre entier : \n");  
    if( scanf("%d", p) != 1 || *p <= 0){  
  
        printf("Erreur ! Veuillez entrer un nombre.\n");  
        while(getchar() != '\n');// Vider le buffer d'entrée  
        goto recEntier;// Recommence la boucle si l'entrée est invalide  
    }  
  
    for(i = 1; i <= *p; i++){  
  
        if(*p % i == 0)  
            printf("%d\t", i);  
  
    }  
  
  
  
    return 0;  
}
```


# Exercice #83

Écrivez un programme qui utilise une fonction qui échange le contenu de deux entiers s'ils ont le même signe, sinon il place la somme des deux dans le premier entier et leur produit dans le second (Pensez à utiliser le passage par référence)

``` C
#include <stdio.h>  
  
// Passage par référence (par adresse)  
void echange(int *x, int *y){  
  
    int tmp;  
  
    if( ( *x > 0 && *y > 0 ) || ( *x < 0 && *y < 0 ) ){  
  
        printf("%d et %d ont le meme signe.\n\n", *x, *y);  
  
        printf("Avant echange : \n");  
        printf("a = %d\n", *x);  
        printf("b = %d\n\n", *y);  
  
        tmp = *x;  
        *x = *y;  
        *y = tmp;  
  
        printf("Apres echange : \n");  
        printf("a = %d\n", *x);  
        printf("b = %d\n\n", *y);  
  
    }  
    else{  
  
        printf("%d et %d ont des signes different.\n\n", *x, *y);  
  
        tmp = *x * *y;  
        *x = *x + *y;  
        *y = tmp;  
  
        printf("a = %d\n", *x);  
        printf("b = %d\n", *y);  
    }  
}  
  
  
int main(){  
  
    int a, b;  
    int *p = &a;  
    int *q = &b;  
  
  
    // Saisie, contrôle et lecture de a  
    recA:  
    printf("Veuillez saisir a : \n");  
    if(scanf("%d", p) != 1){  
  
        printf("Erreur ! Veuillez entrer un nombre.\n");  
        while(getchar() != '\n');// Vider le buffer d'entrée  
        goto recA;// Recommence la boucle si l'entrée est invalide  
    }  
  
  
    // Saisie, contrôle et lecture de b  
    recB:  
    printf("Veuillez saisir b : \n");  
    if(scanf("%d", q) != 1){  
  
        printf("Erreur ! Veuillez entrer un nombre.\n");  
        while(getchar() != '\n');// Vider le buffer d'entrée  
        goto recB;// Recommence la boucle si l'entrée est invalide  
    }  
  
    // Appel de la fonction qui permet le changement de a et b (passage par réference)  
    echange(p, q);  
  
  
  
  
    return 0;  
}
```


# Exercice #84

L'objectif de cet exercice est de représenter en mémoire les données déclarées dans un programme, ainsi que leurs différentes valeurs, à un moment d'exécution donné. Pour ce faire, vous représenterez l'occupation des données en mémoire dans un tableau à 3 colonnes.

``` C
#include <stdio.h>  
  
int main(){  
  
    int i;  
  
    int a = 10;  
    printf("Instruction : a = 10\n");  
    printf("Adresse de a = %p\n", &a);  
    printf("Valeur de a = %d\n\n", a);  
  
  
    int b = 5;  
    printf("Instruction : b = 5\n");  
    printf("Adresse de b = %p\n", &b);  
    printf("Valeur de b = %d\n\n", b);  
  
  
    int tab[3] = {1, 2, 3};  
    printf("Instruction : tab[3] = {1, 2, 3};\n");  
    for(i = 0; i < 3; i++)  
        printf("tab[%d] = %d\n", i , tab[i]);  
  
  
    int *p;  
    printf("\nInstruction : *p\n");  
    printf("Adresse de p = %p\n", &p);  
    printf("Valeur de p = \n\n");  
  
  
    tab[0] = a;  
    printf("Instruction : tab[0] = a\n");  
    printf("Valeur de tab[0] = %d\n\n", tab[0]);  
  
  
    *(tab+1) = b;  
    printf("Instruction : *(tab+1) = b\n");  
    printf("*(tab+1) <=> *(&tab[0] + &1])\n");  
    printf("         <=> *(&tab[0+1])\n");  
    printf("         <=> *(&tab[1]) = *(1016)\n");  
    printf("Valeur de *(tab+1) = %d\n\n", tab[1]);  
  
  
    p = tab + 2;  
    printf("Instruction : p = tab + 2\n");  
    printf("p = tab + 2 <=> p = &tab[0] + &2\n");  
    printf("            <=> p = &tab[0+2] \n");  
    printf("            <=> p = &tab[2] \n");  
    printf("Valeur de p = tab + 2 = %p\n\n", &tab[2]);  
  
  
    *p = *(p-1);  
    printf("Instruction : *p = *(p-1)\n");  
    printf("*p = *(p-1) <=> *p = *(&tab[2] - 1 * sizeof(int)\n");  
    printf("            <=> *p = *(1016 - 1 * sizeof(int) )\n");  
    printf("            <=> *p = *(1016 - 1 * 4)\n");  
    printf("            <=> *p = *(1012)\n");  
    printf("            <=> *p = *(&tab[1])\n");  
    printf("            <=> *p = 5\n");  
    printf("Valeur de *p = *(p-1) = %d\n\n", tab[2]);  
  
    --p;  
    printf("Instruction : --p\n");  
    printf("--p <=> p - 1 * sizeof(int)\n");  
    printf("    <=> &tab[2] - 1 * 4\n");  
    printf("    <=> 1016 - 1 * 4 = 1012\n");  
    printf("    <=> &tab[1]\n");  
    printf("Valeur de --p = &tab[1] = 1012 = %p\n\n", &tab[1]);  
  
    *p = *(p-1);  
    printf("Instruction : *p = *(p-1)\n");  
    printf("*p = *(p-1) <=> *p = *(&tab[1-1)\n");  
    printf("            <=> *p = *(&tab[0]) = *(1008)\n");  
    printf("            <=> *p = 10\n");  
    printf("Valeur de *p = *(p-1) = %d\n\n", tab[0]);  
  
    --p;  
    printf("Instruction : --p\n");  
    printf("--p <=> p - 1 * sizeof(int)\n");  
    printf("    <=> &tab[1] - 1 * 4\n");  
    printf("    <=> 1012 - 1 * 4 = 1008\n");  
    printf("    <=> &tab[0]\n");  
    printf("Valeur de --p = &tab[0] = 1008 = %p\n\n", &tab[0]);  
  
    *p = *(p+2);  
    printf("Instruction : *p = *(p+2)\n");  
    printf("*p = *(p+2) <=> *p = *(&tab[0] + &2)\n");  
    printf("            <=> *p = *(&tab[0+2])\n");  
    printf("            <=> *p = *(&tab[2]) = *(1016)\n");  
    printf("            <=> *p = 5\n");  
    printf("Valeur de *p = *(p+2) = %d\n\n", tab[2]);  
  
  
  
  
    return 0;  
}
```

``` C
#include <stdio.h>  
  
int main(){  
  
    int a = 10;  
  
    int b = 5;  
  
    int tab[3] = {1, 2, 3};  
  
    int *p;
```

| Nom variable | Adresse | Valeur |
| ------------ | :-----: | :----: |
| a            |  1000   |   10   |
| b            |  1004   |   5    |
| tab\[0]      |  1008   |   1    |
| tab\[1]      |  1012   |   2    |
| tab\[2]      |  1016   |   3    |
| p            |  1020   |   -    |

``` C
	tab[0] = a; 
```

| Nom variable | Adresse | Valeur |
| ------------ | :-----: | :----: |
| a            |  1000   |   10   |
| b            |  1004   |   5    |
| tab\[0]      |  1008   |   10   |
| tab\[1]      |  1012   |   2    |
| tab\[2]      |  1016   |   3    |
| p            |  1020   |   -    |

``` C
	*(tab+1) = b; 
```

| Nom variable | Adresse | Valeur |
| ------------ | :-----: | :----: |
| a            |  1000   |   10   |
| b            |  1004   |   5    |
| tab\[0]      |  1008   |   10   |
| tab\[1]      |  1012   |   5    |
| tab\[2]      |  1016   |   3    |
| p            |  1020   |   -    |

``` C
	p = tab + 2; 
```

| Nom variable | Adresse | Valeur |
| ------------ | :-----: | :----: |
| a            |  1000   |   10   |
| b            |  1004   |   5    |
| tab\[0]      |  1008   |   10   |
| tab\[1]      |  1012   |   5    |
| tab\[2]      |  1016   |   3    |
| p            |  1020   |  1016  |

``` C
    *p = *(p-1);  
```

| Nom variable | Adresse | Valeur |
| ------------ | :-----: | :----: |
| a            |  1000   |   10   |
| b            |  1004   |   5    |
| tab\[0]      |  1008   |   10   |
| tab\[1]      |  1012   |   5    |
| tab\[2]      |  1016   |   5    |
| p            |  1020   |  1016  |

``` C
	--p;  
```

| Nom variable | Adresse | Valeur |
| ------------ | :-----: | :----: |
| a            |  1000   |   10   |
| b            |  1004   |   5    |
| tab\[0]      |  1008   |   10   |
| tab\[1]      |  1012   |   5    |
| tab\[2]      |  1016   |   5    |
| p            |  1020   |  1012  |

``` C
	*p = *(p-1);
```

| Nom variable | Adresse | Valeur |
| ------------ | :-----: | :----: |
| a            |  1000   |   10   |
| b            |  1004   |   5    |
| tab\[0]      |  1008   |   10   |
| tab\[1]      |  1012   |   10   |
| tab\[2]      |  1016   |   5    |
| p            |  1020   |  1012  |

``` C
	--p;
```

| Nom variable | Adresse | Valeur |
| ------------ | :-----: | :----: |
| a            |  1000   |   10   |
| b            |  1004   |   5    |
| tab\[0]      |  1008   |   10   |
| tab\[1]      |  1012   |   10   |
| tab\[2]      |  1016   |   5    |
| p            |  1020   |  1008  |

``` C	  
	*p = *(p+2);
```

| Nom variable | Adresse | Valeur |
| ------------ | :-----: | :----: |
| a            |  1000   |   10   |
| b            |  1004   |   5    |
| tab\[0]      |  1008   |   5    |
| tab\[1]      |  1012   |   10   |
| tab\[2]      |  1016   |   5    |
| p            |  1020   |  1008  |

# Exercice #85

Écrire un programme pour entrer et afficher les éléments d'un tableau à l'aide d'un pointeur.

``` C
#include <stdio.h>  
  
int main(){  
  
    int Taille;  
    int T[10];  
    int *P;  
  
    P = T;  
  
    // Saisie, contrôle et lecture de la Taille choisis par l'utilisateur  
    recTaille:  
    printf("Veuillez choisir la Taille de votre tableau : \n");  
    if( scanf("%d", &Taille) != 1 || Taille <= 0){  
  
        printf("Erreur ! Veuillez choisir un nombre.\n");  
        while(getchar() != '\n');// Vide le buffer d'entrée  
        goto recTaille;// Recommence la boucle si la  saisie est invalide  
    }  
  
    // Saisie, contrôle et lecture du tableau T  
    printf("Veuillez saisir les elements du tableau : \n");  
  
    recT:  
    // Ici pour la taille du tableau on dit que P qui pointe vers l'adresse de T[0] (&T[0]) doit être strictement inférieur à T qui est un pointeur qui pointe vers T[0] + Taille (ex : Taille = 6) Donc T[0+6] = T[6]  
    for(P = T; P < T + Taille ; P++){  
  
        // Ici on fait P = 0 pointe vers l'adresse de T[0], T = T[0], 0 - 0 = 0, ensuite P++ =  P = P + 1 = P = 0 + 1, P pointe vers l'adresse de T[0+1] (&T[0+1]), T = T[0], 1 - 0 = 1 et ainsi de suite  
        printf("T[%d] = ", P - T);  
        if( scanf("%d", P) != 1 ){  
  
            printf("Erreur ! Veuillez choisir un nombre.\n");  
            while(getchar() != '\n');// Vide le buffer d'entrée  
            goto recT;// Recommence la boucle si la  saisie est invalide  
        }  
  
    }  
  
  
    // Affichage des éléments du tableau T  
    printf("Les elements du tableau sont : \n");  
  
    for(P = T; P < T + Taille; P++){  
  
        printf("T[%d] = %d\n", P - T, *P);  
  
    }  
  
  
  
  
  
  
    return 0;  
}
```


# Exercice #86

Écrire un programme qui lit un entier X et les éléments d'un tableau T du type entier au clavier et élimine toutes les occurrences de X dans T en tassant les éléments restants. Le programme utilisera les pointeurs P1 et P2 parcourir le tableau.

``` C
#include <stdio.h>  
  
int main(){  
  
    int Taille, X;  
    int T[100];  
  
    int *P1;  
    int *P2;  
  
    P1 = T;  
  
  
    // Saisie, contrôle et lecture de la taille du tableau choisis par l'utilisateur  
    recTaille:  
    printf("Veuillez choisir la taille de votre tableau : \n");  
    if(scanf("%d", &Taille) != 1 || Taille <= 0){  
  
        printf("Erreur ! Veuillez choisir un nombre.\n");  
        while(getchar() != '\n');// Vide le buffer d'entrée  
        goto recTaille;// Recommence la boucle si la  saisie est invalide  
    }  
  
  
    // Saisie, contrôle et lecture des éléments du tableau  
    printf("Veuillez saisir les elements du tableau : \n");  
  
    for(P1 = T; P1 < T + Taille; P1++){  
  
        recT:  
        printf("T[%d] = ", P1 - T);  
        if(scanf("%d", P1) != 1){  
  
            printf("Erreur ! Veuillez choisir un nombre.\n");  
            while(getchar() != '\n');// Vide le buffer d'entrée  
            goto recT;// Recommence la boucle si la  saisie est invalide  
        }  
    }  
  
  
    // Saisie, contrôle et lecture de la valeur choisis par l'utilisateur pour être supprimé du tableau  
    recX:  
    printf("Veuillez choisir la valeur que vous souhaitez supprime : \n");  
    if(scanf("%d", &X) != 1){  
  
        printf("Erreur ! Veuillez choisir un nombre.\n");  
        while(getchar() != '\n');// Vide le buffer d'entrée  
        goto recX;// Recommence la boucle si la  saisie est invalide  
    }  
  
    P2 = T;  
  
    for(P1 = T; P1 < T + Taille; P1++){  
  
        printf("P1 = &T[%d] = %d\n", P1 - T, *P1);  
        printf("P2 = &T[%d] = %d\n", P2 - T, *P2);  
        printf("X = %d\n", X);  
  
        *P2 = *P1;  
        printf("*P2 = %d\n", *P1);  
  
  
        if(*P2 != X){  
  
            printf("%d != %d\n", *P2, X);  
  
            P2++;  
            printf("P2++ = P2 = &T[%d]\n\n", P2 - T);  
        }  
        else  
            printf("\n");  
  
    }  
  
  
    printf("Apres la supression de ou des elements qui contiennent %d, voici le tableau : \n", X);  
    Taille = P2 - T;  
  
    for(P1 = T; P1 < T + Taille; P1++)  
        printf("T[%d] = %d\n", P1 - T, *P1);  
  
  
  
  
  
  
  
  
  
    return 0;  
}
```


# Exercice #87

Écrire un programme qui range les éléments d'un tableau T du type entier dans l'ordre inverse. Le programme utilisera des P1 et P2 et une variable numérique TMP pour l'échange des éléments.

``` C
#include <stdio.h>  
  
int main(){  
  
    int T[100];  
    int Tmp, N;  
    int *P1, *P2;  
  
  
    // Saisie, contrôle et lecture de la taille du tableau choisis par l'utilisateur  
    recTaille:  
    printf("Veuillez choisir la taille du tableau : \n");  
    if(scanf("%d", &N) != 1 || N <= 1 ){  
  
        printf("Erreur ! Veuillez choisir un nombre superieur a 1.\n");  
        while(getchar() != '\n');// Vide le buffer d'entrée  
        goto recTaille;// Recommence la boucle si la  saisie est invalide  
    }  
  
    //P1 = T;  
  
    // Saisie, contrôle et lecture du remplissage du tableau    printf("Veuillez saisir les elements du tableau : \n");  
  
    for(P1 = T; P1 < T + N; P1++){  
  
        recT:  
        printf("T[%d] = ", P1 - T);  
        if(scanf("%d", P1) != 1 ){  
  
            printf("Erreur ! Veuillez choisir un nombre.\n");  
            while(getchar() != '\n');// Vide le buffer d'entrée  
            goto recT;// Recommence la boucle si la  saisie est invalide  
        }  
    }  
  
  
  
    // Rangement des éléments dans l'ordre inverse  
    P1 = T;  
    P2 = T + (N - 1);  
  
    while(P1 < P2){  
  
        Tmp = *P1;  
        *P1 = *P2;  
        *P2 = Tmp;  
  
        P1++;  
        P2--;  
    }  
  
  
    // Affichage du tableau inverse  
    printf("Les elements ranges dans l'ordre inverse : \n");  
  
    for(P1 = T; P1 < T + N; P1++)  
        printf("T[%d] = %d\n", P1 - T, *P1);  
  
  
  
  
  
  
  
  
    return 0;  
}
```


# Exercice #88

Écrire un programme qui lit deux tableaux d'entiers A et B et leurs dimension N et M au clavier et qui ajoute les éléments de B à la fin de A. Utiliser deux pointeurs PA et PB pour transférer et afficher le tableau résultant A.

``` C
#include <stdio.h>  
  
int main() {  
  
    int A[100], B[100];  
    int N, M;  
    int *PA, *PB;  
  
    // Saisie, contrôle et lecture de la taille du tableau A choisis par l'utilisateur  
    recN:  
    printf("Veuillez choisir la taille du tableau A : \n");  
    if(scanf("%d", &N) != 1 || N <= 1){  
  
        printf("Erreur ! Veuillez choisir un nombre.\n");  
        while(getchar() != '\n');// Vide le buffer d'entrée  
        goto recN;// Recommence la boucle si la  saisie est invalide  
    }  
  
  
    // Saisie, contrôle et lecture du remplissage de A  
    recA:  
    printf("Veuillez remplir les elements du tableau A : \n");  
  
    for(PA = A; PA < A + N; PA++){  
  
        printf("A[%d] = ", PA - A);  
        if(scanf("%d", PA) != 1 ){  
  
            printf("Erreur ! Veuillez choisir un nombre.\n");  
            while(getchar() != '\n');// Vide le buffer d'entrée  
            goto recA;// Recommence la boucle si la  saisie est invalide  
        }  
    }  
  
  
  
    // Saisie, contrôle et lecture de la taille du tableau B choisis par l'utilisateur  
    recM:  
    printf("\nVeuillez choisir la taille du tableau B : \n");  
    if(scanf("%d", &M) != 1 || N <= 1){  
  
        printf("Erreur ! Veuillez choisir un nombre.\n");  
        while(getchar() != '\n');// Vide le buffer d'entrée  
        goto recM;// Recommence la boucle si la  saisie est invalide  
    }  
  
  
    // Saisie, contrôle et lecture du remplissage de B  
    recB:  
    printf("Veuillez remplir les elements du tableau B : \n");  
  
    for(PB = B; PB < B + M; PB++){  
  
        printf("B[%d] = ", PB - B);  
        if(scanf("%d", PB) != 1 ){  
  
            printf("Erreur ! Veuillez choisir un nombre.\n");  
            while(getchar() != '\n');// Vide le buffer d'entrée  
            goto recB;// Recommence la boucle si la  saisie est invalide  
        }  
    }  
  
  
  
    // Ajout des éléments B à la fin de A  
    for(PA = A + N, PB = B; PA < A + (N + M); PA++, PB++){  
  
        *PA = *PB;  
  
    }  
  
  
    // Affichage du tableau qui contient le tableau A et B  
    printf("Apres l'ajout du tableau B a la fin du tableau A voici le nouveau tableau : \n");  
  
    for(PA = A; PA <  A + (N + M); PA++)  
        printf("A[%d] = %d\n", PA - A, *PA);  
  
  
    return 0;  
}
```


# Exercice #89

Écrire un programme en utilisant les pointeurs qui permet de remplir un tableau d'entier T et de dimension N. Ensuite, le programme trie et affiche le tableau par ordre croissant.

``` C
#include <stdio.h>  
  
int main(){  
  
    int T[100];  
    int N, Tmp;  
    int *P1, *P2;  
  
  
    // Saisie, contrôle et lecture de la taille du tableau T choisis par l'utilisateur  
    recN:  
    printf("Veuillez saisir la taille du tableau : \n");  
    if(scanf("%d", &N) != 1 || N <= 1){  
  
        printf("Erreur ! Veuillez choisir un nombre.\n");  
        while(getchar() != '\n');// Vide le buffer d'entrée  
        goto recN;// Recommence la boucle si la  saisie est invalide  
    }  
  
    // Saisie, contrôle et lecture du remplissage de T  
    recT:  
    printf("Veuillez saisir les elements du tableau : \n");  
  
    for(P1 = T; P1 < T + N; P1++){  
  
        printf("T[%d] = ", P1 - T);  
        if(scanf("%d", P1) != 1 ){  
  
            printf("Erreur ! Veuillez choisir un nombre.\n");  
            while(getchar() != '\n');// Vide le buffer d'entrée  
            goto recT;// Recommence la boucle si la  saisie est invalide  
        }  
    }  
  
  
  
    // Trie du tableau dans l'ordre croissant  
    for(P1 = T; P1 < T + N; P1++){  
  
        for(P2 = P1 + 1; P2 < T + N; P2++)  
  
            if(*P1 > *P2){  
  
                Tmp = *P1;  
                *P1 = *P2;  
                *P2 = Tmp;  
  
            }  
  
  
    }  
  
  
  
    // Affichage du tableau dans l'ordre croissant  
    printf("Les elements du tableau trier dans l'ordre croissant sont : \n");  
  
    for(P1 = T; P1 < T + N; P1++){  
  
        printf("T[%d] = %d\n", P1 - T, *P1);  
  
    }  
  
  
  
  
  
  
    return 0;  
}
```


# Exercice #90

Écrire un programme en utilisant les pointeurs qui permet de remplir un tableau d'entier T et de dimension N. Ensuite, le programme trie et affiche le tableau par ordre décroissant.

``` C
#include <stdio.h>  
  
int main(){  
  
    int T[100];  
    int N, Tmp;  
    int *P1, *P2;  
  
  
    // Saisie, contrôle et lecture de la taille du tableau T choisis par l'utilisateur  
    recN:  
    printf("Veuillez saisir la taille du tableau : \n");  
    if(scanf("%d", &N) != 1 || N <= 1){  
  
        printf("Erreur ! Veuillez choisir un nombre.\n");  
        while(getchar() != '\n');// Vide le buffer d'entrée  
        goto recN;// Recommence la boucle si la  saisie est invalide  
    }  
  
    // Saisie, contrôle et lecture du remplissage de T  
    recT:  
    printf("Veuillez saisir les elements du tableau : \n");  
  
    for(P1 = T; P1 < T + N; P1++){  
  
        printf("T[%d] = ", P1 - T);  
        if(scanf("%d", P1) != 1 ){  
  
            printf("Erreur ! Veuillez choisir un nombre.\n");  
            while(getchar() != '\n');// Vide le buffer d'entrée  
            goto recT;// Recommence la boucle si la  saisie est invalide  
        }  
    }  
  
  
  
    // Trie du tableau dans l'ordre décroissant  
    for(P1 = T; P1 < T + N; P1++){  
  
        for(P2 = P1 + 1; P2 < T + N; P2++)  
  
            if(*P1 < *P2){  
  
                Tmp = *P1;  
                *P1 = *P2;  
                *P2 = Tmp;  
  
            }  
  
  
    }  
  
  
  
    // Affichage du tableau dans l'ordre décroissant  
    printf("Les elements du tableau trier dans l'ordre décroissant sont : \n");  
  
    for(P1 = T; P1 < T + N; P1++){  
  
        printf("T[%d] = %d\n", P1 - T, *P1);  
  
    }  
  
  
  
  
  
  
    return 0;  
}
```


