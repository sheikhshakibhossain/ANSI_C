#include <stdio.h>

int main(){

    int x,y,z;
    printf("Enter three numbers : ");
    scanf("%d %d %d", &x,&y,&z);

    if(x>y && x>z){
        printf("max = %d",x);
    }
    else if((y>x) && (y>z)){
            printf("max = %d",y);
    }
    else{
            printf("max = %d",z);
    }


	return 0;
}
