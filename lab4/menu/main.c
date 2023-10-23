 #include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
#include <conio.h>

#define RIGHT_KEY 77
#define LEFT_KEY 75
#define UP_KEY 72
#define DOWN_KEY 80
#define ENTER 13
#define HOME 71
#define END 79
int main()
{
    int count =0;
    //int set []={4,15,15};
    char key;

    while(1){
        system("cls");

        display(count);
        key= getch();
        if(-32==key){
            key=getch();
            switch(key){
            case UP_KEY: case LEFT_KEY:{
                count--;

                if(count<0){
                    count=2;
                }
                break;
            }
            case DOWN_KEY: case RIGHT_KEY:{
                count++;
                if(count>2){
                    count=0;
                    }

                break;
            }
            case HOME:{
                count=0;
                break;
            }
            case END:{
                count=2;

                break;
            }

            }
        }
    else if(key==ENTER){
        system("cls");
        switch (count){
    case 0:{
        gotoxy(20,15);
        printf("NEW");
        getch();
        break;
        }
        case 1:{
        gotoxy(20,15);
        printf("Display");
        getch();
        break;
        }
        case 2:{
        gotoxy(20,15);
        printf("Exit");
        getch();
        break;
        }

        }
    }
    else {

    }
    }
    return 0;
}
void SetColor(int ForgC){
     WORD wColor;

      HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
      CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
                 //Mask out all but the background attribute, and add in the forgournd     color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
 }
  void gotoxy(int x,int y)
 {
   COORD coord={0,0};
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }
 void display(int x){
     for(int i=0; i<3; i++){
         if(x==0){
             gotoxy(10,5);
             SetColor(4);
             printf("NEW");
             gotoxy(10,15);
             SetColor(15);
             printf(" Display");
             gotoxy(10,25);
             SetColor(15);
             printf("Exit ");
         }
         else if(x==1){
                gotoxy(10,5);
                SetColor(15);
                printf("NEW ");
                gotoxy(10,15);
                SetColor(4);
                printf(" Display");
                gotoxy(10,25);
                SetColor(15);
                printf("Exit ");
         }
         else if(x==2){
             gotoxy(10,5);
                SetColor(15);
                printf("NEW ");
                gotoxy(10,15);
                SetColor(15);
                printf(" Display");
                gotoxy(10,25);
                SetColor(4);
                printf("Exit");
         }


     }


 }



