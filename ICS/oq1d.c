#include <stdio.h>

int main(){

    int a,b,c,num,result; //var dec.
    printf("Enter the number : ");
    scanf("%d", &num); //input
    //claculation
    a = num % 10;
    result = num / 10;

    b = result % 10;
    result = result / 10;

    c = result % 10;
    printf("The digits are : %d, %d, %d \n", c,b,a);


	return 0;
}
