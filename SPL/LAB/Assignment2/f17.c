#include <stdio.h>
void accendingSort(int *arrPtr);

int main() {
	
	int arr[5] = {10, 22, -5, 117, 0};
	printf("\nBefore sorting: ");
	for (int i=0; i<5;i++)
		printf("%d ", arr[i]);

	accendingSort(arr); // OK
	printf("\nAfter sorting: ");
	for (int i=0; i<5;i++)
		printf("%d ", arr[i]);

	
	return 0;
}

void accendingSort(int *arrPtr) {

	for (int i=0; i<5; i++) {

		int *arrJ = arrPtr + 1; // j=i+1 interm of pointer
		for (int j=i+1; j<5; j++) {

			if ( *arrPtr > *arrJ ) {  // doesn't work
				int temp = *arrPtr;
				*arrPtr = *arrJ;
				*arrJ = temp;
			}
			arrJ++; // j++ interm of pointer
		}
		arrPtr++; // changing arrPtr index,,,    ex: arr[0] to arr[1]
	}
}
