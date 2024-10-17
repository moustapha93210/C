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
