#include <stdio.h>
/* WAP that will calculate the sum
  of numbers from 1 to n using recursion. */
void printNum(int i);
int main() {
	
	printNum(10);
	return 0;
}


void printNum(int i) 
{
	static int sum = 0;
	if (i==0)
		return;

	printNum(i-1);
	sum += i;
	if (i==10)
		printf("%d\n", sum);
}