#include <stdio.h>

int main()
{       
	// 10.05.2022
	/*int i,n;
	for(i=1; i<=10; i++)
	{
		scanf("%d", &n);
		if(n>=1) // if positive print the num
			printf("%d \n", n);
		else // if negative, terminate the loop
			break;
	} */

	/*int n;
	while(1) // loop will run infinite times
	{
		scanf("%d", &n);
		if(n>=1)
			printf("%d \n",n);
		else
			break;

		i=i+1;
	} */

	/*int i=1,digit,num;
	scanf("%d", &n);
	while(i<=n)
	{
		digit=num%10;
		printf("%d, ", digit);

		num=num/10;
	} */

	int result,remainder; // digit separation by Farah mam
	printf("Enter num : ");
	scanf("%d", &result);

	while(result !=0 ) // loop will continue untill result = 0
	{
		remainder=result%10;
		result=result/10;
		printf("%d\t", remainder);
	}


	return 0;
}
