#include <stdio.h>

int main()
{       
	/*//1
	int x,y;
	scanf("%d %d", &x, &y);
	if(x==y)
		printf("the game lasted 24 hrs. ");
	else if(x>y)
		printf("the game lasted %d hrs.", (24-x+y) );
	else if(y>x)
		printf("the game lasted %d hrs.", (y-x) ); */

	//2
	int n;
	float i, sum=0;
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		sum = sum + (i*i*i) / (i+1);
	}

	printf("sum = %f", sum);

	/*//3
	int num,digit,counter=1;
	scanf("%d", &num);
	int last=num%10;
	while(num >= 10)
	{
		num=num/10;
		counter++;
	}
	int first=num;
	printf("digit = %d \n sum = %d", counter,first+last); */


	return 0;
}

