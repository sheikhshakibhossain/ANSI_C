#include <stdio.h>
#include <math.h>
int main()
{
        int x;
        float y,z;
        printf("Enter a integer number : ");
        scanf("%d", &x);
        printf("Enter two float number : ");
        scanf("%f %f", &y, &z);

        if(x==1)
            printf("%.1f \n", y+z);
        else if(x==2)
            printf("%.1f \n", y-z);
        else if(x==3)
            printf("%.1f \n", y*z);
        else if(x==4){
            //float temp = fmod(y,z);
            float temp = (int)y % (int)z;
            printf("%.1f \n", temp);
        }
        else
            printf("Invalid Option!");

        return 0;

}
