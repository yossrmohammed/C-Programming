#include <stdio.h>
#include <stdlib.h>
#define LENGTH 100
int main()
{
    char string[LENGTH], i;
    printf("enter string \n");
    scanf("%[^\n]", string );
    printf("%s", string );


    return 0;
}
