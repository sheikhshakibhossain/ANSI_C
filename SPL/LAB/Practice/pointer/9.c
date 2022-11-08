#include <stdio.h>

void printNum(int i);
int main() {
	
	printNum(10);
	return 0;
}


void printNum(int i) 
{
	if (i==0)
		return;
	printNum(i-1);
	printf("%d ", i);
}