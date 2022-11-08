#include <stdio.h>
#include <math.h>

int main()
{
	//(fibonacci series, 1, 1, 2, 3, 5, 8, 13, ....... n )                                                                                           SI:5  SO:1 1 2 3 5

	/*int first,second,third,n,i;
	scanf("%d", &n);
	first=1; second=1;
	printf("%d %d ",first,second);
	for(i=3; i<=n; i++)
	{
		third=first+second;
		printf("%d ",third);

		first=second;
		second=third;
	}*/

	/*
		SI:   SO:
		n=3   1!=1
		      2!=2
		      3!=6
	*/
	/*int i,n,fac=1;
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		fac=fac*i;
		printf("%d! = %d \n",i,fac);
	} */

	//check if taken input PRIME or NOT
	int i,num,flag=1;
	scanf("%d", &num);
	for(i=2; i<=(num/2); i++)
	{
		if(num%i==0) //check if num is divisible by counter value
		{
			//printf("Not prime");
			flag=0;
			break;
		}

	}
	if(num == 1 || num == 0)
		printf("Not prime");
	else if(flag == 0)
		printf("Not prime");
	else
		printf("Prime");


	return 0;
}

