#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int main()
{
    char string [SIZE]= "yossr";
    int i=0;
    while(string[i]!=0){
        string[i]-= 32;
        i++;
    }
    printf("upper case: %s ",string);

    return 0;
}
