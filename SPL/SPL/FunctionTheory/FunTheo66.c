#include <stdio.h>

int main() {
	
	// pointer needed
	int arr[3] = {0,1,2};
	printf("memory of arr[0] = %u\n", &arr[0]); // addr of arr[0] == value of arr
	printf("memory of arr = %u\n", arr);

	printf("size of arr = %d\n", sizeof(arr)); // here arr reffers to the full array but having the addr of arr[0]
	printf("size of arr[0] = %d\n", sizeof(arr[0]));
	
	return 0;
}

