#include <stdio.h>

int main()
{
	/*//2. si 11   so 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21
	int i,n;
	scanf("%d", &n);
	for(i=1; i<n*2; i=i+2)
	{
		if(i==n*2-1)
			printf("%d", i);
		else
			printf("%d, ", i);
	} */

	/*//4. take N numbers as inputs and compute their average
	float avg,num,sum=0;
	int i,n;
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		scanf("%f", &num);
		sum = num+sum ;
	}
	avg = sum/n;
	printf("avg of %d inputs = %f \n", n,avg); */

	/*//5. print the square of X and increment (if X<Y) or decrement (if X>Y) X by 1, until X reaches Y. If and when X is equal to Y, the program prints “Reached!”
	int x,y;
	scanf("%d %d", &x, &y);
	while(x!=y)
	{
		printf("%d, ", x*x);
		if(x<y)
		x=x+1;
		else if(x>y)
		x=x-1;
	}
	printf("Reached! \n"); */

	/*//6. takes and prints inputs until the user types an ’A’
	char j;
	int i;
	while(1)
	{
		i=i+1;
		scanf("%c", &j); // use space(" ") before %c to solve input taking issue
		if(j=='A')
			break;
		else
			printf("Input %d: %c\n", i,j);
	} */

	/*//7. reverse the digits of an input integer. 1234 --> 4321
	int digit,num;
	scanf("%d", &num);
	while(num != 0)
	{
		digit=num%10;
		num=num/10;
		printf("%d",digit);
	} */

	/*//9. sum of 1, -2, 3, -4, 5, -6, 7, -8, 9, -10, 11, -12, 13, -14, ……
	int i,n,sum=0;
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		if(i%2==0)
			sum=sum-i;
		else
			sum=sum+i;
	}
	printf("Result: %d \n",sum); */

	/*//11. SI--> 4    SO---> 4! = 4 X 3 X 2 X 1 = 24
	int i,n,j,fac=1;
	scanf("%d", &n);
	j=n;
	printf("%d! = ",n);
	for(i=1; i<=n; i++)
	{
		fac = fac * i;
		while(j>0)
		{
			if(j!=1)
				printf(" %d X", j);
			else
				printf(" %d ",j);
			j=j-1;
		}
	}
	printf("= %d \n",fac); */

	//8. Write a program (WAP) that will find the grade of N students. For each student, it will take the marks of his/her the attendance (on 5 marks), assignment (on 10 marks), class test (on 15 marks), midterm (on 50 marks), term final (on 100 marks). Then based on the tables shown below, the program will output his grade

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
		else if(marks>=90 && marks<=100) // SI: 5 10 15 40 89.99 mark=90.00 but grade doesnt show
			printf("Grade = A \n");
		else if(marks>=86 && marks<90) //did'nt worked for marks=89.something when it was 86<= marks <= 89
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

