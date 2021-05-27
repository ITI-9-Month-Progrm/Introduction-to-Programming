#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,numx=0,numy=0;
    int arr[5];
    printf("Please Enter Element of Array:\n");
    for(i=0; i<5; i++)
    {
        scanf("%i",&arr[i]);
    }

    //Max number
    numx=arr[0];
    for(i=1; i<5; i++)
    {
        if(arr[i]>numx)
        {
            numx=arr[i];
        }
    }
    //Min Number
    numy=arr[0];

    for(i=1; i<5; i++)
    {
        if(arr[i]<numy)
        {
            numy=arr[i];
        }
    }
    printf("\n Max_Number is  %d",numx);

    printf("\n Min_Number is  %d",numy);

    return 0;
}
