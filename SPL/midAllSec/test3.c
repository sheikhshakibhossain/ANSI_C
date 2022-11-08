#include<stdio.h>

int main() {
	
	int n;
    scanf("%d",&n);
	int a[n], prime[n], k=0;

    for(int i=0; i<n; i++)
    {
		scanf("%d",&a[i]);
        int flag = 1;
        for(int j=2; j<=a[i]/2; j++)
        {
           if(a[i]%j==0) {
        	    flag = 0;
                break;
            }
        }

        if(flag==1) {
            prime[k]=a[i];
            k++;
        }
    }
    
    for(int i=0; i<k; i++)
    	printf("%d ",prime[i]);


     return 0;
}