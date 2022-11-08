#include <stdio.h>
int function1 (int , int ); // proto doesn't need var. name
void function2 (int a, int b);
void series(int r1, int r2);
int evenChk(int a);
int palindromeChk (int num);
int isPrime(int num);
int isVecna(int num);
int conditions (int num);

int main() {
	
	// // functions
	// int var1, var2;
	// scanf("%d %d", &var1, &var2);
	// int sum = function1(var1, var2);
	// printf("%d\n", sum);
	
	// function2(var1, var2);
	//series(var1, var2);
	int r1, r2;
	scanf("%d %d", &r1, &r2);
	// for (int i=r1; i<=r2; i++)
	// 	if (evenChk(i) == 1)
	// 		printf("%d ", i);

	// for (int i=r1; i<=r2; i++)
	// 	if (palindromeChk(i) == 1)
	// 		printf("%d ", i);


	// for (int i=r1; i<=r2; i++)
	// 	if (isPrime(i)==1 && i!=1)
	// 		printf("%d ", i);

	for (int i=r1; i<=r2; i++)
		if (isVecna(i)==1)
			printf("%d ", i);
	
	return 0;
}


int function1 (int a, int b) {
	return a+b;
}

void function2 (int a, int b) {
	printf("%d\n", a-b);
}

void series(int r1, int r2) {
	for (int i=r1; i<=r2; i++) 
	{
		if (i%2==0)
			printf("%d ", i);
	}
}

int evenChk(int a) {
	if (a%2==0)
		return 1;
	else
		return -1;
}

int palindromeChk (int num) {
	int rev=0, test;
	test = num;

	while (test != 0) {
		int digit = test % 10;
		rev = rev*10 + digit;
		test /= 10;
	}

	if (num == rev)
		return 1;
	else
		return 0;
}

int isPrime(int num) {
	int flag = 1;
	for (int i=2; i<=num/2; i++)
		if (num%i==0) {
			flag = 0;
			break;
		}
	return flag;
}

int conditions (int num) {
	int sum = 0, first, last;
	last = num % 10;
	while (num > 10) {
		int digit = num % 10;
		num /= 10;
		sum += digit;
	}

	first = num;
	sum += first;
	if (first == 1 && last == 1 && (sum*sum)%8==0)
		return 1;
	else
		return 0;

}

int isVecna(int num) {
	int chk1 = conditions(num);
	int chk2 = isPrime(num);

	if (chk1==1 && chk2==1)
		return 1;
	else
		return 0;

}