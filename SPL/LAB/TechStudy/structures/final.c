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
		fgets(book[i].name, sizeof(book[i].name)/sizeof(book[i].name[0]) , stdin);
		fgets(book[i].author, sizeof(book[i].author)/sizeof(book[i].author[0]) , stdin);
		getchar();
		fflush(stdin);
		scanf("%d %f", &book[i].pages, &book[i].price); // still not OK
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
