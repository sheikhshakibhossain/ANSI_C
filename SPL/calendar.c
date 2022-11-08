#include <stdio.h>

int fday(int year);
int main()
{
	char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    char *week[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year, weekday = 0;

    printf("Which year do you wanna see? ");
    scanf("%d", &year);

    if ( ((year%4 == 0) && (year%100 != 0)) || (year%400 == 0) )
        days[1] = 29; // leap year

    weekday = fday(year); //gets first day of the year
    for(int i=0; i<11; i++) //month name
    {
        printf("\n\n  -------------- %s --------------\n\n", months[i]);

        for(int j=0; j<7; j++)
        {
            printf("  %s", week[j]); //day name
        }
        printf("\n");

        for(int space=1; space <= weekday; space++)
            printf("     "); //prints 6 space

        for(int k=1; k <= days[i]; k++) //day count
        {
            printf("%5d", k);
            weekday++;

            if(weekday > 6)
            {
                printf("\n");
                weekday = 0;
            }
        }

    }

    return 0;
}


int fday(int year) // gets first day of a year
{
    int day = (year*365 + ((year-1)/4) - ((year-1)/100) + ((year-1)/400)) % 7;
    return day;
}
