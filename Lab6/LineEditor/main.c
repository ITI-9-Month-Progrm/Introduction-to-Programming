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
#define size 10
#define gotoxyDistance 15

int main()
{



    char arr[size ];     //to store data
    char *ptrStr,*ptrEnd,*ptrCurr ;   // to hold addresses and its values
    int exitFlag=0,start=0,end=0,curr=0,i=0; //for looping
    char c;  // for read


    ptrStr=ptrCurr=ptrEnd=arr;  // all pointers hold start of array

    clrscr();
    gotoxy(curr+gotoxyDistance,gotoxyDistance);   //start at this position

    do
    {

        c=getch();
        switch(c)
        {

        case -32:   //for move left,right ,home or end
            c=getch();
            switch(c)
            {
            case Left:
                if(curr!=start)
                {
                    curr--;
                    ptrCurr--;
                }

                break;
            case Right:
                if(curr!=end)
                {
                    curr++;
                    ptrCurr++;
                }
                break;
            case Home:
                curr=start;
                ptrCurr=ptrStr;
                break;
            case End:
                curr=end;
                ptrCurr=ptrEnd;

                break;
            }
               gotoxy(curr+gotoxyDistance,gotoxyDistance);  // move to new position after updating of current position and its value

            break;
            //to print final string and put '/' to determine end of string
        case Enter:
            *ptrEnd='/';
            printf("\n");
            while(arr[i]!='/')
            {
                printf("%c",arr[i]);
                i++;
            }
            exitFlag=1;  // to exit from loop
            break;
        case Esc:
            exitFlag=1;
            break;
        default :

            if(isprint(c))  //if c is a:z or A:Z
            {
                if(curr<start+size)   //to read character and put in specific index of array
                {
                    printf("%c",c);
                    *ptrCurr=c;
                    if(curr==end)
                    {
                        end++;
                        ptrEnd++;
                    }

                    curr++;
                    ptrCurr++;
                    }
                    }
            break;}
        }while(exitFlag!=1);
    return 0;
}
