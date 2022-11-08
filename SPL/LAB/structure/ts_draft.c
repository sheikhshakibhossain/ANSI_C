#include <stdio.h>
#include <ctype.h>
#include <string.h>

typedef struct 
{
	char name[16];
	char author[32];
	int pages;
	float price;
} BookInfo; // Alias of the structure

int main() 
{
	int n = 2;
	BookInfo book[n];
	for (int i=0; i<n; i++)
	{
		getchar();
		char temp[16];
		fgets(temp, sizeof(temp), stdin);
		temp[strcspn(temp, "\n")] = '\0';
		strcpy(book[i].name, temp); // still not OK
		//fgets(book[i].name, sizeof(book[i].name) , stdin);
		fgets(book[i].author, sizeof(book[i].author) , stdin);
		scanf("%d %f", &book[i].pages, &book[i].price); // NOT OK
	}

	for (int i=0; i<n; i++)
	{
		printf("Information of student %d\n", i+1);
		puts(book[i].name);
		puts(book[i].author);
		printf("%d\n%.2f\n", book[i].pages, book[i].price);
	}
	return 0;
}