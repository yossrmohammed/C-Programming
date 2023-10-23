#ifndef STANDERD_DEF_H_INCLUDED
#define STANDERD_DEF_H_INCLUDED
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
#define SIZE 100
typedef unsigned char  u8;
typedef signed char  s8;
typedef unsigned short int  u16;
typedef signed short int  s16;
typedef unsigned long int  u32;
typedef signed long int  s32;
struct student{
    u8 name[10];
    u8 gender;
    u8 age;
    s32 id;
};

void display_struct_Student(struct student s);
void scan_struct_Students(struct student s[],int size, int studentno );
void print_struct_Students(struct student s[],int size );
 void display(int x);
 void gotoxy(int x,int y);
 void SetColor(int ForgC);
#endif // STANDERD_DEF_H_INCLUDED
