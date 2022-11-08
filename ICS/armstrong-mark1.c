#include <stdio.h>

int digit_counter();
int arm_check();

int main()
{
	int num1,num2,digit,arm=0;
	scanf("%d %d",&num1, &num2);

	while(num1<=num2)
	{

	}

	return 0;
}

//custom fuctions
int digit_counter(numx)
{
	int how,digitx;
	while(numx>0)
	{
		int i=1;
		digitx=numx%10;
		numx=numx/10;
		how=i+how;
		i++;
	}
	return how;
}

int arm_check(int check, int how)
{
		int arm,digit;
		while(check>0)
		{
			digit = check % 10;
			check = check / 10;
			for(int i=1; i<=how; i++)
				digit=digit*i;

			arm = digit + arm;
 		}
		if(num1 == arm)
			printf("%d\t", arm);

		num1++;
}
