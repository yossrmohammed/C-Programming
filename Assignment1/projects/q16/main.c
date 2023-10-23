#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, reversednum,reminder;
    printf("Enter a number :\n");
    while(scanf("%d", &num) != 1 ){
        printf("Invalid \n");
        scanf("%*s");
        printf("Enter numbers again: \n");
    }
    while(num!=0){
        reminder= num %10;
        reversednum=reversednum*10 +reminder;
        num /=10;
    }
    printf("Reversed number = %d", reversednum);
    return 0;
}
