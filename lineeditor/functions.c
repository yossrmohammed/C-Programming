#include <windows.h>
#include <dos.h>
#include <dir.h>
#include <conio.h>
#include "definition.h"
void gotoxy(int x,int y)
 {
   COORD coord={0,0};
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }
int lengthofstring(u8 s[]){
   u16 i=0;
    while(s[i]!=0){
        i++;
}
return i;
}
void display(u8 s[]){
    system("cls");
    gotoxy(0,5);
    printf("%s", s);
}
void deletechar(u8 s[], u16 postion, u16 *len){
    //printf("\n %d",j);
    while(postion<=*len){
        s[postion]=s[postion+1];
        postion++;
        }
        *len=lengthofstring(s);
        display(s);
        //printf("\n %d", len);

}
void add(u8 s[], u8 c, u16 postion, u16 *len){
    u16 i=*len;
    while(i>=postion){
            s[i+1]=s[i];
            i--;
    }
    *len++;
    s[postion]=c;

    display(s);

}
