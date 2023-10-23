#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, factorial=1,i;
    printf("Enter a number : \n");
    while(scanf("%d", &num) != 1){
        printf("Invalid \n");
        scanf("%*s");
        printf("Enter numbers again: \n");


    }
    for(i=1;i<=num; i++){
            factorial*=i;
    }
    printf("factorial = %d", factorial);
    return 0;
}
