#include <stdio.h>
void accendingSort(int *arr);

int main() {
	
	// pointer needed
	int arr[5] = {10, 22, -5, 117, 0};
	printf("\nBefore sorting: ");
	for (int i=0; i<5;i++)
		printf("%d ", arr[i]);

	accendingSort(arr); // shouldn't work, but it does ...
	printf("\nAfter sorting: ");
	for (int i=0; i<5;i++)
		printf("%d ", arr[i]);

	
	return 0;
}

void accendingSort(int *arr) { // int arr[] also works,,, why bro?,,, sending addr but receives array...
							  // cuz, oije addr send korcilam otar adderss gula ekhane arr gular value hoye jabe
	for (int i=0; i<5; i++) {
		for (int j=i+1; j<5; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];  // ekhane address swap hocche... bujla bro?
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}