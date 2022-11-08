#include <stdio.h>
int pow(int x, int y);

int main() {

    int x, y;
    scanf("%d %d", &x, &y);
    int power = pow(x,y);
    printf("%d\n", power);

    return 0;
}


int pow(int x, int y) {

    if (y==0)
        return 1;

    return x * pow(x, y-1);
}
