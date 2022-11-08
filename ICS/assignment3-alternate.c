#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i;
    int next = 1;

    for (i=1; i<=n; i++)
    {
        printf("%d, ", next);
        if (next == 1)
            next = 0;
        else
            next = 1;
    }
}
