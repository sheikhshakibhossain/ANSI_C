#include <stdio.h>
void Get_Number_And_Base ();
void Convert_Number(int num, int base);
void Show_Converted_Number(int result);

int main() {
	
	Get_Number_And_Base(); // OK
	return 0;
}

void Get_Number_And_Base () {

	int num, base;
	scanf("%d %d", &num, &base);
	Convert_Number(num, base); 
}

void Convert_Number(int num, int base) {

	int result = 0, i = 1;
	while (num != 0) {

		int rem = num % base;
		num /= base;
		
		result += rem * i;
		i *= 10;
	}
	//printf("%d ", result); // OK
	Show_Converted_Number(result);
}


void Show_Converted_Number(int result) {

	printf("%d\n", result);
}
