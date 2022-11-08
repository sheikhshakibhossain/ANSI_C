#include <stdio.h>

int main() {

	// 1. a to z
	char i;
	for (i='a'; i<='z'; i++) {
		printf("%c ", i);
	}


	// 2. ASCII value of all char.
	int i;
	printf("ASCII value: \n"); 
	for (i=0; i<=255; i++) { // there are 256 char. in ASCII
		printf("'%c' = %d \n", i,i);
	}


	// 3. multiplication table of given number
	int i,num;
	scanf("%d", &num);
	for (i=1; i<=10; i++) {
		printf("%d x %d = %d \n", num, i, num*i);
	}


	// 4. all natural num in reverse order
	int num;
	scanf("%d", &num);
	for (num; num >= 0; num--) { // natural num includes 0
		printf("%d \n", num);
	}


	// 5. sum of digits enter by user;
	int num,digit,sum=0;
	scanf("%d", &num);
	while ( num%10 != 0 ) {
		digit = num % 10;
		sum += digit;
		num /= 10;
	}
	printf("sum = %d", sum);


	// 6. sum of even numbers between 1 to n
	int i,n,sum=0;
	scanf("%d", &n);
	for (i=1; i<=n; i++) {
		if (i % 2 == 0)
			sum += i;
	}
	printf("sum = %d", sum);


	// 7. sum of odd num 1 to n
	int i,n,sum=0;
	scanf("%d", &n);
	for (i=1; i<=n; i++) {
		if (i % 2 != 0)
			sum += i;
	}
	printf("sum = %d", sum);


	// 8. swap first and last digit of a number
	int num,digit,first,last;
	scanf("%d", &num);
	last = num % 10;
	while (num > 10) {
		num /= 10;
	}
	first = num;
	int temp = first;
	first = last;
	last = temp;
	printf("swapped: first = %d, last = %d", first, last);



	// 9. sum of first and last digit of a number
	int num,digit,first,last;
	scanf("%d", &num);
	last = num % 10;
	while (num > 10) {
		num /= 10;
	}
	first = num;
	printf("sum = %d", first+last);



	// 10. find first and last digit of a number
	int num,digit,first,last;
	scanf("%d", &num);
	last = num % 10;
	while (num > 10) {
		num /= 10;
	}
	first = num;
	printf("first = %d, last = %d", first, last);



	// 11. product of digits of a number;
	int num, digit, product =1;
	scanf("%d", &num);
	while (num != 0) {
		digit = num % 10;
		product *= digit;
		num /= 10;
	}
	printf("product of digit: %d", product);



	// 12. reverse a number using for and while
	int num, digit;
	scanf("%d", &num);
	int temp = num;
	printf("reversing number using while: ");
	while (num != 0) {
		digit = num % 10;
		num /= 10;
		printf("%d", digit);
	}
	printf("\nreversing number using for: ");
	for ( ; temp !=0 ; temp/=10 ) {
		digit = temp % 10;
		printf("%d", digit);
	}



	// 13. calculate power using for and while | x^y
	int i,x,y,a,b,power=1;
	scanf("%d %d", &x, &y);
	a = x;
	b = y;
	for (i=1; i<=y; i++) {
		power *= x;
	}
	printf("using for x^y = %d \n", power);
	i = 1;
	power = 1; // don't forget to update some var. before using it. eg: i,sum=0,power=1;
	while (i <= b) {
		power *= a;
		i++;
	}
	printf("using while x^y = %d \n", power);



	// 14. factorial
	int i,num,fac=1;
	scanf("%d", &num);
	for (i=1; i<=num; i++) {
		fac *= i;
	}
	printf("%d! = %d", num, fac);


	// 15. armstrong or not
	int i,num,digit,check,temp,numOfDigit=0,sum=0;
	scanf("%d", &num);
	check = temp = num;
	while (temp != 0) { //checking how many digits
		temp /= 10;
		numOfDigit++;
	}
	while (num != 0) { 
		digit = num % 10;
		num /= 10;
		int powerValue=1;
		for (i=1; i<=numOfDigit; i++) {
			powerValue *= digit; // calculating power part
		}
		sum += powerValue; // sum of digit^numberOfDigit
	}
	if (check == sum)
		printf("%d is armstrong", check);
	else
		printf("%d is not armstrong", check);


	
	// 16. checking armstrong 1 to n
	int i,j,n,num,digit,check,temp;
	scanf("%d", &n);
	for (j=1; j<=n; j++) {

		int numOfDigit=0,sum=0; // needs to reset for next iteration
		check = temp = num = j;
		while (temp != 0) { //checking how many digits
			temp /= 10;
			numOfDigit++;
		}
		while (num != 0) { 
			digit = num % 10;
			num /= 10;
			int powerValue=1;
			for (i=1; i<=numOfDigit; i++) {
				powerValue *= digit; // calculating power part
			}
			sum += powerValue; // sum of digit^numberOfDigit
		}
		if (check == sum) {
			printf("%d is armstrong \n", check);
		}
	}



	// 17. calculating compound interest | concept bujhi nai
	float ammount, rate, year, interest;
	scanf("%f %f %f", &ammount, &rate, &year);
	interest = 1 + (rate / 100);

	float compoundInterest = 1;
	for (int i=1; i<=year; i++) {
		compoundInterest *= interest;
	}  
	compoundInterest = ammount * compoundInterest - ammount;
	printf("compound interest = %f", compoundInterest);



	// 18. prime not prime using for and while loop
	int i,num,flag=1; 
	scanf("%d", &num);
	int temp = num;
	printf("checking via for loop: \n");
	for (i=2; i<=num/2; i++) {
		if (num % i == 0) {
			flag = 0; // 0 means not prime
			break;
		}
	}
	if (num != 0 && flag == 0)
		printf("%d is not prime", num);
	else
		printf("%d is prime", num);
	
	i = 2;
	flag = 1;
	printf("\nchecking via while loop: \n");
	while (i <= temp/2) {
		if (temp % i == 0) {
			flag = 0; // 0 means not prime
			break;
		}
		i++;
	}
	if (temp != 0 && flag == 0)
		printf("%d is not prime", temp);
	else
		printf("%d is prime", temp);



	
	// 19. checking if a num is palindrome or not | 1661 = 1661 (num = reverse_num)
	int num, reverse = 0, i = 0;
	scanf("%d", &num);
	int check = num;

	while (num != 0) {
        reverse = (reverse * 10) + (num % 10); // reversing but how? | num var. here is reverse
        num /= 10;
    }
	if (check == reverse) 
		printf("%d is a Palindrome number", check);
	else
		printf("%d is not a Palindrome number", check);



	// 19. checking if a num is palindrome ( Solved in my way )
	int num;
	scanf("%d", &num);
	int len = 0, temp = num, check = num, finalCheck = num;
	while (temp != 0){
		temp /= 10;
		len++;
	}

	int digit, rev[len], lastIndex = len - 1;
	for (int i=0; i<=lastIndex; i++) {
		digit = num % 10;
		num /= 10;
		rev[len-1] = digit; // array of given number
		len--;
	}
	// checking if palindrome
	digit = 0; // reset
	int i = 0, palindrome = 1;
	while (check != 0) { // check = num, so, last digit will come first | rev[i], first will come first
		digit = check % 10;
		check /= 10;

		if (digit != rev[i]) {
			palindrome = 0;
			break;
		}
		i++;
	}
	if (palindrome == 0)
		printf("%d is not palindrome", finalCheck);
	else
		printf("%d is palindrome", finalCheck);




	// 20. print number in words. | SI: 123, SO: one two three
	int num = 0, digit, i, n;
	scanf("%d", &n);

	while (n != 0) {
        num = (num * 10) + (n % 10); // reversing but how? | num var. here is reverse
        n /= 10;
    }

	while (num != 0) {
		digit = num % 10;
		num = num / 10;
		switch (digit) {
			
			case 0:
				printf("zero ");
				break;
			case 1:
				printf("one ");
				break;
			case 2:
				printf("two ");
				break;
			case 3:
				printf("three ");
				break;
			case 4:
				printf("four ");
				break;
			case 5:
				printf("five ");
				break;
			case 6:
				printf("six ");
				break;
			case 7:
				printf("seven ");
				break;
			case 8:
				printf("eight ");
				break;
			case 9: 
				printf("nine ");
		}
	}



	// 21. HCF / GCD of two numbers
	int hcf, num1, num2, min, max, rem;
	scanf("%d %d", &num1, &num2);
	max = num1 > num2 ? num1 : num2;
	min = num1 < num2 ? num1 : num2;

	while ( max % min != 0 ) {
		rem = max % min;
		max = min;
		min = rem;
	}
	hcf = min;
	printf("HCF = %d", hcf);


	// 22. LCM of two numbers
	int i, num1, num2, lcm, max;
	scanf("%d %d", &num1, &num2);
	max = num1 > num2 ? num1 : num2;
	i = max;
	while (1) {
		if (i % num1 == 0 && i % num2 == 0) {
			lcm = i;
			break;
		}
		i = i + max;
	}
	printf("LCM = %d", lcm);



	return 0;
}

