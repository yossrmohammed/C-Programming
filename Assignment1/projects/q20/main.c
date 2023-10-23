#include <stdio.h>
#include <stdlib.h>

int main()
{
       int i,j, rows=5,space;


    space = rows;

    for (i=1;i<=rows;i++) {
        for (j=1;j<space;j++) {
            printf(" ");
        }

        space--;

        for (j=1;j<=2*i-1;j++) {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
