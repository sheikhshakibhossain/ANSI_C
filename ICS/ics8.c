#include <stdio.h>

int main()
{   
    int i,n;
    printf("enter value of n : ");
    scanf("%d", &n);
    
    printf("\n\nprintf %d times \n",n);
    for(i=1; i<=n; i=i+1)
    printf("%d. This is ICS lab \n", i);
    
    printf("\n\nprint 1 - %d \n",n);
    for(i=1; i<=n; i=i+1)
    printf("%d \n", i);
    
    printf("\n\nprint %d - 1 \n",n);
    for(i=n; i>=1; i=i-1)
    printf("%d \n", i);
    
    printf("\n\n1 - %d odd \n",n);
    for(i=1; i<=n; i=i+2)
    printf("%d is odd \n", i);
    
    printf("\n\n1 - %d even \n",n);
    for(i=2; i<=n; i=i+2)
    printf("%d is even \n", i);
    
    printf("\n\n1 - %d even odd \n",n);
    for(i=1; i<=n; i=i+1)
    {
        if(i%2==0)
            printf("%d is even \n", i);
        else
            printf("%d is odd \n", i);
    }
    
    printf("\n\nsum of series til %d \n",n);
    int counter, sum=0;
    for(counter=1; counter<=n; counter=counter+1)
    {
        sum = sum + counter;
    }
    printf("Sum from 1 to %d = %d \n", n, sum); 
    
    return 0;
}

