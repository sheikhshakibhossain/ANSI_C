#include <stdio.h>

int main()
{
    int i,x,y;

    for(i=1; i<=10; i++)
    {
        printf("\n\n    *** Runtime : %d *** \n", i);
        printf("enter X = ");
        scanf("%d", &x);
        printf("enter Y = ");
        scanf("%d", &y);

        printf("\nAdd = %d \n", x+y);
        printf("Sub = %d \n", x-y);
    }

    return 0;
}
