#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main()
{
    char string1[SIZE];
   int i=0, j;
   printf("Enter string: ");
   scanf("%s", string1);


    for(i; string1[i]!=0; ++i)
    {
        while (!((string1[i]>='a'&&string1[i]<='z') || (string1[i]>='A'&&string1[i]<='Z' || string1[i]=='\0')))
        {
            for(j=i;string1[j]!=0;++j)
            {
                string1[j]=string1[j+1];
            }
            string1[j]='\0';
        }
    }


    printf("String is: %s",string1);
    return 0;
}
