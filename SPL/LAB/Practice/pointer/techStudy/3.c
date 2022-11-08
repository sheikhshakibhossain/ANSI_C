#include <stdio.h>

int main() {
	
	int n, *ptr, num[n];
	scanf("%d", &n);
	ptr = &num; // or ptr = &num[0]
	
	for (int i=0; i<n; i++) {
		scanf("%d", ptr); // ehene ptr+i addr. a value nile porer line kora lagto na,,,
		ptr++; // pointing to next memory block
	} 

	ptr = num; // repointing to index 0
	for (int i=0; i<n; i++) {
		printf("%d ", *ptr);
		ptr++;
	}

	return 0;
}