#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3;
    printf("Enter the numbers :");
    while(scanf("%d", &num1) != 1 || scanf("%d", &num2) != 1 || scanf("%d", &num3) != 1){
    printf("Error: Input is not an integer type.\n");
    scanf("%*s");
    printf("Enter numbers again: \n");


}
  if (num1 <= num2 && num1 <= num3){
      printf("%d is the smallest number.", num1);

  }



  else if (num2 <= num1 && num2 <= num3)
    printf("%d is the smallest number.", num2);


  else
    printf("%d is the smallest number.", num3);


    return 0;
}
