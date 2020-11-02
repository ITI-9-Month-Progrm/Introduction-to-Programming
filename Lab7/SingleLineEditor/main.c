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


char * lineEditor(int size,int xpos,int ypos,char rangeStart,char rangeEnd)
{
    char *arr;
    arr=(char *)malloc(size*sizeof(char));  //for dynamic allocated memory
    char *ptrStr,*ptrEnd,*ptrCurr ;   // to hold addresses and its values
    int exitFlag=0,start=0,end=0,curr=0,i=0; //for looping
    char c;  // for read


    ptrStr=ptrCurr=ptrEnd=arr;  // all pointers hold start of array

    clrscr();
    gotoxy(curr+xpos,ypos);   //start at this position

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
               gotoxy(curr+xpos,ypos);  // move to new position after updating of current position and its value

            break;
            //to print final string and put '/' to determine end of string
        case Enter:
            *ptrEnd='/';
            return arr;
            exitFlag=1;  // to exit from loop
            break;
        case Esc:
            exitFlag=1;
            break;
        default :

            if(isprint(c))  //if c is a:z or A:Z or any range
            {
                if(curr<start+size)   //to read character and put in specific index of array
                {
                   if(c>=rangeStart && c<=rangeEnd)
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
                    }
            break;}
        }while(exitFlag!=1);


}

int main()
{
    int size,xPosition,yPostion,i;
    char start,end,c;
    char *ptr;
   printf("please Enter Length of String:\n");
   scanf("%d",&size);
   printf("please Enter X and Y Position:\n");
   scanf("%d %d",&xPosition,&yPostion);
   printf("please Enter start range:\n");
   start=getche();
   c=getch();
   printf("\nplease Enter end range:\n");
   end=getche();
   ptr=lineEditor(size,xPosition,yPostion,start,end);
   printf("\n");
   clrscr();
   printf("the final string :\n");
   for(i=0;i<size;i++){
    printf("%c",ptr[i]);
   }
   printf("\n");

    return 0;
}
