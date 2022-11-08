#include<stdio.h>
int fac(int n); //proto

int main() {
    int x, num = 3;
    x = fac(num); //call
    printf("%d! = %d \n", num, x);

    return 0;
}

int fac(int n) { //def
    // n! = n * (n-1)! | basis = 1
    if(n==1) {
        return 1;
    }
    else {
        return n * fac(n-1); //recursive call
    }
}