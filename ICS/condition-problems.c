#include <stdio.h>

int main()
{       
	//int x;
	//scanf("%d", &x);
	/*//1. number is positive or not.
	if(x>0 || x==0)
		printf("Positive");
	else
		printf("Negative"); */

	/*//2. decide whether a number is even or odd.
	if(x%2==0)
		printf("even");
	else
		printf("odd"); */

	/*//5. decide whether X is greater than/less than/equal to Y.
	int y;
	scanf("%d", &y);
	if(x==y)
		printf("%d is equal to %d", x,y);
	else if(x>y)
		printf("%d greater than %d", x,y);
	else
		printf("%d is less than %d", x,y); */

	/*//6. decide whether a year is leap year or not.
	int year;
	scanf("%d", &year);
	if ( (year%4==0 && year%100 !=0) || (year%400==0) )
		printf("leap year");
	else
		printf("not leap year"); */

	/*//7. Program that will categorize a single character that is entered at the terminal, whether it is an alphabet, a digit or a special character.
	char ch;
	scanf(" %c", &ch);
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        printf("'%c' is alphabet.", ch);
    else if(ch >= '0' && ch <= '9')
		printf("'%c' is digit.", ch);
    else
        printf("'%c' is special character.", ch); */

	/*//8. 100 * 55.5 Multiplication: 5550
	float m,n;
	char o;
	scanf("%f %c %f", &m, &o, &n);
	if(o=='/' && n==0)
		printf("Division: Zero as divisor is not valid!");
	else if(o=='/')
		printf("Division: %f", m/n);
	else if(o=='+')
		printf("Addition: %f", m+n);
	else if(o=='-')
		printf("Substraction: %f", m-n);
	else if(o=='*')
		printf("Multiplication: %.0f", m*n); */

	/*//10. 1, 2, 3, 4 are for performing addition,subtraction, multiplication, division
	//SI: -5 10.5 4    SO: Quotient: 0
	int c;
	float a,b;
	scanf("%f %f %d", &a, &b, &c);
	if(c==1)
		printf("Addition: %f", a+b);
	else if(c==2)
		printf("Substraction: %f", a-b);
	else if(c==3)
		printf("Multiplication: %.0f", a*b);
	else if(c==4)
		printf("Quotennt: %.0f", a/b); */

	//11.
	int c,d,rem;
	float a,b;
	scanf("%f %f %d", &a, &b, &c);
	if(c==1)
		printf("Addition: %f", a+b);
	else if(c==2)
		printf("Substraction: %f", a-b);
	else if(c==3)
		printf("Multiplication: %.0f", a*b);
	else if(c==4)
	{
		printf("1.Quotient 2.Remainder : ");
		scanf("%d",&d);
		if(d==1)
			printf("Quotient: %f", a/b);
		else if(d==2)
		{
			rem= (int)a % (int)b;
			printf("Remainder: %d",rem);
		}
	}






	return 0;
}

