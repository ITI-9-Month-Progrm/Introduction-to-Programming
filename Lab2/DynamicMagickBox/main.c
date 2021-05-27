#include <stdio.h>
#include <stdlib.h>
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
    int row,col,mid=0,size,con=0;
    printf("Please Enter size of matrix \n  ");
    scanf("%d",&size);
    if(size%2==0)
    {
        printf("This is incorrect size please enter odd size ");
    }
    else
    {
        row=1;
        mid=(size+1)/2;
        col=mid;
        con=size*size;
        int i;
        for(i=1; i<=con; i++)
        {
            gotoxy(col*3,row*3);
            printf("%d",i);
            if(i%size)
            {
                col--;
                row--;
            }
            else
            {
                row++;
            }
            if(col==0 )
            {
                col=size;
            }
            if(row==0 )
            {
                row=size;
            }
            if(col==size+1)
            {
                col=1;
            }
            if(row==size+1)
            {
                row=1;
            }
        }
    }
    return 0;
}
