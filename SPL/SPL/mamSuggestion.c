#include <stdio.h>
#include <stdlib.h>
void welcomePage (void);

int main() {

	int n=0;
	float salary[100];
	
	while (1)
	{
		welcomePage();
		float sum = 0;
		char reply;
		printf("\nEnter your choice: ");
		scanf("%c", &reply);

		switch (reply)
		{
			case 'a':
				printf("No. of employees : ");
				scanf("%d", &n);
				for (int i=0; i<n; i++) {
					printf("Enter salary of employee %d : ", i+1);
					scanf("%f", &salary[i]);
				}
				printf("Salary added\n");
				break;
			
			case 'b':
				for (int i=0; i<n; i++)
					sum += salary[i];
				float avg = sum / n;
				printf("Avarage Salary of %d employees is : %f\n", n, avg);
				break;
			
			case 'q':
				exit(0);
				break;

			default:
				printf("• Invalid Input.\n");
		}

	}
	
	return 0;
}

void welcomePage (void)
{
	printf("\n\n======= Office Pay Roll System =========\n");
	printf("• Enter 'a', to take salary of all employees into “salary” array of size N.\n");
	printf("• Enter 'b', to find the average salary of all employees.\n");
	printf("• Enter 'c', to count and display the index of employees who have above average salary.\n");
	printf("• Enter 'd', to display salary of all employees in reverse index order.\n");
	printf("• Enter 's', to search a salary.\n"); //If found, display the index. If not found, display “Not found”
	printf("• Enter 'q', to quit/exit the menu system.\n");
}
