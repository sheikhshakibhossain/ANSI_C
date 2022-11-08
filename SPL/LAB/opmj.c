#include <stdio.h>
int primeChecker(int num);
int defectiveChecker(int num);
int checkFunc1(int num);
int checkFun2(int num);
int checkFun3(int num);
int checkFun4(int num);


int main() {

    int r1, r2;
    //scanf("%d %d", &r1, &r2);

    //printf("%d\n", checkFunc1(3000)); // ok
    //printf("%d\n", checkFun2(5000)); // ok
    printf("%d\n", checkFun3(10)); // ok
    //printf("%d\n", checkFun4(1234)); // ok

    for (int i=r1; i<=r2; i++)
    {
        int c1 = checkFunc1(i);
        int c2 = checkFun2(i);
        int c3 = checkFun3(i);
        int c4 = checkFun4(i);

        if ( c1==1 && c2==1 && c3==1 && c4==1 )
            printf("%d ", i);
       /* if (checkFunc1(i)==1 && checkFun2(i==1) && checkFun3(i)==1 && checkFun4(i)==1)
            printf("%d ", i); */
    }

    return 0;
}

int checkFun3(int num) {

    if ( primeChecker(num)==1 && defectiveChecker(num) == -1 ) // not defective
        return 1;
    else
        return -1;
}

int defectiveChecker(int num) {

    int temp = num, sum=0;
    for (int i=0; i<num; i++) {
        if (num%i == 0)
            sum += i;
    }
    if (sum < (2*temp))
        return 1;
    else
        return -1;
}

int checkFun4(int num) {
    int even =0, odd=0;
    while (num !=0) {
        int rem = num % 10;
        if (rem%2==0)
            even += rem;
        else
            odd += rem;
        num /=10;
    }
    if (odd < even)
        return 1;
    else
        return -1;
}


int checkFun2(int num) {
    int sum = 0, digit=0;
    while (num !=0) {
        int rem = num%10;
        sum += rem;
        digit++;
        num /= 10;
    }
    if ( digit<=5 && ((sum*sum)%5==0) )
        return 1;
    else
        return -1;
}

int checkFunc1(int num) {
    int last = num % 10;
    while (num > 10) {
        num /= 10;
    }
    int first = num;
    if (first == 3 && (last!=1 || last!=3) )
        return 1;
    else
        return -1;
}


int primeChecker(int num) {
    int flag = 1;
    for (int i=2; i<=num/2; i++) {
        if (num%i==0) {
            flag = -1;
            break;
        }
    }
    return flag;
}
