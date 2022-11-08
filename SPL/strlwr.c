#include <stdio.h>
#include <string.h>

int main()
{
   char string[1000];

   printf("Input a string to convert to lower case\n");
   gets(string);

   printf("Characters in lower case: \"%s\"\n",strlwr(string));

   // strlwr is use to convert upper case character to lower case

   return  0;
}
