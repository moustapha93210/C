
# Exercice #91

Écrire un programme en C qui permet de saisir et afficher une chaîne de caractère.

``` C
#include <stdio.h>  
  
int main(){  
  
    char c[10];  
    int i;  
  
    /*  
     * Manière 1 ( Classique )    printf("Veuillez saisir une chaine : \n");  
    for(i = 0; i < 10; i++)        scanf(" %c", &c[i]);  
    for(i = 0; i < 10; i++)        scanf(" %c", &c[i]);
    */      
    
    
    /*
     * Méthode 2 ( ne prend pas en charge les espaces )
    printf("Veuillez saisir une chaine : \n");    scanf("%s", c);  
    printf("%s", c);
    */


    // Méthode 3
    printf("Veuillez saisir une chaine : \n");  
    gets(c);  
  
    puts(c);  
  
  
  
  
    return 0;  
}
```

# Exercice #92

Écrire un programme en C qui calcule la distance de Hamming entre deux mots entrés par l'utilisateur.
**NB** : La distance de Hamming entre deux mots de même longueur est le nombre d'endroits où les lettres sont différentes.
Par

``` C
#include <stdio.h>  
#include <string.h>  
  
int main(){  
  
    char mot1[100];  
    char mot2[100];  
    int n = 0;  
  
    // Saisie de mot1  
    puts("Veuillez saisir votre premier mots :");  
    gets(mot1);  
  
    // Saisie de mot2  
    puts("Veuillez saisir votre deuxieme mot :");  
    gets(mot2);  
  
    n = 0;  
  
    // Gestions des erreurs  
    if(strlen(mot1) != strlen(mot2) )  
        printf("Les deux mots n'ont pas la meme longueur\n");  
    else{  
  
        // Parcours du tableau pour savoir la distance de Hammin entre mot1 et mot2  
        for(int i = 0; i < strlen(mot1); i++){  
  
            if(mot1[i] != mot2[i])  
                n++;  
  
        }  
  
        printf("La distance de Hamming entre les deux mot est : %d\n", n);  
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
  
    char mot[20];  
  
    // Saisie du mot par l'utilisateur  
    puts("Veuillez entrer un mot :");  
    gets(mot);  
  
    int i, n;  
  
    n = 0;  
  
    for(i = 0; mot[i] != '\0' ; i++)  
        n++;  
  
  
    printf("La taille de la chaine est : %d\n", n);  
    printf("La taille de la chaine est : %d", strlen(mot) );  
  
  
  
  
    return 0;  
}
```

# Exercice #94

Écrire un programme qui détermine le caractère qui se répète le plus dans une chaîne.

``` C
#include <stdio.h>  
#include <string.h>  
  
int main(){  
  
    char T[20];  
    int Frq[20];  
    int max;  
    int i, j, compteur;  
  
    // Saisi et lecture de la chaine de caractère  
    puts("Veuillez saisir une chaine :");  
    gets(T);  
  
  
    // On attribue au tableau Frq -1 à toutes ses cases  
    for(i = 0; i < 20; i++)  
        Frq[i] = -1;  
  
  
  
    // Boucle pour connaitre quel caractère du tableau T à le plus de fréquence  
    for(i = 0; i < strlen(T); i++){  
  
        compteur = 1;  
  
        for(j = i + 1; j < strlen(T); j++){  
  
            if(T[i] == T[j]){  
  
                compteur++;  
                Frq[j] = 0;  
  
            }  
        }  
  
        if(Frq[i] != 0)  
            Frq[i] = compteur;  
    }  
  
  
  
    // Affichage du caractère qui s'affiche le plus  
    max = 0;  
  
    for(i = 0; i < strlen(T); i++){  
  
        if( Frq[i] > Frq[max] )  
            max = i;  
    }  
  
    printf("\nLe caractere qui se repete le plus est '%c' = %d", T[max], Frq[max]);  
  
  
  
  
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
    printf("Veuillez saisir la chaine : \n");  
    gets(M);  
  
    //for(i = strlen(M) - 1; i >= 0 ; i--)  
        //printf("%c ", M[i]);
        
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
```

# Exercice #97

Écrire un programme qui lit deux chaînes A et B sur le clavier et ajoute la chaîne B à la fin de A sans utiliser la fonction de bibliothèque strcat(). Utiliser deux pointeurs PA et PB pour effectuer l'opération.

``` C
#include <stdio.h>  
#include <string.h>  
  
int main() {  
  
    char A[100], B[100];  
    char *PA = A;  
  
    char *PB = B;  
  
    // Saisie et lecture de A  
    printf("Entrer la premiere chaine : ");  
    gets(A);  
  
  
  
    // Saisie et lecture de B  
    printf("Entrer la deuxieme chaine : ");  
    gets(B);  
  
  
    PA = PA + strlen(A);  
  
    while(*PB != '\0'){  
  
        *PA = *PB;  
        PA++;  
        PB++;  
  
    }  
  
    *PA = '\0';  
  
    printf("La chaine concatenee est : %s", A);  
  
  
  
    return 0;  
}
```

# Exercice #98

Écrire un programme contenant une fonction qui supprime les occurrences d'un caractère dans une chaîne.

``` C
#include <stdio.h>  
#include <string.h>  
  
char * suppression(char * C, char S){  
  
    int i, j;  
    int len = strlen(C);  
  
    // Suppression de l'occurence choisie par l'utilisateur  
    for(i = 0; i < len; i++){  
  
        if(C[i] == S){  
  
            // Décallage à gauche  
            for(j = i; j < len; j++)  
                C[j] = C[j+1];  
  
            i--;  
            len--;  
        }  
    }  
  
    return C;  
}  
  
  
int main() {  
  
    char C[100];  
    char S;  
  
  
    // Saisie, lecture et affectation de la taille de la C  
    printf("Veuillez saisir une C : ");  
    gets(C);  
  
  
    // Saisie, lecture et affectation de la taille de la C  
    printf("Veuillez choisir une S a supprimer : ");  
    scanf("%c", &S);  
  
    char * R = suppression(C, S);  
  
    printf("La chaine apres la suppression de '%c' : %s", S, C);  
  
  
    return 0;  
}
```

# Exercice #99

Dans le programme suivant, que mettriez-vous à la place de "**?**" pour afficher "**matique**".

``` C
#include <stdio.h>

int main(){

	char T[] = "Informatique";
	
	printf("%s", ?);
	
	
	return 0;
}
```

``` C
#include <stdio.h>    
  
int main(){  
  
    char T[] = "Informatique";  
  
    printf("%s", T + 5 );  
  
  
    return 0;  
}
```


Prédire le résultat du programme suivant, nous supposons qu'un caractère prend **1 octet** et le pointeur prend **4 octets**.

``` C
#include <stdio.h>

int main(){

	char *C1 = "Quiz";
	char C2[10] = "Quiz";
	
	printf("%d", sizeof(C1) );
	printf("%d", sizeof(C2) );
	
	
	return 0;
}
```

``` C
printf("%d", sizeof(C1) );
```
- Le pointeur `*C1` est un pointeur qui pointe vers la première case du tableau qui contient le mot "Quiz" donc le résultat de `sizeof(C1)` est de **4 octets**.
  
``` C
printf("%d", sizeof(C2) );
```
- `C2[10]` est un tableau de taille 10 et qui contient le mot "Quiz", l'ordinateur va réserver un espace mémoire de 10 octet pour le tableau `C2[10]`. Donc le résultat est **10 octets**.

**C2**

|  Q  |  U  |  I  |  Z  | \0  |     |     |     |     |     |
| :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: |
|  0  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |

# Exercice #100

Un crime a été commis dans un centre commercial et le détective chargé de l'enquête a récupéré un échantillon d'ADN sur le lieu du crime. Après analyse en laboratoire, il a été confirmé que cet cet ADN appartient au coupable. Le détective possède également des échantillons d'ADN de quatre suspects qui se trouvaient sur le lieu du crime, et il doit maintenant utiliser ces échantillons pour identifier le coupable.
Écrire un programme qui va aider le détective à trouver le coupable.

``` C
#include <stdio.h>  
#include <string.h>  
  
int main() {  
  
    char ADN_ali[100] = "CCTGGAGGGTGGCCCCACCGGCCGAGACAGCGAGCGTATGCAGGAAGCGGCAGGAATAAGGAAAAGCAGCADN";  
    char ADN_anas[100] = "CTCCTGATGCTCCTCGCTTGGTGGTTTGAGTGGACCTCCCAGGCCAGTGCCGGGCCCCTCACGAGGAGAGGADN";  
    char ADN_mehdi[100] = "AAGCTCGGGAGGTGGCCATAGCGGCAGGAAGGCGCACCCCCCCAGTACTCCGCGCGCCGGGACAGAATGCCADN";  
    char ADN_sara[100] = "CTGCAGGAACTTCTTCTGGAGTACTTCTCCTCCTGCAAATAAAACCTCACCCATGAATGCTCACGCAAG";  
  
    char ADN_coupable[] = "CATA";  
  
    if(strstr(ADN_ali, ADN_coupable) != '\0')  
        printf("Le coupable est Ali !");  
  
    if(strstr(ADN_anas, ADN_coupable) != '\0')  
        printf("Le coupable est Anas !");  
  
    if(strstr(ADN_mehdi, ADN_coupable) != '\0')  
        printf("Le coupable est Mehdi !");  
  
    if(strstr(ADN_sara, ADN_coupable) != '\0')  
        printf("Le coupable est Sara !");  
  
  
    return 0;  
}
```
