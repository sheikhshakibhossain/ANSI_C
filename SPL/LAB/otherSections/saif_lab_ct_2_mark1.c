#include <stdio.h>
# define MAX 100

int main() {
	
	char expression[MAX];
	gets(expression);

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
		printf("VALID\n");
	else
		printf("INVALID\n");
		
	return 0;
}
