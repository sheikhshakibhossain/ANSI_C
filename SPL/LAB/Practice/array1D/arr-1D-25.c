#include <stdio.h>
/* WAP that will take n integers into an array A. Now remove all duplicates numbers from
that array. Finally print all elements from that array. */


int main()
{
    int n;          
	scanf("%d", &n);
	int arr[n];       

    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    
	for (int i=0; i<n; i++)
	{
		for (int j=i+1; j<n; j++)
		{
			if ( arr[i] == arr[j] ) 
			{
				for (int k=j; k<n; k++)
					arr[k] = arr[k+1];

				n--; // size decrement
				j--; // recheck
			}
		}
	}

	for (int i=0; i<n; i++)
		printf("%d ", arr[i]);

    return 0;

}