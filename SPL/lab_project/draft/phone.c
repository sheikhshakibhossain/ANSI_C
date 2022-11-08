#include <stdio.h>
#include <string.h>
#include "shakib_031.h"
#define MAX 100

typedef struct {
	char name[32];
	char color[32];
	int os_version;
	int price;
	
} DEVICE;

int main() 
{
	DEVICE phone[MAX];
	int choice = welcome_screen();
	
	int insert_flag = 0;
	
while(1)
{
	if (choice==1) 
	{
		int i = 0;
		while (1)
		{
			getchar();
			char name[32];
			printf("\nEnter Phone Info: \n");
			printf("Name : ");
			fgets(name, sizeof(name), stdin); // can use fp .. file here;
			name[strcspn(name, "\n")] = '\0';
			strcpy(phone[i].name, name);

			char color[32];
			printf("Color : ");
			fgets(color, sizeof(color), stdin); // can use fp .. file here;
			color[strcspn(color, "\n")] = '\0';
			strcpy(phone[i].color, color);

			printf("OS version: ");
			scanf("%d", &phone[i].os_version);
			printf("Price: ");
			scanf("%d", &phone[i].price);

			insert_flag = 1;
			printf("Yay! Entry added. Enter 0 to exit or 1 to take entry...  ");
			int exit_chk;
			scanf("%d", &exit_chk);
			if (exit_chk == 0) break;
			i++;
		}
	}
}


	return 0;
}