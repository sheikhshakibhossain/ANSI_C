#include <stdio.h>

int main() {

	// 14. check eligibility for admission
	int math,phy,chem,threeTotal,twoTotal;
	scanf("%d %d %d", &math, &phy, &chem);
	threeTotal = math + phy + chem;
	twoTotal = phy + math;
	if ( (math>=65 && phy>=55 && chem>=50 && threeTotal>=180) || twoTotal>=140 ) {
		printf("eligible");
	}
	else {
		printf("not eligible");
	}

	return 0;
}

