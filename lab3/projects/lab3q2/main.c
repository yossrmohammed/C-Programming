#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main()
{
    int frist [SIZE];
    int second [SIZE];
    int i=0, j=0, size;
    printf("enter size of  first array : \n");
    scanf("%d", &size);

    printf("enter elemnts of   array : \n");
    for(i; i<size ;i++)
    {
       scanf("%d", &frist[i]);

    }
    printf("elements of array: : \n");
    for(j; j<size ;j++)
    {
       printf("\t %d", frist[j]);

    }






    return 0;
}
