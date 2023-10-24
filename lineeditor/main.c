#include <stdio.h>
#include <stdlib.h>

#include "definition.h"

int main()
{
    u8 string [SIZE]= "Hello from line editor";
    //char string [SIZE];

    s8 key;
    u16 length=lengthofstring(string);
    u16 i=length;
    u8 flag='N';
    //printf("%d", length);
    /*gotoxy(0,5);
    printf(" %s",string);*/
    /*printf("Enter a string \n");
    scanf("%[^\n]s", string);*/
    display(string);
    //printf("%d", length);
    while(flag != 'Y' && flag != 'y'){
        //display(string);
        key= getch();
        if(key==-32){
            key= getch();
            switch(key){
            case LEFT_KEY:{
                if(i>0){
                    gotoxy(i-1,5);
                    i--;
                }
                //printf("\n %d", i);
                break;
                }
            case RIGHT_KEY:{
                if(i<=0 || i<length){
                    gotoxy(i+1,5);
                    i++;
                    }
                    break;
                }
            }
        }
        else if(key==BACKSPACE){
            if(i>length){
                i=length;
            }
            else if(i<=0){
                i=1;
            }
            u16 j=i-1;
            deletechar(string,j,&length);
            //printf("\n %d",length);
            //printf("\n %s", string);

        }
        else if(key==ENTER){
            display(string);
            printf("\n IF you want to exit press y \n");
            flag=getch();
            if(flag!='y'){
                display(string);
            }
        }
        else{
            add(string,key,i,&length);
            //i=length;
        }

    }
    return 0;
}
