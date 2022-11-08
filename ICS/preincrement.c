#include <stdio.h>

int main()
{       
        int i,x,a;
        x = 1;
        a = x++;
        printf("a = %d, x= %d \n",a,x);
        
        for(i=1; i<=10; i++ && ++i)
            printf("i = %d \n", i);
        
        printf("after loop i = %d \n", i);
            
        return 0;
}

