#include <stdio.h>

int main(){

	int a,b,c,d,e,f,g,h,i,j,tmp;
	printf("enter ten numbers: ");
	scanf("%d %d %d %d %d %d %d %d %d %d", &a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
	printf("before ---> a=%d, b=%d, c=%d, d=%d, e=%d, f=%d, g=%d, h=%d, i=%d, j=%d  \n", a,b,c,d,e,f,g,h,i,j);

	// swapping
	tmp = j;
	j = i;
	i = h;
	h = g;
	g = f;
	f = e;
	e = d;
	d = c;
	c = b;
	b = a;
	a = tmp;
    
    
	printf("after -----> a=%d, b=%d, c=%d, d=%d, e=%d, f=%d, g=%d, h=%d, i=%d, j=%d  \n", a,b,c,d,e,f,g,h,i,j);
	
	return 0;
}
