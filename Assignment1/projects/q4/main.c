#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r,area,circumference;
    printf("Enter the redius :");
    //scanf("%f", &r);
    while(scanf("%f", &r)!=1){
        printf("Invalid radius , enter a valid value please:");
        scanf("%*s");

    }
    if(r<=0 ){
        printf("Invalid.\n");
    }
    else{
        area= 3.14 * r * r;
        circumference=2 * 3.14 * r;
        printf("Area = %f \n" , area);
        printf("circumference = %f ", circumference);
    }


    return 0;
}
