#include <stdio.h>
#include <stdlib.h>

int Factorial(int number){



        if(number==1 ){
    return number;
   }
   else{
    return number*Factorial(number-1);
}




}


int main()
{
   int num,res=0;
   printf("Please Enter Number :\n");
   scanf("%i",&num);
   res=Factorial(num);
   printf("The Factorial of number %i",res);
    return 0;
}
