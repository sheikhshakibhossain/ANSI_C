#include <stdio.h>

int main(){

    int a,b,c,d,e;
    printf("Enter three numbers : ");
    scanf("%d %d %d", &a,&b,&c);
    printf("before, a = %d, b = %d, c = %d \n", a,b,c);

    //calculation
    d = c;
    e = b;
    b = a;
    c = e;
    a = d;
    printf("after, a = %d, b = %d, c = %d \n", a,b,c);


	return 0;
}
