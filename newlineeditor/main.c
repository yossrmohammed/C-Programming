#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
#include <conio.h>
#define SIZE 100
#define RIGHT_KEY 77
#define LEFT_KEY 75
#define BACKSPACE 8
#define ENTER 13



void gotoxy(int x,int y);
int lengthofstring(char s[]);
void display(char s[]);
void deletechar(char s[], int postion, int len);
void insertdata(char s[], char c, char postion, int len);
int main()
{
    char string [SIZE]="";
    int length=0;
    int i=length;
    char key;
    while(1){
        key=getch();
        //fflush0(stdin);
        if(key==-32){
            key= getch();
            switch(key){
            case LEFT_KEY:{
                //printf("%d \n", i);
                if(i<0){
                    i=0;
                }

                if(i>0|| i<=length){
                    gotoxy(i-1,5);
                    i--;
                }
                 //printf("\n %d \n ", i);

                break;
                }
            case RIGHT_KEY:{
                if( i<=length){
                    gotoxy(i+1,5);
                    i++;
                }
                    break;
                }
            }

        }
        else if(key==BACKSPACE){

            //int j=i;
            deletechar(string,i-1,length);
            length=lengthofstring(string);
            i--;
            if(i<0){
                i=0;
            }
            printf(" \n i= %d ",i );
            gotoxy(i,5);

        }
        else if(key==ENTER){
                display(string);
        }
        else{
            insertdata(string, key ,i ,length);
            length=lengthofstring(string);
            //printf(" \n %s ",string );
            gotoxy(i+1,5);
            i++;
            //printf(" \n i= %d ",i );

        }



    }
    return 0;
}

void gotoxy(int x,int y)
 {
   COORD coord={0,0};
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }
void display(char s[]){
    system("cls");
    printf("Length of string = %d", lengthofstring(s));
    gotoxy(0,5);
    printf("%s",s);


}
 lengthofstring(char s[]){
     int i=0;
 while(s[i]!=0){
    i++;
 }
 return i;
 }
void insertdata(char s[], char c, char postion, int len){
    for(int i=len; i>=postion; i--){
        s[i+1]=s[i];
    }
    s[postion]=c;
    display(s);
    //printf(" \n len=%d \n i=%d",*len,*postion );

}
void deletechar(char s[], int postion, int len){
    //printf("\n %d",j);
    while(postion<=len){
        s[postion]=s[postion+1];
        postion++;
        }
        //*len=lengthofstring(s);
        display(s);
        //printf("\n %d", len);

}
