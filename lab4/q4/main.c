#include <stdio.h>
#include <stdlib.h>
#define RIGTH_KEY 77
#define LEFT_KEY 75
#define UP_KEY 72
#define DOWN_KEY 80
int main()
{
    char c=0;
    printf("Enter character: \n");
    char x= getch();
    if(-32==x){
        printf("Extended \n");
        x= getch();
        printf("the ascii value is %d", x);
    }
    else{
        printf("Normal key \n");
        printf("the ascii value is %d", x);

    }

    return 0;
}
