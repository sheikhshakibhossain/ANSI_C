#include <stdio.h>

int main() {
	
	// 24. Palindrome Half Pyramid Pattern Using Numbers in C 
	int i, j,k, rows;
    
   printf("Enter rows: ");
   scanf("%d", &rows);
     
   for(i=1; i<=rows; i++)
   {
	for( int l=rows; l>=i; l--)
		printf(" ");

   	for(j=1;j<=i;j++) 
		printf("%c",j+64); 
	
	for(k=i-1;k>=1;k--)
	{
		printf("%c",k+64);
	}
	printf("\n");
   }
	return 0;
}

