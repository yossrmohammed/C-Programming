#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int main()
{
    char string1 [SIZE]="mohamed", string2 [SIZE];
    int i=0;
    while(string1[i]!=0){
       string2[i]= string1[i];
       i++;
    }
    printf("the copied string is %s ", string2);
    return 0;
}
