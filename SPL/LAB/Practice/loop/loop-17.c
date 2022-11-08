#include <stdio.h>
/* Write a program (WAP) that will find the grade of N students. For each student, it will take
the marks of his/her the attendance (on 5 marks), assignment (on 10 marks), class test (on
15 marks), midterm (on 50 marks), term final (on 100 marks). Then based on the tables
shown below, the program will output his grade. */

int main() {
	
	int i,n;
	float AT,AS,CT,MT,TF,marks;
	printf("how many students : ");
	scanf("%d", &n);

	printf("\n\nAttendance(5) Assignment(10) CT(15) Midterm(50) Final(100) \n");
	for(i=1; i<=n; i++) //grading n students
	{
		printf("Obtained mark of student %d : ",i);
		scanf("%f %f %f %f %f", &AT,&AS,&CT,&MT,&TF);
		marks = ( AT + AS + CT + (MT*.6) + (TF*.4) );
		printf("Student %d: \nMark = %.2f \n", i,marks);
		if(marks<55)
			printf("Grade = F \n");
		else if(marks > 100.00)
			printf("Wrong Input \n");
		else if(marks>=90 && marks<=100) 
			printf("Grade = A \n");
		else if(marks>=86 && marks<=89.99) 
			printf("Grade = A- \n");
		else if(marks>=82 && marks<=85.99)
			printf("Grade = B+ \n");
		else if(marks>=78 && marks<=81.99)
			printf("Grade = B \n");
		else if(marks>=74 && marks<=77.99)
			printf("Grade = B- \n");
		else if(marks>=70 && marks<=73.99)
			printf("Grade = C+ \n");
		else if(marks>=66 && marks<=69.99)
			printf("Grade = C \n");
		else if(marks>=62 && marks<=65.99)
			printf("Grade = C- \n");
		else if(marks>=58 && marks<=61.99)
			printf("Grade = D+ \n");
		else if(marks>=55 && marks<=57.99)
			printf("Grade = D \n");
	}
	
	return 0;
}

