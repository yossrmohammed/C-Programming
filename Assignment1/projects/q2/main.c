#include <stdio.h>
#include <stdlib.h>
#define SIZE 20
int main()
{
    char name[SIZE], grade;
    printf("Enter your name : ");
    scanf("%s" , &name);
    printf("Enter your grade :\n ");
    scanf(" %c" , &grade);
        while (isdigit(grade)!=0) {
        printf("Invalid input\n");
        printf("Please enter correct grade :\n");
        scanf(" %c", &grade);

    }
    printf("Your name is : %s .\n", name);
    switch(grade){
    case 'f': case 'F': {

    printf("Your grade is :  Fail .");
    break;
    }
        case 'd': case 'D': {

    printf("Your grade is :  Pass .");
    break;
    }
        case 'c': case 'C': {

    printf("Your grade is :  Good .");
    break;
    }
        case 'b': case 'B': {

    printf("Your grade is : Very good ." );
    break;
    }
        case 'a': case 'A': {

    printf("Your grade is :excellent . ");
    break;
    }
    default :{
    printf("Invalid grade.");
    break;
    }
    }



    return 0;
}
