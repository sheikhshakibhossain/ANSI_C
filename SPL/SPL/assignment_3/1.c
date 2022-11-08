#include <stdio.h>

typedef struct // a
{
	char id [20];
	int age;
	float weight;
} Soldier;


Soldier* takeInput(Soldier *soldier) // b(i)
{
	scanf("%s", soldier->id); // b(ii)
	scanf("%d %f", &soldier->age, &soldier->weight);
	return soldier; // b(iii)
}

int main() 
{
	Soldier soldier1; // c(i)
	Soldier *ptr;
	ptr = takeInput(&soldier1); // c(ii) & c(iii)
	printf("ID: %s\n", ptr->id); // c(iv)
	printf("Age: %d\n", ptr->age);
	printf("Weight: %.2f\n", ptr->weight);

	return 0;
}
