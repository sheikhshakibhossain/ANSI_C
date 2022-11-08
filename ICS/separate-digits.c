#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,num,result;
    printf("enter 3 digit integer Number: ");
    scanf("%d", &num);

    // algorithm
    a=num%10;
    result=num/10;
    
    b=result%10;
    result=result/10;

    c=result%10;
    result=result/10; // now result == 0

    printf("digits are: %d, %d, %d", a,b,c);
    return 0;
}
