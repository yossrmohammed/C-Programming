#include <stdio.h>
#include <stdlib.h>
#define ROW 2
#define COL 3
int main()
{
    int arr1 [ROW][COL]= {{1,2,3},{4,5,6}} ,arr2 [ROW][COL]= {{1,2,3},{4,5,6}}, arr3 [ROW][COL],j,i;
    for(i=0; i<ROW;i++){
      for(j=0;j<COL;j++){
            arr3[i][j]= arr1[i][j]+arr2[i][j];

      }
    }
    printf("The result = \n");
    for(i=0; i<ROW;i++){
            printf("\n");
      for(j=0;j<COL;j++){
          printf("%d \t", arr3[i][j]);

      }
    }
    return 0;
}
