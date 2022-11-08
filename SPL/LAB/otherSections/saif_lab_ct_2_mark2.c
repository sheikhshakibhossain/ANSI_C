#include <stdio.h>
# define MAX 100

int check1(char expression[]);
int check2(char expression[]);
int main() {
	
	char expression[MAX];
	gets(expression);
	// printf("%d\n", check1(expression)); // OK
	// printf("%d\n", check2(expression)); // OK

	if ( check1(expression) == 1 && check2(expression) == 1 ) // NOT OK 2 * {5 - 3} + ((3 - 4)/2)
		printf("VALID\n");
	else
		printf("INVALID\n");
		
	return 0;
}

int check2(char expression[])
{
	int i = 0;
	char first = 'N', last = 'N'; // () as P; {} as C
	while ( expression[i] != '\0' ) // finding which brace is at begining
	{
		if ( expression[i] == '(' ) {
			first = 'P'; // P for ()
			break;
		}
		else if ( expression[i] == '{' ) {
			first = 'C'; // C for {}
			break;
		}
		i++;
	}
	
	int len = 0;
	while ( expression[len] != '\0' ) len++;
	for ( len-1; len>=0; len-- ) // finding which brace is at ending
	{
		if ( expression[len] == ')' ) {
			last = 'P'; // P for ()
			break;
		}
		else if ( expression[len] == '}' ) {
			last = 'C'; // C for {}
			break;
		}
	}

	// printf("first = %c | last = %c\n", first, last); // OK
	if ( first == last )
		return 1;
	else
		return 0;
}

int check1(char expression[]) 
{
	int i = 0, parenthesisOpen = 0, bracesOpen = 0, parenthesisClose = 0, bracesClose = 0;
	while ( expression[i] != '\0' ) 
	{
		if ( expression[i] == '(' ) {
			parenthesisOpen++;
		}
		else if ( expression[i] == '{' ) {
			bracesOpen++;
		}
		else if ( expression[i] == ')' ) {
			parenthesisClose++;
		}
		else if ( expression[i] == '}' ) {
			bracesClose++;
		}
		i++;
	}

	if ( parenthesisOpen == parenthesisClose && bracesOpen == bracesClose )
		return 1;
	else
		return 0;
}