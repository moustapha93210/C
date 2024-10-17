
# Exercice #91

Écrire un programme en C qui permet de saisir et afficher une chaîne de caractère.

``` C
#include <stdio.h>  
  
int main(){  
  
    char c[10];  
  
  
    printf("Veuillez entrer un mot : \n");  
    gets(c);  
  
    puts(c);  
  
  
  
  
  
    return 0;  
}
```

# Exercice #92

Écrire un programme en C qui calcule la distance de Hamming entre deux mots entrés par l'utilisateur.
**NB** : La distance de Hamming entre deux mots de même longueur est le nombre d'endroits où les lettres sont différentes.
Par exemple : JAPON - SAVON

``` C
#include <stdio.h>  
#include <string.h>  
  
int main(){  
  
    char M1[100];  
    char M2[100];  
    int i, j, n;  
  
    // Saisie de M1  
    printf("Veuillez saisir votre premier mots : \n");  
    gets(M1);  
  
    // Saisie de M2  
    printf("Veuillez saisir votre deuxieme mot : \n");  
    gets(M2);  
  
    n = 0;  
  
    // Gestions des erreurs  
    if( strlen(M1) != strlen(M2) )  
        printf("Erreur ! Il faut que les 2 mots soient de la meme taille.\n");  
    else{  
  
        // Parcours du tableau pour savoir la distance de Hammin entre M1 et M2  
        for(i = 0; i < strlen(M1); i++){  
  
            if(M1[i] != M2[i])  
                n++;  
  
        }  
  
        printf("La distance de Hammin entre M1 et M2 est de : %d\n", n);  
    }  
  
  
  
  
    return 0;  
}
```

# Exercice #93

Écrire un programme C pour trouver la longueur d'une chaîne de caractères sans utiliser la fonction strlen()

``` C
#include <stdio.h>  
#include <string.h>  
  
  
  
int main(){  
  
    char C[100];  
    int i, n;  
  
  
    // Saisie du mot par l'utilisateur  
    puts("Veuillez entrer un mot :");  
    gets(C);  
  
    n = 0;  
  
    for(i = 0; C[i] != '\0' ; i++){  
  
            n++;  
  
        printf("i = %d\n", i);  
        printf("C[%d] = %c\n\n", i, C[i]);  
  
    }  
  
    printf("Taille : %d\n", n);  
    printf("Taille avec la fonction 'strlen()' : %d", strlen(C) );  
  
  
  
  
    return 0;  
}
```

# Exercice #94

Écrire un programme qui détermine le caractère qui se répète le plus dans une chaîne.

``` C
#include <stdio.h>  
#include <string.h>  
  
int main(){  
  
    char mot[100];  
    int Frq[100];  
    int max;  
    int i, j, cmptr;  
  
    // Saisi et lecture de la chaine de caractère  
    puts("Veuillez saisir une chaine de caractere :");  
    gets(mot);  
  
    int length = strlen(mot);  
  
    // On attribue au tableau Frq -1 à toutes ses cases  
    for(i = 0; i < length; i++){  
  
        Frq[i] = -1;  
  
        printf("Frq[%d] = -1\n", i);  
  
    }  
  
  
    // Boucle pour connaitre quel caractère du tableau mot à le plus de fréquence  
    for(i = 0; mot[i] != '\0'; i++){  
  
        cmptr = 1;  
  
        for(j = i + 1; j < mot[j] != '\0'; j++){  
  
            if(mot[i] == mot[j]){  
  
                cmptr++;  
                Frq[j] = 0;  
  
            }  
  
        }  
  
        if(Frq[i] != 0)  
            Frq[i] = cmptr;  
  
    }  
  
  
    // Affichage du tableau Frq  
    printf("\nFrq apres le tri\n");  
  
    for(i = 0; i < strlen(mot); i++)  
        printf("Frq[%d] = %d = %c\n", i, Frq[i], mot[i] );  
  
  
    // Affichage du caractère qui s'affiche le plus  
    max = 0;  
  
    for(i = 0; i < strlen(mot); i++){  
  
        if( Frq[i] > Frq[max] )  
            max = i;  
    }  
  
    printf("\nLe caractere qui se repete le plus est '%c'", mot[max]);  
  
  
  
  
    return 0;  
}
```

# Exercice #95

Écrire un programme qui affiche les caractères d'un chaîne dans l'ordre inverse.

``` C
#include <stdio.h>  
#include <string.h>  
  
int main(){  
  
    char M[20];  
    int i, j;  
  
  
    // Saisie et lecture du mot choisi par l'utilisateur  
    printf("Veuillez saisir une chaine : \n");  
    gets(M);  
  
    /*  
    // Affichage du mot inverse 1ère méthode
    for(i = strlen(M) - 1; i >= 0 ; i--)
    printf("%c ", M[i]);
    */  
  
    // Affichage du mot inverse 2ème méthode
    puts(strrev(M) );  
  
  
  
  
    return 0;  
}
```

# Exercice #96

Écrire un programme qui vérifie si une chaîne est un palindrome

``` C
#include <stdio.h>
#include <string.h>

int main() {

    char c[10];
    char c2[10];
    int i, tailleChaine, nbOccurrence;

	// Saisie et lecture du mot choisi par l'utilisateur
    printf("Veuillez entrer une chaine de caractere : ");
    gets(c);

	// Mets en minuscule toutes les lettres du tableau
    strlwr(c);

	// Compte le nombre de caractère présent dans le tableau de caractère saisie par l'utilisateur
    tailleChaine = strlen(c);

    //printf("\nTaille de la chaine = %d\n", tailleChaine);

    printf("%s\n", c);


	// Mets dans c2[10] le tableau inverse de c[10]
    for(i = 0; i < tailleChaine; i++){

        c2[(tailleChaine - 1) - i] = c[i];

    }

    printf("%s\n", c2);


	//Compte le nombre d'occurrence entre les 2 chaînes
    nbOccurrence = 0;

    for(i = 0; i < tailleChaine; i++){

        if(c[i] == c2[i]){

            nbOccurrence++;

            /*
            printf("c[%d] = %c\n", i, c[i]);
            printf("c2[%d] = %c\n", i, c2[i]);
            */
        }
        /*
        else {
            printf("c[%d] = %c\n", i, c[i]);
            printf("c2[%d] = %c\n", i, c2[i]);
	    }
	    */
	}

    //printf("\nNb Occurrence = %d\n", nbOccurrence);


	// Affiche si la chaîne est palindromique ou non
    if( nbOccurrence == (tailleChaine) )
        printf("La chaine est palindromique.\n");
    else
        printf("La chaine n'est pas palindromique.\n");



    return 0;
}
```

# Exercice #97

Écrire un programme qui lit deux chaînes A et B sur le clavier et ajoute la chaîne B à la fin de A sans utiliser la fonction de bibliothèque strcat(). Utiliser deux pointeurs PA et PB pour effectuer l'opération.

``` C
#include <stdio.h>  
#include <string.h>  
  
int main() {  
  
    char A[20];  
    char B[20];  
    int TailleA;  
    char *PA;  
    PA = A;  
  
    char *PB;  
    PB = B;  
  
    // Saisie et lecture de A  
    printf("Veuillez saisir une chaine A : ");  
    gets(A);  
  
    TailleA = strlen(A);  
  
    // Saisie et lecture de B  
    printf("Veuillez saisir une chaine B : ");  
    gets(B);  
  
  
  
    PA = PA + TailleA;  
  
  
    while(*PB != '\0'){  
  
        *PA = *PB;  
  
        PA++;  
        PB++;  
  
    }  
  
    *PA = '\0';  
  
    printf("%s", A);  
  
  
  
  
    return 0;  
}
```

# Exercice #98

Écrire un programme contenant une fonction qui supprime les occurrences d'un caractère dans une chaîne.

``` C

```

# Exercice #99

``` C

```

# Exercice #100

``` C

```
