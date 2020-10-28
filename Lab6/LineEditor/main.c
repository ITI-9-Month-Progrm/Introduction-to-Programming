#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include"conio.c"

#define NPen 0x07
#define HPen 0x70
#define Right 77
#define Left  75
#define Enter 13
#define Home 71
#define End 79
#define Esc 27
#define size 5
int main()
{
    system("cls");
    char arr[size];
    char *ptr;
    int i,j,current=0,exitFlag=0,lenstr=0;
    char c;


    ptr=arr;
    _flushall();
    i=0;
    do
    {
        textattr(HPen);
        ptr[i]=getchar();
        current=i;
        switch(ptr[i]){
    case -32:
        c=getch();
        switch(c){
        case Left:
            current=i-1;

            if(current<0){
                 current=i;
                 ptr[current]=getchar();
            }
            break;
        case Right:
            current=i+1;
            if(current>i){
                current=0;
            }
            break;
        case Home:
            current=0;
            break;
        case End:break;
        current=i;
        case Enter:
            printf("test\n");
            break;
        case Esc :
            exit(0);
            break;
        }


        break;



        }++i;


   } while(exitFlag==0);
    return 0;
}
