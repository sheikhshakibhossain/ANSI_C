#include <stdio.h>

int main() {
	
	//5. Full Pyramid Star Pattern in C 
	int n;
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++)	 // OK
	{
		// space print
		for (int k=n; k>=i; k--) printf(" ");
		// star print
		for(int j=1; j<=2*i-1; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}

