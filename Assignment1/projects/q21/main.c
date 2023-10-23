#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++){
            if (i == j || j == (8 - i-1)) {
                printf(" *");
                }
            else {
                printf(" ");
                }
        }
        printf("\n");
    }

    return 0;
}
