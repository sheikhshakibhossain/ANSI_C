#include <stdio.h>
/*
multi
line
comment
*/
int main(){

    int a,b,c,d,e,f,num,result;
    printf("enter 6 digit integer number: ");
    scanf("%d", &num);

    //calculation
    a = num % 10;
    result = num / 10;
    b = result % 10;
    result = result / 10;
    c = result % 10;
    result = result / 10;
    d = result % 10;
    result = result / 10;
    e = result % 10;
    result = result / 10;
    f = result % 10;
    result = result / 10;
    printf(" a = %d\n b = %d\n c = %d\n d = %d\n e = %d\n f = %d\n  \n",a,b,c,d,e,f);

    // neg/positive
    int x,y;
    printf("Enter value of y: ");
    scanf("%d", &y);
    x = 2 + (5*y / 10) + (2*y*y + 3) - 50;
    printf("value of x is : %d \n", x);
    if (x > 0){
    	printf("x is positive \n");}
    else{
    	printf("x is negative \n");}


    return 0;

}

