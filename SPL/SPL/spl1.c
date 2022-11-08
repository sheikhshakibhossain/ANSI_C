#include <stdio.h>

int main() {

    /*int i,r1,r2;
    scanf("%d %d", &r1, &r2);
    printf("Odd numbers: ");
    for (i=r1; i<=r2; i++) {
        if ( i%2 != 0 && (i == r2 || i == r2-1) ) {
            printf("%d", i); // last one no comma
        }
        else if(i%2 != 0) {
            printf("%d, ", i);
        }
        
    } */

    // Problem 4
    char cat;
    int exprience,family;
    float income;
    
    scanf("%c %d %d %f", &cat, &exprience, &family, &income);
    if ( (exprience >= 12 && family > 5) || income < 1000.50 ) {
        printf("Will Receive the Bonus");
    }
    else if ( (cat == 'Y' || cat == 'Z') && family > 8 && income < 1100.78 ) {
        printf("Will Receive the Bonus");
    }
    else if(cat == 'X' && family > 5) {
        printf("Will Receive the Bonus");
    }
    else {
        printf("Will Not Receive the Bonus");
    }


    return 0;
}