#include <stdio.h>
#include <stdlib.h>
#define ROW 2
#define COL 3
int main()
{
    int arr [ROW][COL]= {{1,2,3},{4,5,6}} , j,i;
    for(i=0; i<COL;i++){
            int sum=0;
            float avg=0;
      for(j=0;j<ROW;j++){
        sum+=arr[j][i];
      }
    avg=(float)sum/ROW;
    printf("the avrage of column %d is %f \n" , i+1 ,avg);
    }

    return 0;
}
