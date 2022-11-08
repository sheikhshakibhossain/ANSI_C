#include <stdio.h>
int numOfDigit(int num);
int pow1(int base, int power);


// main function
int main() {

    int n;
    scanf("%d", &n);
    printf("Armstrong number are from 0 to %d is : \n", n);
    for(int i=1; i<=n; i++){

        int num = i;
        int check = num;
        int digit,sum=0;
        int pow = numOfDigit(num);
    
        while(num != 0) {
            digit = num % 10;
            num = num / 10;
            sum = sum + pow1(digit, pow);
        }
        if(sum == check) {
            printf("%d ", check);
        }

    } //for loop end

    return 0;
}

//gets the number of digits
int numOfDigit(int num) {
    
    int counter=0;
    while(num != 0) {
        num = num / 10;
        counter++;
    }
    return counter;
}

//power function
int pow1(int base, int power) {

    int i,product=1;
    for(i=1; i<=power; i++){
        product = product*base;
    }
    return product;
}
