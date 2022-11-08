#include <stdio.h>

int main(){

	int value[32];
	//int mark[32];
	for(int i=0; i<10; i++){
		scanf("%d", &value[i]);
	}
	for(int i=0,counter=0; i<10; i++){
		counter++;
		printf("%d) scanned value = %d \n", counter, value[i]);
	}

	return 0;
}

