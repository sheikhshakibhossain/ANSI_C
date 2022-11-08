#include <stdio.h>
#include <ctype.h>

typedef struct {
	char name[16];
	char author[32];
	int pages;
	float price;
} BookInfo;

int main() {
	
	int n;
	printf("Number of Books: ");
	scanf("%d", &n);

	BookInfo book[2];
	for (int i=0; i<n; i++) { // NOT OK
		printf("\nInfo for Book[%d]:\n", i+1);

		scanf("%[^\n]%*c", book[i].name);
		getchar();
		fflush(stdin);

		scanf("%[^\n]%*c", book[i].author);
		getchar();
		fflush(stdin);

		scanf("%d %f", &book[i].pages, &book[i].price);
		fflush(stdin);
	}

	for (int i=0; i<n; i++) {
		printf("\nInformation of Book[%d]\n", i+1);
		printf("\tName: %s\n", book[i].name);
		printf("\tAuthor: %s\n", book[i].author);
		printf("\tPage: %d\n\tPrice: %.2f\n", book[i].pages, book[i].price);
	}
	
	return 0;
}