#include <stdio.h>
#include <stdlib.h>

int main()
{
 int x=0,y=0;
 char o;

    printf("enter numbers : ");
    while(scanf("%d", &x) != 1 || scanf("%d", &y) != 1 ){
        printf("Error: Input is not an integer type.\n");
        scanf("%*s");
        printf("Enter numbers again: \n");


}
    printf("enter opreation ");

    scanf(" %c" ,&o);

    switch(o){
    case '+':
    printf("sub = %d" , x+y);
    break;
    case '-':
    printf("deffrance = %d", x-y);

    break;
    case '*':
        printf("muliply = %d" ,x*y);

    break;
    case '/':
        {

        if(y !=0){
            printf("division = %f" , (float)x/y);

            }
            else{
                printf("error !cannot divide on zero");

            }
            break;
        }

    default:
        printf("error invalid operation");

    }
    return 0;
}
