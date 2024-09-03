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
    printf("Valeur de *(tab+1) = tab[1] = %d\n\n", tab[1]);


    p = tab + 2;
    printf("Instruction : p = tab + 2\n");
    printf("p = tab + 2 <=> p = &tab[0] + &2\n");
    printf("            <=> p = &tab[0+2]\n");
    printf("            <=> p = &tab[2] = 1016\n");
    printf("Valeur de p = tab + 2 = &tab[2] = 1016 = %p\n\n", &tab[2]);


    *p = *(p-1);
    printf("Instruction : *p = *(p-1)\n");
    printf("*p = *(p-1) <=> *p = *(&tab[2] - 1 * sizeof(int)\n");
    printf("            <=> *p = *(1016 - 1 * sizeof(int) )\n");
    printf("            <=> *p = *(1016 - 1 * 4)\n");
    printf("            <=> *p = *(1012)\n");
    printf("            <=> *p = *(&tab[1])\n");
    printf("            <=> *p = 5\n");
    printf("Valeur de *p = *(p-1) = %d\n\n", tab[1]);

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
