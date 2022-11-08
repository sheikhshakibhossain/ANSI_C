/*#include <stdio.h>

int main()
{

	int numx,digitx,how=0;
	scanf("%d",&numx);
	while(numx>0)
	{
		int i=1;
		digitx=numx%10;
		numx=numx/10;
		how=i+how;

		i++;
	}
	printf("%d",how);

	return 0;
}*/

#include <stdio.h>
/*
	Armstrong: The sum of its own digits raised to the power number of digits gives the number itself
	print all ARMSTRONG numbers between 2 numbers
	SI: 200 500
	SO: 370 371 407
	Armstrong number example: 407
	4^3+0^3+7^3 = 407
*/

int main()
{
	int num1,num2;
	//int digit,arm=0,check; //doesn't work even if i assign their initial value as 0
	scanf("%d %d", &num1, &num2);

	while(num1<=num2)
	{
		int numx=num1,digitx,how=0;
		while(numx>0) //checking how many digits of current number
		{
			//int i=1;
			digitx=numx%10;
			numx=numx/10;
			//how=i+how;
			how++;
		}
		printf("%d\n",how);

		int digit,arm=0,check; //doesn't work if var. digit,arm,check is global/out of the loop
		check=num1;
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

	return 0;
}


