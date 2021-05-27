#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sum=0,avg=0;
    int arr[5];
    printf("Please Enter Element of Array:\n");
    for(i=0;i<5;i++){
            scanf("%i",&arr[i]);
            sum+=arr[i];
    }
    avg=sum/5;
    printf("\n Sum is : %d",sum);
    printf("\n Average is : %d",avg);
    return 0;
}
