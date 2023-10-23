#include <stdio.h>
#include <stdlib.h>

int main()
{
      int x=0, y=0, z=0;
    printf("Please enter numbers: ");
    scanf("%d %d %d", &x , &y, &z);
    if(x>y && x>z)
        printf("the largest number is %d" , x);
        else if(y>x && y>z)
        printf("the largest number is %d" , y);
        else
            printf("the largest number is %d" , z);


    return 0;
}
