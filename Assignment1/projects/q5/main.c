#include <stdio.h>
#include <stdlib.h>

int main()
{
    char character ;
    printf("Enter the character :");
    scanf("%c", &character);
    while (isdigit(character)!=0) {
        printf("Invalid input\n");
        printf("Please enter character not number :\n");
        scanf(" %c", &character);

    }
    printf("the ASCII of character %c is %d", character , character);

    return 0;
}
