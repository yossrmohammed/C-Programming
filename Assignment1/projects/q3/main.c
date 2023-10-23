#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius=0,fahrenheit=0;
    printf("Enter the celsius degree :\n");
    ;
    while(scanf("%f" , &celsius)!=1){

    printf("Invaid degree,\n enter the celsius degree again: \n ");
    scanf("%*s");


}
    printf("Celsius = %f \n", celsius);
    fahrenheit=(celsius*9/5+32);
    printf(" Fahrenheit = %f", fahrenheit);


    return 0;
}
