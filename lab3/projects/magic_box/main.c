#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<windows.h>


void gotoxy(int x , int y);
void delay(int number_of_seconds);
int main()
{
    int size, row ,col , value, totalsize;
    printf("Enter size of magic square : \n");
    scanf("%d", &size);

    while(0==size%2)
    {
        printf("Order must be odd.\n please enter a valid number: \n");
            scanf("%d", &size);

    }
    row =1;
    col= (size+1)/2;
    value=1;
    totalsize=size*size;
    do{
        gotoxy(col*5,row*5);
        printf("%5d", value);
        delay(1);

        if(0==value%size){
          row++;
        }
        else{
           row--;
           col--;
        }
        if(0==row){
            row= size;
        }
        if(0==col){
            col=size;
        }
        value++;


    }while(value<=totalsize);
    return 0;
}

void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void delay(int number_of_seconds)
{

    int milli_seconds = 1000 * number_of_seconds;


    clock_t start_time = clock();


    while (clock() < start_time + milli_seconds)
        ;
}

