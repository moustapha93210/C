
# Exercice #101

À l'aide de l'allocation dynamique de mémoire, écrire un programme pour saisir le prix de revient et le prix de vente d'un produit, puis le programme vérifie si vous avec un profit ou une perte.

``` C
#include <stdio.h>  
#include <stdlib.h>  
  
int main() {  
  
    float *pv = malloc(1 * sizeof(float) );  
    float *pr = malloc(1 * sizeof(float) );  
    float *benefice = malloc(1 * sizeof(float) );  
    float *perte = malloc(1 * sizeof(float) );  
  
    printf("Veuillez saisir le prix de revient : ");  
    scanf("%f", pr);  
  
    printf("Veuillez saisir le prix de vente : ");  
    scanf("%f", pv);  
  
    *benefice = *pv - *pr;  
  
    *perte = *pr - *pv;  
  
    if(*benefice > 0)  
        printf("Benefice = %.2f", *benefice);  
    else if(*benefice < 0)  
        printf("Perte = %.2f", *perte);  
    else  
        printf("Ni profit, ni perte.");  
  
  
  
  
    return 0;  
}
```

# Exercice #102

À l'aide de l'allocation dynamique de la mémoire, écrire un programme pour trouver la somme de tous les nombres impairs de 1 à n.

``` C

```

# Exercice #103

``` C

```

# Exercice #104

``` C

```

# Exercice #105

``` C

```