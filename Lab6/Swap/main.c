#include <stdio.h>
#include <stdlib.h>

void swapTwoNumber(int *num1,int *num2){
int temp;
temp=*num1 ;// num1 empty
*num1=*num2;//num2 empty
*num2=temp;

}

int main()
{
  int x,y;
  printf("Please Enter values of x and y:\n");
  scanf("%i",&x);
  scanf("%i",&y);
  printf("Values of x and y before swapping\n");
  printf("x is %i\n",x);
  printf("y is %i\n",y);
  swapTwoNumber(&x,&y);
  printf("Values of x and y after swapping\n");
  printf("x is %i\n",x);
  printf("y is %i\n",y);

    return 0;
}
