
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
  
    printf("Veuillez entrer la valeur de a : \n");  
    scanf("%f", &a);  
  
    printf("Veuillez entrer la valeur de b : \n");  
    scanf("%f",q);  
  
  
    printf("A + B = %.2f\n", *p + *q);  
    printf("A - B = %.2f\n", *p - *q);  
    printf("A * B = %.2f\n", *p * *q);  
  
    if(*q != 0)  
        printf("A / B = %.2f\n", *p / *q);  
    else  
        printf("La division par 0 est impossible.\n");  


    return 0;  
}
```


# Exercice #81

À l'aide de pointeurs, écrivez un programme qui vérifie si un nombre est pair ou impair.

``` C
#include <stdio.h>  
  
int main() {  
  
    int n;  
    int *p = &n;  
      
      
    printf("Veuillez saisir un nombre : \n");  
    scanf("%d", &n);  
  
    if(*p % 2 == 0)  
        printf("%d est un nombre pair\n", *p);  
    else  
        printf("%d est un nombre impair\n", *p);  
  
  
  
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
```


# Exercice #83

Écrivez un programme qui utilise une fonction qui échange le contenu de deux entiers s'ils ont le même signe, sinon il place la somme des deux dans le premier entier et leur produit dans le second (Pensez à utiliser le passage par référence)

``` C
#include <stdio.h>  
  
  
// Passsage par référence (par adresse)  
void echange(int *A, int *B){  
  
    int C, D;  
  
    // Si *A et *B ont le même signe  
    if(*A * *B > 0 ){  
  
        C = *A;  
        *A = *B;  
        *B = C;  
  
    }  
    // Si *A et *B ont un signe différent  
    else{  
  
        C = *A + *B;  
        D = *A * *B;  
        *A = C;  
        *B = D;  
    }  
}  
  
/* Si on utilise le passage par valeur les modifications ne seront pas effectué car A et B sont vide  
void echange(int A, int B){  
  
    int C, D;  
    // Si *A et *B ont le même signe    if(A * B > 0 ){  
        C = A;        A = B;        B = C;  
    }        // Si *A et *B ont un signe différent    else{  
        C = A + B;        D = A * B;        A = C;        B = D;    }}  
*/  
  
  
  
int main(){  
  
    int A, B;  
  
  
    // Saisie et lecture de A  
    printf("Veuillez entrer la valeur de A : \n");  
    scanf("%d", &A);  
  
  
    // Saisie et lecture de B  
    printf("Veuillez entrer la valeur de B : \n");  
    scanf("%d", &B);  
  
    //Apelle de la fonction qui permet le changement de A et B (passage par référence)  
    echange(&A, &B);  
  
  
    printf("La nouvelle valeur de A est : %d\n", A);  
    printf("La nouvelle valeur de B est : %d\n", B);  
  
  
  
  
    return 0;  
}
```


# Exercice #84

L'objectif de cet exercice est de représenter en mémoire les données déclarées dans un programme, ainsi que leurs différentes valeurs, à un moment d'exécution donné. Pour ce faire, vous représenterez l'occupation des données en mémoire dans un tableau à 3 colonnes.



``` C
#include <stdio.h>  
  
int main(){  
  
    int a = 10;  
  
    int b = 5;  
  
    int tab[3] = {1, 2, 3};  
  
    int *p;


	tab[0] = a;  
	  
	*(tab+1) = b;  
	  
	p = tab + 2;  
	  
	  
	*p = *(p-1);  
	  
	--p;  
	  
	*p = *(p-1);  
	  
	--p;  
	  
	*p = *(p+2);
  
  
  
    return 0;  
}
```

| Nom variable | Adresse | Valeur |
| ------------ | :-----: | :----: |
| a            |  1000   |   10   |
| b            |  1004   |   5    |
| tab\[0]      |  1008   |   5    |
| tab\[1]      |  1012   |   10   |
| tab\[2]      |  1016   |   5    |
| p            |  1020   |  1008  |

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
  
    int T[100];  
    int N;  
    int *P;  
  
    P = T;  
  
    // Saisie et lecture de la N choisis par l'utilisateur  
    printf("Veuillez choisir la N de votre tableau : \n");  
    scanf("%d", &N);  
  
  
    // Saisie, contrôle et lecture du tableau T  
    printf("Veuillez saisir les elements du tableau : \n");  
  
    // Ici pour la taille du tableau on dit que P qui pointe vers l'adresse de T[0] (&T[0]) doit être strictement inférieur à T qui est un pointeur qui pointe vers T[0] + N (ex : N = 6) Donc T[0+6] = T[6]  
    for(P = T; P < T + N ; P++){  
		// Ici on a P = 1 et T et un tableau qui pointe sur sa première case qui &T[1], donc 1 - 1 + 1 = 1 et ainsi de suite
        printf("T[%d] = ", P - T+1);  
        scanf("%d", P);  
  
    }  
  
  
    // Affichage des éléments du tableau T  
    printf("Les elements du tableau sont : \n");  
  
    for(P = T; P < T + N; P++){  
  
        printf("%d ", *P);  
  
    }  
  
  
  
  
  
  
    return 0;  
}
```


# Exercice #86

Écrire un programme qui lit un entier X et les éléments d'un tableau T du type entier au clavier et élimine toutes les occurrences de X dans T en tassant les éléments restants. Le programme utilisera les pointeurs P1 et P2 parcourir le tableau.

``` C
#include <stdio.h>  
  
int main(){  
  
    int T[100];  
    int N, X;  
    int *P1, *P2;  
  
    P1 = T;  
  
    // Saisie et lecture de la taille du tableau choisis par l'utilisateur  
    printf("Veuillez saisir la taille du tableau : \n");  
    scanf("%d", &N);  
  
  
    // Saisie et lecture des éléments du tableau  
    printf("Veullez saisir les elements du tableau : \n");  
  
    for(P1 = T; P1 < T + N; P1++){  
  
        printf("T[%d] = ", P1 - T);  
        scanf("%d", P1);  
    }  
  
  
    // Saisie et lecture de la valeur choisis par l'utilisateur pour être supprimé du tableau  
    printf("Veuillez saisir l'element X a eliminer du tableau : \n");  
    scanf("%d", &X);  
  
    P2 = T;  
  
    for(P1 = T; P1 < T + N; P1++){  
  
        *P2 = *P1;  
  
        if(*P2 != X)  
            P2++;  
  
    }  
  
    N = P2 - T;  
  
    printf("Les elements apres l'elimination de %d sont : \n", X);  
  
    for(P1 = T; P1 < T + N; P1++)  
        printf("%d ", *P1);  
  
  
  
    return 0;  
}
```


# Exercice #87

Écrire un programme qui range les éléments d'un tableau T du type entier dans l'ordre inverse. Le programme utilisera des P1 et P2 et une variable numérique TMP pour l'échange des éléments.

``` C
#include <stdio.h>  
  
int main(){  
  
    int T[100];  
    int N, Tmp;  
    int *P1, *P2;  
  
  
    // Saisie et lecture de la taille du tableau choisis par l'utilisateur  
    printf("Veuillez choisir la taille du tableau : \n");  
    scanf("%d", &N);  
  
  
  
    // Saisie et lecture du remplissage du tableau  
    printf("Veuillez saisir les elements du tableau : \n");  
  
    for(P1 = T; P1 < T + N; P1++){  
  
        printf("T[%d] = ", P1 - T + 1);  
        scanf("%d", P1);  
    }  
  
  
  
    // Rangement des éléments dans l'ordre inverse  
    for(P1 = T, P2 = T + (N - 1); P1 < P2; P1++, P2--){  
  
        Tmp = *P1;  
        *P1 = *P2;  
        *P2 = Tmp;  
  
    }  
  
  
    // Affichage du tableau inverse  
    printf("Les elements du tableau dans l'ordre inverse sont : \n");  
  
    for(P1 = T; P1 < T + N; P1++)  
        printf("%d\n", *P1);  
      
  
  
  
  
  
  
  
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
  
    // Saisie t lecture de la taille du tableau A choisis par l'utilisateur  
    printf("Veuillez saisir la taille du tableau A : \n");  
    scanf("%d", &N);  
  
  
    // Saisie et lecture du remplissage de A  
    printf("Veuillez saisir les elements du tableau A : \n");  
  
    for(PA = A; PA < A + N; PA++){  
  
        printf("A[%d] = ", PA - A + 1);  
        scanf("%d", PA);  
    }  
  
  
    // Saisie et lecture de la taille du tableau B choisis par l'utilisateur  
    printf("\nVeuillez saisir la taille du tableau B : \n");  
    scanf("%d", &M);  
  
  
    // Saisie et lecture du remplissage de B  
    printf("Veuillez saisir les elements du tableau B : \n");  
  
    for(PB = B; PB < B + M; PB++){  
  
        printf("B[%d] = ", PB - B + 1);  
        scanf("%d", PB);  
    }  
  
  
  
    // Ajout des éléments B à la fin de A  
    for(PA = A + N, PB = B; PB < B + M; PA++, PB++)  
        *PA = *PB;  
  
    N = N + M;  
  
  
    // Affichage du tableau qui contient le tableau A et B  
    printf("Apres l'ajout du tableau B a la fin du tableau A voici le nouveau tableau : \n");  
  
    for(PA = A; PA <  A + N; PA++)  
        printf("%d ", *PA);  
  
  
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
  
  
    // Saisie et lecture de la taille du tableau A choisis par l'utilisateur  
    printf("Veuillez saisir la taille du tableau T: \n");  
    scanf("%d", &N);  
  
    // Saisie et lecture du remplissage de A  
  
    printf("Veuillez saisir les elements du tableau T : \n");  
  
    for(P1 = T; P1 < T + N; P1++){  
  
        printf("T[%d] = ", P1 - T + 1);  
        scanf("%d", P1);  
  
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
    printf("Les elements du tableau par ordre croissant sont : \n");  
  
    for(P1 = T; P1 < T + N; P1++){  
  
        printf("%d ", *P1);  
  
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
  
  
    // Saisie et lecture de la taille du tableau T choisis par l'utilisateur    
printf("Veuillez saisir la taille du tableau T: \n");  
    scanf("%d", &N);  
  
    // Saisie et lecture du remplissage de T  
  
    printf("Veuillez saisir les elements du tableau T : \n");  
  
    for(P1 = T; P1 < T + N; P1++){  
  
        printf("T[%d] = ", P1 - T + 1);  
        scanf("%d", P1);  
  
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
printf("Les elements du tableau par ordre décroissant sont : \n");  
  
    for(P1 = T; P1 < T + N; P1++){  
  
        printf("%d ", *P1);  
  
    }  
  
  
  
  
  
  
    return 0;  
}
```


