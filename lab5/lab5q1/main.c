#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
#include <conio.h>
#include "standerd_def.h"

/*struct student {
    u8 name[10];
    u8 gender;
    u8 age;
    s32 id;
};*/

void display_struct_Student(struct student s);
void scan_struct_Students(struct student s[],int size, int studentno );
void print_struct_Students(struct student s[],int size );
 void display(int x);
 void gotoxy(int x,int y);
 void SetColor(int ForgC);

int main()
{
    char flag='N';
    int count=0;
    char key;
    struct student students[SIZE];
    int noofstudents=0;
    while(flag != 'Y' && flag != 'y'){
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
        /*gotoxy(20,15);
        printf("NEW");*/
        int size=0;
        printf("enter size :\n");
        scanf("%d",&size);
        scan_struct_Students(students,size,noofstudents);
        noofstudents+=size;
        printf("%d", noofstudents);
        getch();
        break;
        }
        case 1:{
        gotoxy(20,15);
        print_struct_Students(students,noofstudents);
        getch();
        break;
        }
        case 2:{
        gotoxy(20,15);
        printf("Exit \n");
        printf("if you Exit press y or Y \n");
        flag=getch();
        break;
        }
        }
    }
    else {

    }
    }
    return 0;
}
/*void SetColor(int ForgC){
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
             gotoxy(10,11);
             SetColor(15);
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
                gotoxy(10,11);
                SetColor(15);
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
                gotoxy(10,11);
                SetColor(15);
         }
     }
 }

 void scan_struct_Students(struct student s[],int size, int studentno ){
    for(int i=studentno; i<size+studentno; i++){
        printf("Enter name [%d]",i+1);
        scanf("%s",s[i].name);
        printf("Enter age [%d]",i+1);
        scanf("%d",&s[i].age);
        printf("Enter ID [%d]",i+1);
        scanf("%d",&s[i].id);
        printf("Enter Gender [%d]",i+1);
        scanf(" %c",&s[i].gender);
    }

}
void print_struct_Students(struct student s[],int size ){
    printf("----------------- Display -------------------- \n");
    for(int i=0; i<size; i++){
          printf("name[%d] = %s \n",i+1,s[i].name);
          printf("gender[%d] = %c \n",i+1,s[i].gender);
          printf("age [%d]=  %d \n",i+1,s[i].age);
            printf("id [%d] =  %d \n",i+1,s[i].id);
    }

}

*/
