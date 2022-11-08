#include <stdio.h>

// start function declaration
void menu();
int add();
int add2();
// end of function declaration


int main() // main function
{
	menu();
	int a=2, b=3, c;
	c = add(a,b);
	printf("sum = %d \n", c);
	c = add2();
	printf("add2 = %d \n", c);

	return 0;
}



// custom functions !
void menu()
{
	printf("1. kichuri \n2. eggs \n3. curry \n4. tea \n5. paratha \n6. vegitables \n");
}

int add(int x, int y)
{
	/*int sum = x+y;	
	return sum;*/ 
	return x+y;
}

int add2()
{
	int p,q;
	printf("\nenter 2 integers : ");
	scanf("%d %d", &p, &q);
	return p+q;
}
