#include <stdio.h>
#include "myHeader.h"
#include <unistd.h>
#include <string.h>


int main(){

    const deff = 21;
    printf("age1 = %d \n", deff);
    deff = 22;
    printf("age2 = %d \n", deff);

    char name[] = "Mr. Garbage";
    //gets(name);
    puts(name); // automaticallty adds new line in the end.
    sleep(2);
    printf("%s", name);

    // storing series in array --->   10 1 10 2 10 3 10 4 10 5
    int i, temp = 1 , series[10];
    for(i=0; i<=9; i++) {
        if(i%2==0) {
            series[i] = 10;
        }
        else {
            series[i] = temp;
            temp++;
        }
    }
    for(i=0; i<=9; i++) {
        printf("%d ", series[i]);
    }

    for(int i=1; i<=5; i++) {

        for(int j=1; j<=6-i; j++) {
            printf("*");
        }
        printf("\n");
    }


    welcome();
    for(int i=1; i<=5; i++) { //nested for loop
        printf("%d \n", i);
        for(int j=1; j<=3; j++) {
            printf("hello world \n");
        }
    }


    //prime-notPrime
    int num, flag =1;
    scanf("%d", &num);
    for(int i=2; i < num/2; i++) {
        if(num%i==0){
            flag = 0;
            break;
        }
    }
    if(flag == 1) {
        printf("Prime \n");
    }
    else {
        printf("Not Prime \n");
    }

    int name[7] = {0,1,2,3,4,5,6};
    printf(" %d ", name[-1]);
    int c = -5;
    int x = c > 0 ? c : -c; //ternary op.
    printf("%d \n", c++);
    int x = 143 % 2;
    printf("%d \n", x);
    int a = 10, b = 20, c = 30;

    // nested switch | finding out max value
    switch(a>b){
        case 1:
            switch(a>c)
            {
                case 1:
                    printf("max = %d",a);
                    break;
                case 0:
                    printf("max = %d",c);
                    break;
            }

        case 0:
            switch(b>c)
            {
                case 1:
                    printf("max = %d",b);
                    break;
                case 0:
                    printf("max = %d",c);
                    break;
            }

    }


    return 0;

}
