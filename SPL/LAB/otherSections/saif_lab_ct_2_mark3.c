#include <stdio.h>
# define MAX 100

int check1(char expression[]);
int check2(char exp[]);
int main() {

	char exp[MAX];
	gets(exp);

	if ( check1(exp) == 1 && check2(exp) == 1 ) // NOT OK 2 * (5 - {(3 - 4)/2) - 3}
		printf("VALID\n");
	else
		printf("INVALID\n");

	return 0;
}


int check2(char exp[]) 
{
	int status = 1;
	for (int i=0; exp[i] != '\0'; i++)
	{
		char start = '\0'; // NULL
		char end = '\0';

		if ( exp[i] == '(' )
		{	
			start = 'P';
			for (int j=i+1; exp[j] != '\0'; j++)
			{
				if ( exp[j] == ')' ) {
					end = 'P';
					break;
				}
			}
		}

		else if ( exp[i] == '{' )
		{
			start = 'B';
			for (int j=i+1; exp[j] != '\0'; j++)
			{
				if ( exp[j] == '}' ) {
					end = 'B';
					break;
				}
			}
		}
		if ( start != end )
			status = 0;
	}

	if (status = 1)
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