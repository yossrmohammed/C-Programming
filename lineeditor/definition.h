#ifndef DEFINITION_H_INCLUDED
#define DEFINITION_H_INCLUDED
#define SIZE 100
#define RIGHT_KEY 77
#define LEFT_KEY 75
#define BACKSPACE 8
#define ENTER 13

typedef unsigned char  u8;
typedef signed char  s8;
typedef unsigned short int  u16;
typedef signed short int  s16;
typedef unsigned long int  u32;
typedef signed long int  s32;

void gotoxy(int x,int y);
int lengthofstring(u8 s[]);
void display(u8 s[]);
void deletechar(u8 s[], u16 shift, u16 *len);
void add(u8 s[], u8 c, u16 postion, u16 *len);


#endif // DEFINITION_H_INCLUDED
