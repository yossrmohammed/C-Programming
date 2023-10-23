#include <stdio.h>
#include <stdlib.h>

int main()
{
    int degree;
    printf("please enter the degree: \n");
    scanf("%d",&degree);

    if(degree>=85)
        printf("Excellent");
   else if(degree<85 && degree>=75)
        printf("Very good");
   else if(degree<75 && degree>=65)
        printf("Good");
   else if(degree<65 && degree>=50)
        printf("Pass");
    else if(degree<0)
        printf("Invalid");
    else
    printf("Fail");

    return 0;
}
