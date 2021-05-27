#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[3][2]= {{2,7},{3,9},{4,8}};
    int arr2[2][3]= {{1,3,5},{2,4,6}};
    int arr3[3][3];
    int i,j,sum=0;
    for(i=0; i<12; i++)
    {
        for(j=0; j<2; j++)
        {
           sum=sum+(arr1[i/3][j]*arr2[j][i%3]);
            arr3[i/3][i%3]=sum;
        }
        sum=0;
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf(" " " %d",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
