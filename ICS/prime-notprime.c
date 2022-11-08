#include <stdio.h>


int main()
{
  int i, N;


  for(N = 1; N <= 100; N++)
  {
	  int count = 0;
	  for (i = 2; i <= N/2; i++)
      {
		  if(N%i == 0)
		  {
			  count++;
			  break;
		  }
	  }
	if(count == 0 && N != 1 )
		printf(" %d ", N);

  }
  return 0;

}

