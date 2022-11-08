#include <stdio.h>
#include <math.h>
void TakeInput();
float CalcMean(int arr[], int n);
float Calc_Std_deviation(int arr[], int n, int M);

int main() {
	
	TakeInput(); // OK
	return 0;
}


float Calc_Std_deviation(int arr[], int n, int M) {

	float sum = 0;
	for (int i=0; i<n; i++) {
		sum += pow( (arr[i] - M), 2 );
	}
	float deviation = sqrt(sum/n);
	return deviation;
}


float CalcMean(int arr[], int n) {

	float sum = 0;
	for (int i=0; i<n; i++) {
		sum += arr[i];
	}
	float avg = sum / n;
	return avg;
}

void TakeInput() {

	int n;
	int arr[n];
	scanf("%d", &n);
	for (int i=0; i<n; i++)
		scanf("%d", &arr[n]);
	
	float M = CalcMean(arr, n);
	float result = Calc_Std_deviation(arr, n, M);
	printf("%.2f\n", result);
}
