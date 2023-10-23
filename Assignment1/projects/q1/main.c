#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,result;
    printf("Enter numbers : \n");
    while(scanf("%d", &num1) != 1 || scanf("%d", &num2) != 1){
            printf("Invalid \n");
            scanf("%*s");
            printf("Enter numbers again: \n");
    }
    result=((num1+num2)*3)-10;

    printf(" \n result = %d", result );
    return 0;
}
