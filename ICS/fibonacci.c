#include <stdio.h>

int main()
{
	//fibonacci series 3,7,10,.....n
	int i,n,first,second,third;
	scanf("%d",&n);

	first=3; second=7; int sum=10; //sum=10 3+7=10
	printf("%d %d ",first,second);

	//i=third 3+7=10
	for(i=1; i<=n-2; i++) //i=1; i<n-2; i++ or i=3; i<=n; i++ because we printed first two digits                                                               the loop here to print 3rd and later numbers.
	{
		third=first+second;
		printf("%d ",third);
		sum=sum+third;

		first=second;
		second=third;
	}
	printf("\nsum = %d",sum);

	return 0;
}

