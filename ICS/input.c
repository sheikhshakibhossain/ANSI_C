#include <stdio.h>

int main()
{
//6. takes and prints inputs until the user types an ’A’
char j;
int i=0;
while(1)
{
i=i+1;

//printf("enter The character : ");
fflush(stdin);
scanf("%c", &j);


if(j=='A')
break;
else

printf("Input %d: %c\n", i,j);



}

return 0;
}
