#include <stdio.h>
#include <stdlib.h>
#define size 5
int main()
{
    int array[size];
    int*ptr;
    int i;
    ptr=array; //ptr = array[0]
    printf("Please enter elements of array \n");
    for(i=0;i<size;i++){
        scanf("%i",ptr+i);  //ptr at adddress ff00 then ptr+1 will be ff04
    }
    printf("The elements of array \n");
    for(i=0;i<size;i++){
        printf("%i",*ptr+i);
        printf("\n");
    }
    return 0;
}
