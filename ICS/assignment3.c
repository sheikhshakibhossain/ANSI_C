#include <stdio.h>

int main()
{       
        int i,n;
        printf("Enter series ending value N : ");
        scanf("%d", &n);
        for(i=1; i<=n; i++)
        {
                // 1 for odd place and 0 for even place
                if(i==n && i%2==0) //ending value even and doesn't have comma after
                        printf("0");
                else if(i==n && i%2 !=0) //ending value odd and doesn't have comma after
                        printf("1");
                else if(i%2==0)
                        printf("0,");
                else
                        printf("1,");
        }

        return 0;
}

