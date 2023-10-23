#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main()
{
int i=0, size, j=0, max,min;
int array [SIZE];
    printf("enter size of array : \n");
    scanf("%d", &size);
        printf("enter elemnts of  first array : \n");
        for(i; i<size;i++){
       scanf("%d",&array[i]);

    }

    for(j; j<size; j++)
    {
        if(array[j]>= max)
        {
            max= array[j];
        }
        if(array[j]<= min)
        {
            min= array[j];
        }


    }
    printf("maximun = %d \n", max);
    printf("minimum = %d \n",min );


    return 0;
}
