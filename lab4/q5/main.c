#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main()
{
    char fname [SIZE], lname [SIZE];
    printf("enter first name \n");
    scanf("%s", fname);
    printf("enter last name \n");
    scanf("%s", lname);
    printf(" Your name is %s %s ", fname, lname);

    return 0;
}
