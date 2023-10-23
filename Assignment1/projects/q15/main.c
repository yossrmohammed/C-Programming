#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,power,i=1,result=1;
    printf("Enter a numbers : \n first is the number and second is the power :\n");
    while(scanf("%d", &num) != 1 || scanf("%d", &power) != 1){
        printf("Invalid \n");
        scanf("%*s");
        printf("Enter numbers again: \n");
    }
    if(0==power){
        result=1;
    }
    else{
        for(i;i<=power; i++){
           result*=num;
        }


    }
    printf("%d ^ %d is %d", num,power,result);
    return 0;
}
