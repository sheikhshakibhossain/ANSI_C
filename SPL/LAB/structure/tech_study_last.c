#include <stdio.h>
#include <ctype.h>

typedef struct 
{
	char name[16];
	char author[32];
	int pages;
	float price;
} BookInfo;

int main() 
{
	int n = 2;
	BookInfo book[n];
	for (int i=0; i<n; i++)
	{
		fgets(book[i].name, sizeof(book[i].name) , stdin);
		fgets(book[i].author, sizeof(book[i].author) , stdin);
		scanf("%d %f", &book[i].pages, &book[i].price); // OK
		getchar();
	}

	for (int i=0; i<n; i++)
	{
		printf("Information of student %d\n", i+1);
		printf("Name: %s\n", book[i].name);
		printf("Author: %s\n", book[i].author);
		printf("Page: %d\nPrice: %.2f\n", book[i].pages, book[i].price);
	}
	return 0;
}