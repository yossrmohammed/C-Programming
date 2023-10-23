#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, count;
    printf("Enter a number :\n");
    while(scanf("%d", &num) != 1 ){
        printf("Invalid \n");
        scanf("%*s");
        printf("Enter numbers again: \n");
    }
    while(num!=0){
            count++;
        num /=10;
    }
    printf("number of digists = %d",count );
    return 0;
}
