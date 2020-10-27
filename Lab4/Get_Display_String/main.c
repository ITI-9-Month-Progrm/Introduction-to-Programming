#include <stdio.h>
#include <stdlib.h>
#include<string.h>



#define Enter 13
#define Esc 27

int main()
{
    char str[101];
    int i,j;
    printf("Please Enter chars of string \n");
   for(i=0;i<101;i++){
    str[i]=getche();
    switch(str[i]){
case Enter:
    system("cls");
    printf("string is \n");
    for(j=0;j<i;j++){
        printf("%c",str[j]);
    }
    break;
case Esc:
    system("cls");
    exit(0);
    break;
    }
   }




    return 0;
}
