#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, result=0;
    for(i=1;i<=100; i++){
            result+=i;
    }
    printf("result = %d", result);

    return 0;
}
