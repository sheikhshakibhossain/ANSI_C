#include <stdio.h>

int main()
{
	//taking 5 inputs and checking how many are even
	int i=1,num,flag=0;
	while(i<=5)
	{
		scanf("%d", &num);
		if(num%2==0)
			flag++;

		i++;
	}
	printf("%d even numbers", flag);

	return 0;
}

