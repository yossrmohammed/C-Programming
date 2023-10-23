#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,num=0 ,perfectsquare=0;
    printf("enter a number: \n");
    while(scanf("%d", &num) != 1){

            printf("Invalid \n");
            scanf("%*s");


        printf("Enter numbers again: \n");


}
if(0==num){
        printf("Invalid value.");

}

    while(i<num ) {
            if(num==i*i){
                perfectsquare=i;

            }
            i++;
    }
    if(0!=perfectsquare){
    printf("%d is perfect square of %d ", num,perfectsquare);
    }
    else{
        printf("%d is not perfect square ", num);

    }

    return 0;
}
