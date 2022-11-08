#include <stdio.h>

int main() {

	// 17. how many money notes
	int ammount, note1, note2, note5, note10, note20, note50, note100, note200, note500, note1000;
	note1 = note2 = note5 = note10 = note20 = note50 = note100 = note200 = note500 = note100 = 0;
	scanf("%d", &ammount);
	if (ammount >= 1000) {
		note1000 = ammount / 1000;
		ammount -= note1000 * 1000;
	}
	if (ammount >= 500) {
		note500 = ammount / 500;
		ammount -= note500 * 500;
	}
	if (ammount >= 200) {
		note200 = ammount / 200;
		ammount -= note200 * 200;
	}
	if (ammount >= 100) {
		note100 = ammount / 100;
		ammount -= note100 * 100;
	}
	if (ammount >= 50) {
		note50 = ammount / 50;
		ammount -= note50 * 50;
	}
	if (ammount >= 20) {
		note20 = ammount / 20;
		ammount -= note20 * 20;
	}
	if (ammount >= 10) {
		note10 = ammount / 10;
		ammount -= note10 * 10;
	}
	if (ammount >= 5) {
		note5 = ammount / 5;
		ammount -= note5 * 5;
	}
	if (ammount >= 2) {
		note2 = ammount / 2;
		ammount -= note2 * 2;
	}
	if (ammount >= 1) {
		note1 = ammount / 1;
		ammount -= note1 * 1;
	}
	printf("1000 tk. note = %d \n", note1000);
	printf("500 tk. note = %d \n", note500);
	printf("200 tk. note = %d \n", note200);
	printf("100 tk. note = %d \n", note100);
	printf("50 tk. note = %d \n", note50);
	printf("20 tk. note = %d \n", note20);
	printf("10 tk. note = %d \n", note10);
	printf("5 tk. note = %d \n", note5);
	printf("2 tk. note = %d \n", note2);
	printf("1 tk. note = %d \n", note1);

	return 0;
}

