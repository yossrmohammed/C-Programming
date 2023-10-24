#include <stdio.h>
#include <stdlib.h>
void swap( int* x, int* y);
void swap2(int*x, int*y);
void swap3(int*x, int*y);
int main()
{
    int x=6, y=3;
    /*printf("First method");
    printf("Before swapping x= %d , y=%d \n", x,y);
    swap1(&x,&y);
    printf("After swapping x= %d , y=%d", x,y);
    printf("-------------------------------- \n");
    printf("Second method \n");
    printf("Before swapping x= %d , y=%d \n", x,y);
    swap2(&x,&y);
    printf("After swapping x= %d , y=%d \n", x,y);
        printf("-------------------------------- \n");*/
    printf("third method \n");
    printf("Before swapping x= %d , y=%d \n", x,y);
    swap3(&x,&y);
    printf("After swapping x= %d , y=%d \n", x,y);
    return 0;
}

void swap1( int* x, int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
    //printf("After swaping x= %d , y=%d", x,y);

}
void swap2(int*x, int*y){
    *x+=*y;
    *y=*x-*y;
    *x=*x-*y;
}

void swap3(int*x, int*y){
    *x=*x * *y;
    *y=*x / *y;
    *x= *x / *y;
}

