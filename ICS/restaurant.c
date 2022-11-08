#include <stdio.h>
// function declaration
void menu0();
void menu1();
// global variables declaration
int q1,q2,q3,q4,q5,q6,total;


int main()
{
    int x;
    printf("Welcome to Khan's Kitchen\n1. Breakfast : \n2. Lunch : \n3. Dinner : \nWhat do you wanna eat? : ");
    scanf("%d", &x);

    switch(x)
    {
    case 1:
        printf("\n\nAvailable for Breakfast \n");
        menu0();
        printf("Enjoy your meal ! \n\n");
        break;

    case 2:
        printf("\n\nAvailable for Lunch \n");
        menu1();
        printf("Enjoy your meal ! \n\n");
        break;

    case 3:
        printf("\n\nAvailable for Dinner \n");
        menu1();
        printf("Enjoy your meal ! \n\n");
        break;

    default:
        printf("\nInvalid option! \n");
    }

    return 0;
}


// custom functions defination
void menu0() // breakfast menu list
{
    printf("1. Kichuri (30tk.) \n");
    printf("2. Egg (15tk.) \n");
    printf("3. Chicken (25tk.) \n");
    printf("4. Paratha (6tk.) \n");
    printf("5. Daal (20tk.) \n");
    printf("6. Vegitables (15tk.) \n\n");

    printf("Quantity of Kichuri : ");
    scanf("%d", &q1);
    printf("Quantity of Egg : ");
    scanf("%d", &q2);
    printf("Quantity of Chicken : ");
    scanf("%d", &q3);
    printf("Quantity of Paratha : ");
    scanf("%d", &q4);
    printf("Quantity of Daal : ");
    scanf("%d", &q5);
    printf("Quantity of Vegitables : ");
    scanf("%d", &q6);
    total = (30*q1 + 15*q2 + 25*q3 + 6*q4 + 20*q5 + 15*q6);
    printf("\n\nYou've orderd : \n%d quantity of Kichuri\n%d quantity of Egg\n%d quantity of Chicken\n%d quantity of Paratha\n%d quantity of Daal\n%d quantity of Vegitables \n\nTotal cost : %d tk. \n\n", q1,q2,q3,q4,q5,q6,total);
}
void menu1() // lunch and dinner menu
{
    printf("1. Kichuri (30tk.) \n");
    printf("2. Egg (15tk.) \n");
    printf("3. Chicken curry (25tk.) \n");
    printf("4. Fried rice (40tk.) \n");
    printf("5. Daal (20tk.) \n");
    printf("6. Fried Chicken (45tk.) \n\n");

    printf("Quantity of Kichuri : ");
    scanf("%d", &q1);
    printf("Quantity of Egg : ");
    scanf("%d", &q2);
    printf("Quantity of Chicken curry : ");
    scanf("%d", &q3);
    printf("Quantity of Fried rice : ");
    scanf("%d", &q4);
    printf("Quantity of Daal : ");
    scanf("%d", &q5);
    printf("Quantity of Fried Chicken : ");
    scanf("%d", &q6);
    total = (30*q1 + 15*q2 + 25*q3 + 40*q4 + 20*q5 + 45*q6);
    printf("\n\nYou've orderd : \n%d quantity of Kichuri\n%d quantity of Egg\n%d quantity of Chicken curry\n%d quantity of Fried rice\n%d quantity of Daal\n%d quantity of Fried Chicken \n\nTotal cost : %d tk. \n\n", q1,q2,q3,q4,q5,q6,total);
}
