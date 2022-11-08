#include <stdio.h>
#include <stdlib.h>

int main()
{

    // area of circle
    float radius,area,pie=3.1416;
    printf("Enter value of Radius: ");
    scanf("%f",&radius);
    area=pie*(radius*radius);
    printf("Area of circle = %f \n", area);

    // converting celcius to farenheit
    float celcius,fahrenheit;
    printf("Enter Temperature in Celcius: ");
    scanf("%f", &celcius);
    fahrenheit=((9*celcius)/5)+32;
    printf("%.2f in Celcius = %.2f in Fahrenheit \n", celcius,fahrenheit);


    return 0;
}
