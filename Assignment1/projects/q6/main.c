#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;
    printf("Enter numbers :");
    while(scanf("%d", &num1) != 1 || scanf("%d", &num2) != 1){
    printf("Error: Input is not an integer type.\n");

    scanf("%*s");
    printf("Enter numbers again: \n");


}
if(num1==num2){
    printf("those numbers are equal\n");
}
else{
    if(num1>num2){
        printf("The first number is greater than the number second number. \n");
    }
    else{
         printf("the second number is greater than number first number. \n");

    }
}


    return 0;
}
