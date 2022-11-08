#include <stdio.h>
void welcomePage (void);

int main() {

	int n=0;
	float salary[100]={0}, avg = 0;
	
	while (1)
	{
		welcomePage();
		float sum = 0;
		char reply;
		printf("\nEnter your choice: ");
		scanf(" %c", &reply); // space before %c has to be

		if (reply == 'q')
			break;

		else if (reply == 'a') {
			printf("\nNo. of employees : ");
			scanf("%d", &n);
			for (int i=0; i<n; i++) {
				printf("Enter salary of employee %d : ", i);
				scanf("%f", &salary[i]);
			}
			printf("\nSalary added!\n");
		}

		else if (reply == 'b') {
			for (int i=0; i<n; i++)
				sum += salary[i];
			avg = 0; // reset
			avg = sum / n;
			if (n != 0) // if salary added
				printf("\nAvarage Salary of %d employees is : %f\n", n, avg);
			else 
				printf("\nPlease add salary first!\n");
		}

		else if (reply == 'c') {
			if (avg != 0) {
				printf("\nHigher paid employee indices : ");
				for (int i=0; i<n; i++)
					if (salary[i] > avg)
						printf("%d ", i);
			}
			else 
				printf("\nPlease calculate avarage salary first!\n");
		}

		else if (reply == 'd') {
			printf("\nEmployee\tSalary\n");
			printf("--------\t------\n");
			for (int i=n-1; i>=0; i--) 
				printf("%4d\t%16f\n", i, salary[i]);
		}

		else if (reply == 's') {
			int flag = 0, index = -1;
			float q;
			printf("\nSearch ammount : ");
			scanf("%f", &q);
			for (int i=0; i<n; i++) {
				if (salary[i] == q) {
					index = i;
					flag = 1;
				}
			}
			if (flag == 1)
				printf("\nFound! Employee %d has salary of %f\n", index, q);
			else
				printf("\nNo salary information is Found!\n");
		}
		else
			printf("\n• Invalid Input.\n");			
	}
	
	return 0;
}

void welcomePage (void)
{
	printf("\n\n======= Office Pay Roll System =========\n");
	printf("• Enter 'a', to take salary of all employees.\n");
	printf("• Enter 'b', to find the average salary of all employees.\n");
	printf("• Enter 'c', to count and display the index of employees who have above average salary.\n");
	printf("• Enter 'd', to display salary of all employees in reverse index order.\n");
	printf("• Enter 's', to search a salary.\n"); //If found, display the index. If not found, display “Not found”
	printf("• Enter 'q', to quit/exit the menu system.\n");
}
