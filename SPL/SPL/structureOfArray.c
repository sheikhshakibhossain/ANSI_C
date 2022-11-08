#include <stdio.h>
#include <string.h>

typedef struct {

        char name[32]; // doesn't work when assigning values
        //char *name; // doesn't work when taking input
        int age;
        float income;
        
} Person;

int main() {

    Person person[3];
    //person[0].name[32] = "shakib"; // not ok
    //person[0].name = "Sheikh Shakib Hossain"; // ok with pointer but can't take input
    gets(person[0].name); // ok with char array
    //strcpy(person[0].name, "Sheikh Shakib Hossain");
    person[0].age = 21;
    person[0].income = 2550.50;

    printf("\nPerson Information:\n\n");
    printf("Name: %s\n", person[0].name);
    printf("Age: %d\n", person[0].age);
    printf("Income: %.2f\n", person[0].income);

    return 0;
    
}