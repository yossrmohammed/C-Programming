#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i,flag=0;
    printf("Enter a number: \n");
    while(scanf("%d", &num) != 1){
        printf("Invalid \n");
        scanf("%*s");
        printf("Enter numbers again: \n");


    }
    if(0==num ){
        printf("Invalid \n");
    }
    else{
        for(i=2 ;i<=num/2;i++){
            if(0==num%i){
                flag=1;
            }
        }
        if (flag == 0){
            printf("%d is a prime number.", num);
        }
        else{
            printf("%d is not a prime number.", num);
        }


    }

    return 0;
}
