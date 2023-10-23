#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int main()
{
    char string [SIZE]="yossr";
    int i=0;
    while(string[i]!=0){
            int count=0, j=0;
            while(string[j]!=0){
                if(string[i]==string[j]){
                    count++;
                }
                j++;
            }
            printf("Frequancey of character %c is %d \n", string[i], count);
            i++;
    }
    return 0;
}
