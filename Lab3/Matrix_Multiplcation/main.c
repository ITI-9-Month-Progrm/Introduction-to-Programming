#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[3][2]={{2,7},{3,9},{4,8}};
    int arr2[2][3]={{1,3,5},{2,4,6}};
    int arr3[3][3];
    int i,j,k,sum=0;
    for(i=0;i<3;i++){ //row of arr1
        for(j=0;j<3;j++){ // col of arr 2
         for(k=0;k<2;k++){ // col of arr 1
            sum=sum+(arr1[i][k]*arr2[k][j]);
            arr3[i][j]=sum;
         }
         sum=0;
        }

    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" " " %d",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
