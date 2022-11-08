#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x,hr,min,sec; // declare variables

    printf("Enter time in Seconds: ");
    scanf("%d", &x);

    // algorithm for HR:MIN:SEC Time format
    hr = x/3600;
    min = (x/60)-(hr*60);
    sec = x - ((min*60)+(hr*3600));

    printf("Time is %d Hours %d Minutes %d Seconds", hr,min,sec);

    return 0;
}
