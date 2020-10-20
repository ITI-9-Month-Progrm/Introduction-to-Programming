#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<windows.h>




void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int main()
{
    int row,col,mid=0,size=3;
    //start point
    row=1;
    mid=(size+1)/2;
    col=mid;
    int i;
    for (i=1; i<=9; i++)
    {

        gotoxy(col*2, row*2);
        printf("%d",i);

        if(i%3)
        {
            col--;
            row--;
        }
        else
        {
            row++;
        }
        if(col==0)
        {
            col=3;
        }
        if(row==0)
        {
            row=3;
        }
        if(row==4)
        {
            row=1;
        }
        if(col==4)
        {
            col==4;
        }

    }



    return 0;
}
