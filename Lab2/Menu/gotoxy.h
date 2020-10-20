#ifndef GOTOXY_H_INCLUDED
#define GOTOXY_H_INCLUDED



#endif // GOTOXY_H_INCLUDED

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
