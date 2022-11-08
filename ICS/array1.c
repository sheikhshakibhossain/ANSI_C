#include <stdio.h>

int main()
{       
        int mark[5] = {15, 11, 12, 7, 9}, id[5] = {221031, 221032, 221033, 221034, 221035}, io;
        printf("Enter ID : ");
        scanf("%d", &io);
        printf("\n\n 0%d \n\n", io);
        //if(io == id[0])
            //printf("Your mark is : 0%d \n", mark[0]); //doesn't work when id starts with zero | ex: 011221031
        switch(io)
        {
            case 221031:
                printf("You got %d marks in DM \n", mark[0]);
                break;
            case 221032:
                printf("You got %d marks in DM \n", mark[1]);
                break;
            case 221033:
                printf("You got %d marks in DM \n", mark[2]);
                break;
            case 221034:
                printf("You got %d marks in DM \n", mark[3]);
                break;
            case 221035:
                printf("You got %d marks in DM \n", mark[4]);
                break;
            default:
                printf("Invalid ID \n");
        }
        
        //int x;        
        //scanf("%d", &x);
        //printf("0%d \n", x); // 0%d, x; means it prints 0 before x value | ex: x=31 --> output= 031
                
        return 0;
}

