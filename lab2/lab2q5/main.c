#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0,y=0, o;
    printf("enter numbers : ");
    scanf("%d %d" ,&x ,&y);

    printf("enter opreation ");
    scanf(" %c" , &o);
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
