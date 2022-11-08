#include <stdio.h>

int main()
{       
        int x,y,z; // var. declaration
        printf("Enter value of three angles in degree [ 0 < value < 180 ] : "); //input
        scanf("%d %d %d", &x, &y, &z);
        
        //int triangle = (x+y+z); //memory optimized
        if(x == 0 || y == 0 || z == 0) //if any angle is 0 then either it's just angle or straight line
            printf("Triangle status: No \n");
        else if((x+y+z) == 180)
            printf("Triangle status: Yes \n");
        else
            printf("Triangle status: No \n");

        return 0;
}

